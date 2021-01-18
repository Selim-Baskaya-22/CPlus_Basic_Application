#include <iostream>
#include <locale>
#include <random>
#include <time.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");

    string odev1;
    cout << "Ödev 1'e giriş yapmak için 'o1' yazınız." << endl;
    cout << "Ödev 2'ye geçiş yapmak için 'o2' yazınız" << endl;
    cin >> odev1;
    while (odev1 == "o1")
    {
        cout << "----------1. ÖDEV----------" << endl << endl;
        int yıldız;
        cout << "Yıldız sayısı giriniz=";
        cin >> yıldız;

        for (int i = yıldız; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << "Ödev 2'ye geçiş yapmak için 'o2' yazınız. Ödev 1'e devam etmek için 'o1' yazınız" << endl;
        cin >> odev1;
    }


    int s1, s2, a, islem, puan = 0, sonuc = 0, anatahmin = 0, yanlissayar = 3, cansayar = 3, ipucusayar = 2;
    int sorusayar = 1;
    string ipucu;
    srand(time(NULL));
    //hocam sürekli cevap a şıkkında tutulduğu için 3 tane if kullandım ve 
    //cevap sıralaması en azından a-c-b olarak değiştirdim
    while (odev1 == "o2")
    {

        cout << "----------2. ÖDEV----------" << endl << endl;
        for (int l = 1; l <= yanlissayar;)
        {
            cout << "Soru " << sorusayar << ") " << endl;
            sorusayar += 1;
            s1 = 1 + rand() % 10;
            s2 = 1 + rand() % 10;
            islem = 1 + rand() % 4;
            cout << s1 << " ... " << s2 << endl;
            switch (islem)
            {
            case 1:
                sonuc = s1 + s2;
                break;
            case 2:
                sonuc = s1 - s2;
                break;
            case 3:
                sonuc = s1 * s2;
                break;
            case 4:
                sonuc = s1 / s2;
                break;
            }
            anatahmin += sonuc;
            cout << "A) " << anatahmin << endl;
            cout << "B) " << -4 + rand() % 30 << endl;
            cout << "C) " << -4 + rand() % 30 << endl;
            if (ipucusayar != 0)
            {
                cout << "İPUCU HAKKINIZ=" << ipucusayar << endl;
                cout << "İPUCU ALMAK İSTİYORSANIZ A'ya BASINIZ=";
                cin >> ipucu;
                if (ipucu == "A" && islem == 1)
                {
                    cout << "Kullanılan Operatör= +" << endl;
                    ipucusayar -= 1;
                }
                if (ipucu == "A" && islem == 2)
                {
                    cout << "Kullanılan Operatör= -" << endl;
                    ipucusayar -= 1;
                }
                if (ipucu == "A" && islem == 3)
                {
                    cout << "Kullanılan Operatör= *" << endl;
                    ipucusayar -= 1;
                }
                if (ipucu == "A" && islem == 4)
                {
                    cout << "Kullanılan Operatör= /" << endl;
                    ipucusayar -= 1;
                }
            }
            cout << "KALAN İPUCU HAKKINIZ=" << ipucusayar << endl;
            if (ipucusayar == 0)
            {
                cout << "İPUCU HAKKINIZ BİTMİŞTİR" << endl;
            }

            cout << "TAHMİN ETTİĞİNİZ SONUCU GİRİNİZ(LÜTFEN SAYI OLARAK GİRİŞ YAPINIZ!)=";
            cin >> a;
            if (a == anatahmin)
            {
                cout << "DOĞRU TAHMİN TEBRİKLER" << endl << endl;
                puan += 1;
                cout << "KALAN HAKKINIZ= " << cansayar << endl << endl;
            }
            else if (a != anatahmin)
            {
                cout << "YANLIŞ TAHMİN ÜZGÜNÜZ" << endl << endl;
                l += 1;
                cansayar -= 1;
                cout << "KALAN HAKKINIZ= " << cansayar << endl;
            }
            anatahmin = 0;

            cout << "ANLIK PUANINIZ= " << puan << endl << endl;

            //------------------------------------------------------
            if (l != 4)
            {
                cout << "Soru " << sorusayar << ") " << endl;
                sorusayar += 1;
                s1 = 1 + rand() % 10;
                s2 = 1 + rand() % 10;
                islem = 1 + rand() % 4;
                cout << s1 << " ... " << s2 << endl;
                switch (islem)
                {
                case 1:
                    sonuc = s1 + s2;
                    break;
                case 2:
                    sonuc = s1 - s2;
                    break;
                case 3:
                    sonuc = s1 * s2;
                    break;
                case 4:
                    sonuc = s1 / s2;
                    break;
                }
                anatahmin += sonuc;
                cout << "A) " << -4 + rand() % 30 << endl;
                cout << "B) " << -4 + rand() % 30 << endl;
                cout << "C) " << anatahmin << endl;
                if (ipucusayar != 0)
                {
                    cout << "İPUCU HAKKINIZ=" << ipucusayar << endl;
                    cout << "İPUCU ALMAK İSTİYORSANIZ A'ya BASINIZ=";
                    cin >> ipucu;
                    if (ipucu == "A" && islem == 1)
                    {
                        cout << "Kullanılan Operatör= +" << endl;
                        ipucusayar -= 1;
                    }
                    if (ipucu == "A" && islem == 2)
                    {
                        cout << "Kullanılan Operatör= -" << endl;
                        ipucusayar -= 1;
                    }
                    if (ipucu == "A" && islem == 3)
                    {
                        cout << "Kullanılan Operatör= *" << endl;
                        ipucusayar -= 1;
                    }
                    if (ipucu == "A" && islem == 4)
                    {
                        cout << "Kullanılan Operatör= /" << endl;
                        ipucusayar -= 1;
                    }
                }
                cout << "KALAN İPUCU HAKKINIZ=" << ipucusayar << endl;
                if (ipucusayar == 0)
                {
                    cout << "İPUCU HAKKINIZ BİTMİŞTİR" << endl;
                }
                cout << "TAHMİN ETTİĞİNİZ SONUCU GİRİNİZ(LÜTFEN SAYI OLARAK GİRİŞ YAPINIZ!)=";
                cin >> a;

                if (a == anatahmin)
                {
                    cout << "DOĞRU TAHMİN TEBRİKLER" << endl << endl;
                    puan += 1;
                    cout << "KALAN HAKKINIZ= " << cansayar << endl << endl;
                }
                else if (a != anatahmin)
                {
                    cout << "YANLIŞ TAHMİN ÜZGÜNÜZ" << endl << endl;
                    l += 1;
                    cansayar -= 1;
                    cout << "KALAN HAKKINIZ= " << cansayar << endl;
                }
                anatahmin = 0;

                cout << "ANLIK PUANINIZ= " << puan << endl << endl;
            }
            //------------------------------------------------------
            if (l != 4)
            {
                cout << "Soru " << sorusayar << ") " << endl;
                sorusayar += 1;
                s1 = 1 + rand() % 10;
                s2 = 1 + rand() % 10;
                islem = 1 + rand() % 4;
                cout << s1 << " ... " << s2 << endl;
                switch (islem)
                {
                case 1:
                    sonuc = s1 + s2;
                    break;
                case 2:
                    sonuc = s1 - s2;
                    break;
                case 3:
                    sonuc = s1 * s2;
                    break;
                case 4:
                    sonuc = s1 / s2;
                    break;
                }
                anatahmin += sonuc;
                cout << "A) " << -4 + rand() % 30 << endl;
                cout << "B) " << anatahmin << endl;
                cout << "C) " << -4 + rand() % 30 << endl;
                if (ipucusayar != 0)
                {
                    cout << "İPUCU HAKKINIZ=" << ipucusayar << endl;
                    cout << "İPUCU ALMAK İSTİYORSANIZ A'ya BASINIZ=";
                    cin >> ipucu;
                    if (ipucu == "A" && islem == 1)
                    {
                        cout << "Kullanılan Operatör= +" << endl;
                        ipucusayar -= 1;
                    }
                    if (ipucu == "A" && islem == 2)
                    {
                        cout << "Kullanılan Operatör= -" << endl;
                        ipucusayar -= 1;
                    }
                    if (ipucu == "A" && islem == 3)
                    {
                        cout << "Kullanılan Operatör= *" << endl;
                        ipucusayar -= 1;
                    }
                    if (ipucu == "A" && islem == 4)
                    {
                        cout << "Kullanılan Operatör= /" << endl;
                        ipucusayar -= 1;
                    }
                }
                cout << "KALAN İPUCU HAKKINIZ=" << ipucusayar << endl;
                if (ipucusayar == 0)
                {
                    cout << "İPUCU HAKKINIZ BİTMİŞTİR" << endl;
                }
                cout << "TAHMİN ETTİĞİNİZ SONUCU GİRİNİZ(LÜTFEN SAYI OLARAK GİRİŞ YAPINIZ!)=";
                cin >> a;
                if (a == anatahmin)
                {
                    cout << "DOĞRU TAHMİN TEBRİKLER" << endl << endl;
                    puan += 1;
                    cout << "KALAN HAKKINIZ= " << cansayar << endl << endl;
                }
                else if (a != anatahmin)
                {
                    cout << "YANLIŞ TAHMİN ÜZGÜNÜZ" << endl << endl;
                    l += 1;
                    cansayar -= 1;
                    cout << "KALAN HAKKINIZ= " << cansayar << endl;
                }
                anatahmin = 0;

                cout << "ANLIK PUANINIZ= " << puan << endl << endl;
            }
        }
        cout << "TOPLAM PUANINIZ= " << puan << endl;
        cout << "Program Hakkında Görüşlerinizi Yazarsanız Sevinirim Hocam :) = ";
        cin >> odev1;
        cout << endl;
        cout << "Teşekkür ederim. İyi günler dilerim. Selim BAŞKAYA" << endl << endl;
    }

}



















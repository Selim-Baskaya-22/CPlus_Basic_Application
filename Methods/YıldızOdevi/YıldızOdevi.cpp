# include <locale.h>
# include <iostream>
    using namespace std;
    int yildiz(int yildizsayisi)
    {
        for (int i = yildizsayisi; i >= 0; i--)
        {
            for (int a = i; a > 0; a--)
            {
                cout << "*";
            }
            cout << endl;
        }
        return yildizsayisi;
    }
    int main()
    {
        setlocale(LC_ALL, "Turkish");
        int yildizsayi;
        cout << "Yıldız Sayısı Giriniz=";
        cin >> yildizsayi;
        yildiz(yildizsayi);
    }
  
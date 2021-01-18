#include <locale.h>
#include <iostream>
using namespace std;

bool tekcift()
{
    int sayi;
    cout << "Sayi giriniz=";
    cin >> sayi;
    if (sayi % 2 == 0)
        return true;
    else
        return false;
}

void yazdır() 
{

    bool durum = tekcift();
        
    if (durum==true)
    {
        cout << "çift";
    }
    else
    {
        cout << "tek";
    }
  
}
         


int toplam(int s1,int s2)
{ 
    return s1 + s2;
}

int üs(int sayi,int üs)
{
    int toplamüs=1;
    for (int i = 1; i <= üs; i++)
    {
        toplamüs = sayi * toplamüs;
    }
    return toplamüs;
}
int dcevre(int kk, int uk)
{
    return (kk + uk) * 2;
}
int dalan(int kk, int uk)
{
    return kk * uk;
}

void asal()
{
    int asalmi;
    cin >> asalmi;
    int i,sonuc=0;
    for ( i = 2; i <=asalmi-1 ; i++)
    {
        sonuc = 0;
        sonuc=asalmi % i;
        if (sonuc==0)
        {
            break;            
        }
    }
    if (sonuc == 0)
        cout << "asal değil";
    else
        cout << "asal";
    
}


bool number(int asalmi)
{
    bool sonuc = true;
    if (asalmi <= 1)
    {
        sonuc = false;
    }
    else
    {
        for (int i = 2; i <= asalmi / 2; i++)
        {
            sonuc = asalmi % 2;
        }
        if (sonuc == 0)
        {
            cout << "Sayı asal değildir";
        }
        else
        {
            cout << "Sayı asaldır";
        }
    }

    return asalmi;
}
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    cout << "Sayi giriniz=";
    cin >> sayi;
    number(sayi);


}





#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
	
	
    setlocale(LC_ALL,"Turkish");
    cout << "---------Asal Sayı Bulma--------" << endl;

	int asalmi,sonuc;
	basadön:
	cout << "Sayı giriniz= ";
	cin >> asalmi;
	if (asalmi<=2) 
	{
		cout << "Girilen sayi 0-1-2 olamaz.Lütfen tekrar deneyiniz!!!" << endl;
		goto basadön;
	}
	/*for (int i = 2; i <= asalmi-1;)
	{

		sonuc = asalmi % i;
		if (sonuc!=0)
		{
			cout << "Sayı asaldır";
			i += asalmi;
		}
		else
		{
			cout << "Sayı asal değildir";
			cout << i;
			i += asalmi;
		}
	}*/
	for (int i = asalmi *(-1); i <= asalmi; i++)
	{

		sonuc = asalmi % i;
		
		
		if (sonuc == 0)
		{			
			cout << i;			
		}
		
	}


}


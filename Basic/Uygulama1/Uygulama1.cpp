
#include <iostream>
#include <locale>
using namespace std;  
int main()
{

	int a, b = 1, sonuc = 0;
	cin >> a;
	cin >> b;
	for (int i = 0; i < 10; i++)
	{  
      
      
		sonuc = a + b;
    // sonuc değişkeninin değerini, b değişkenine atıyoruz.  
			cout << sonuc << endl;
        
    // a ile b değerlerini topluyoruz ve sonuc değişkenine atıyoruz.  
			a = b;
			// b değişkeninin değerini, a değişkenine atıyoruz.  

			b = sonuc;
        
    // sonuc değerini konsola yazdırıyoruz.  
              
        }      











	//int sayi;
	//cin >> sayi;
	//int sonuc=1 ;
	//for (int i = sayi; i > 1; i--)
	//{
	//	sonuc *= i;
	//}
	//cout << sonuc;
	//int i;
 //   setlocale(LC_ALL,"Turkish");
	//for ( i = 1; i < 10; i+=2)
	//{
	//	cout << i;
	//}
	//cout << endl;
	//cout << i;
	//int toplam = 0;
	/*for (int a = 0; a <=10; a++)
	{
		if ( a % 2 != 0)
		{
			cout << a;
		}

	}*/
	//cout << toplam;
	/*for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 = 0 )
		{
			cout << i << endl;
		}
	}*/
}

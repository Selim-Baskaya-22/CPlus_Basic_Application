#include <iostream>
#include <locale>
using namespace std;

int sum()
{
	/*
		Kullanıcı 0 (sıfır)girene kadar kullanıcıdan değer isteyelim
		Girdiği değerlerden çiftlerin toplamlarını ve teklerin toplamlarını ekrana yazdıralım
		Örn : Girdiler: 1 3 2 7 6 0
		Çıktılar :
		Çift toplam = 8
		Tek toplam = 11
	*/
	cout << "----------1. Ödev----------" << endl << endl;
	int number, sumodd = 0, sumeven = 0;
	do
	{
		cout << "Sayı Giriniz= ";
		cin >> number;
		if (number % 2 == 0 ? sumeven += number : sumodd += number);

	} while (number != 0);
	cout << "Çift Toplam= " << sumeven << endl;
	cout << "Tek Toplam= " << sumodd << endl << endl;
	return 0;
}
int posnegsum()
{
	/*
		Kullanıcı 0 (sıfır)girene kadar kullanıcıdan değer isteyelim
		Girdiği değerlerden negatiflerin toplamlarını ve pozitiflerin toplamlarını ekrana yazdıralım
	    Örn : Girdiler: -1 1 - 2 - 3 2 - 7 6 0
		Çıktılar :
		Pozitif toplam = 9
	    Negatif toplam = -13
	*/
	cout << "----------2. Ödev----------" << endl << endl;
	int number2, sumneg = 0, sumpos = 0;
	do
	{
		cout << "Sayı Giriniz= ";
		cin >> number2;
		if (number2 < 0 ? sumneg += number2 : sumpos += number2);

	} while (number2 != 0);

	cout << "Pozitif Toplam= " << sumpos << endl;
	cout << "Negatif Toplam= " << sumneg << endl << endl;
	return 0;
}
int multiplysum()
{
	/* 
		Kullanıcı 0 (sıfır) girene kadar kullanıcıdan değer isteyelim
		Girdiği değerlerden negatiflerin çarpımlarını ve pozitiflerin çarpımlarını ekrana yazdıralım
		Örn:Girdiler: -1 1 -2 -3 2 -7 6 0
		Çıktılar:
		Pozitif çarpım= 12
		Negatif çarpım= 42
	 */
	cout << "----------3. Ödev----------" << endl << endl;
	int number3, multiplyneg = 1, multiplypos = 1;
	do
	{
		cout << "Sayı Giriniz= ";
		cin >> number3;
		if (number3 != 0 && number3 < 0 ? multiplyneg *= number3 : 1);
		if (number3 != 0 && number3 > 0 ? multiplypos *= number3 : 1);
	} while (number3 != 0);

	//if (multiplypos==1)	
	//	multiplypos -= 1;
	//if (multiplyneg==1)
	//	multiplyneg -= 1;
	
	cout << "Pozitif çarpım= " << multiplypos << endl;
	cout << "Negatif çarpım= " << multiplyneg << endl;
	return 0;

}
int sum1(int s1, int s2)
{
	return s1 + s2;
}
void merhabaa(int miktar)
{
	for (int i = 0; i < miktar; i++)
	{
		cout << "Merhaba" << endl;
	}
}
void merhaba()
{
	cout << "Merhaba";
}
int main()
{
	setlocale(LC_ALL,"Turkish");	
	//sum();
	//posnegsum();
	//multiplysum();
	//merhaba();
	//int topla= sum1(2, 3);
	//cout << "Sonuc=" << topla;
	//int sayi;
	//cout << "Sayi giriniz=";
	//cin >> sayi;
	//merhabaa(sayi);

	
}



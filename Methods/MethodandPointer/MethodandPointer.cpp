#include <locale.h>
#include <iostream>
using namespace std;
void polindrom(int no)
{
	int a, b, temp = 0;
	
	b = no;
	while (no > 0)
	{
		a = no % 10;
		no = no / 10;
		temp = temp * 10 + a;
	}

	if (temp == b)
	{
		cout << "Girilen Sayi Palindrom";
	}
	else
	{
		cout << "Girilen Sayi Palindrom Degil";
	}

}
int main()
{
    setlocale(LC_ALL, "Turkish");
	int no;
	cout << "Herhangi bir sayi giriniz: ";
	cin >> no;
	polindrom(no);
}


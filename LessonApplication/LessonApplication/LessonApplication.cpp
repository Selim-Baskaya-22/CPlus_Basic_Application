#include <locale>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int s1,çarp=1;   
    do
    {
        cout << "Sayı giriniz=";
        cin >> s1; 
        if (s1 != 0 ? çarp = çarp * s1:çarp);
       
   
        
    } while (s1 != 0);  
    cout << "Sonuç= "<<çarp;
  
}


#include <locale.h>
#include <iostream>
using namespace std;
void rastgele();
int main()
{
    setlocale(LC_ALL, "Turkish");
    rastgele();
    /*int dizi[4]{1,2,3,4};
        
        for (int i = 0; i <=4; i++)
        {
            cout << dizi[i]<<"a";
        }*/

     /*   int dizii[] = { 1,2,3,4,5 };
        int* ptr2 = dizii;
        cout << ptr2[0];*/
}
void rastgele()
{
    srand(time(0));
    int sayi = 1+rand() % 100;
    int sayidizi[10];
    for (int i = 0; i <= 10; i++)
    {
        sayidizi[i] = sayi;
    }
   
        for (int a = 0; a < 11; a++)
        {
            if (sayi % 4 == 0)
            {
                cout << sayidizi[a];
            }
        }
    

}


#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    cout << "Hello Worİıld!\n";
}


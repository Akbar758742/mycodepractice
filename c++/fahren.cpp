#include<iostream>
#include<iomanip>

using namespace std;
#include<conio.h>
int main()
{
    double c,f;
    cout <<setw(20);
    cout<< "enter temperature in celsius:";
    cin >> c;
    f=1.8*c;
    cout << "the temperature is fahrenheit is:"<<f;
    getch();
}

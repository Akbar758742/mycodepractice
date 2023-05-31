#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a;
    cin >>a;
    switch(a)
    {
    case 1:
               cout << "zero";
        break;
    case 2:
             cout   << "one";
        break;
    case 3:
             cout   << "three";
    case 4:
            cout    << "four";
        break;
    case 5:
              cout  << "five";
        break;
    case 6:
             cout   << "six";
    case 7:
              cout  << "seven";
        break;
    case 8:
             cout   << "eight";
        break;
    case 9:
              cout  << "nine";
    default:
        cout << "this is not a digit";
    }
}

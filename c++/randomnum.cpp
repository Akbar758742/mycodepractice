#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    int randomnum;
    for(int i=1;i<=5;i++)
    {
        randomnum=rand()%5+1;
        cout << "random num is:"<<randomnum<<endl;
    }
}

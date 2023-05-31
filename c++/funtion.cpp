#include<iostream>
using namespace std;
int main()
{
 a();
 b();
 a();
}

a()
{
    printf("\nhello bro");
}
b()
{
    a();
}


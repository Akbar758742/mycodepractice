#include<bits/stdc++.h>
using namespace std;

int main()
{
int n, m;

    cin >> n>>m;


    int days = n + (n - 1) / (m - 1);

    cout <<  days <<endl;

return 0;
}

#include<bits/stdc++.h>
using namespace std;
class student{
  public:
      int id;
      double gpa;
      void display()
      {
          cout<<id<<"   "<<gpa<<endl;
      }

};
int main()
{
    student akbar,asif;
    akbar.id=11;
    akbar.gpa=3.3;
    akbar.display();
    asif.id=13;
    asif.gpa=3.44;
    asif.display();

return 0;
}


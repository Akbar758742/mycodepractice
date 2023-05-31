  #include<iostream>
  #include<stdlib.h>
  using namespace std;
  int main()
  {
      while(1)
      {

      int guessingnum,randnum;
      cout << "enter your gussing num 1 to 10"<<endl;
      cin>>guessingnum;
      randnum=rand()%10+1;
      if(guessingnum==randnum)
      {
          cout<< "you have won"<<endl;

      }
      else
      {
          cout<< "you have lost.try again"<<endl;
          cout<< "randonnum was :"<<randnum<<endl;
      }

      }
  }

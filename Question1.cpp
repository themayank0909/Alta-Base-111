#include <iostream>
using namespace std;
int main()
{
int d;
cout<<"Enter days = ";
cin>>d;
int y = d/365;
int rm = d%365;
int m = rm/30;
int rd = rm%30;
 cout<<"year = "<<y<<endl;
 cout<<"month = "<<m<<endl;
 cout<<"day = "<<rd<<endl;
}

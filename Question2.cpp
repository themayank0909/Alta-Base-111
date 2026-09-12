#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number = ";
    cin>>a;
    cout<<"Enter 2nd number = ";
    cin>>b;

    int c;
     c=a;
     a=b;
     a=c;
    cout<<b<<" = is your 1st number"<<endl;

    cout<<a<<" = is your 2nd number";
}

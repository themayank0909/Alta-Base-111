#include<iostream>
using namespace std;
int main(){
    int n1,n2=0;
    cout<<"Enter a number = ";
    cin>>n1;
  int real=n1;
    while(n1>0){
       n2 = (n2*10)+(n1%10);
       n1/=10;
    }
 if (n2==real){
    cout<<"palindrome";
 }
 else {cout<<"not a palindrome";}
    
      
}

#include<iostream>
using namespace std;
int main(){
    int n1,n2,n,n4;
    cout<<"Enter a number = ";
    cin>>n;
    n1=0,n2=1;
    for(int i=0;i<=n;i++){
      cout<<n1<<" ";
      n4=n1+n2;
      n1=n2;
      n2=n4;
    }
}

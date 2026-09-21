#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    for (int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){cout<<"FIZZ BUZZ"<<endl;continue;} 
        else if(i%3==0){cout<<"FIZZ"<<endl; continue;}
        else if (i%5==0){cout<<"BUZZ"<<endl; continue;} 
       
        cout<<i<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Enter terms = ";
   cin>>n;
   int i;
    while(i<=n){
        int b;

        cin>>b;
        i++;
         if (b>0){
         s+=b; 
        }
        
        else break;
    }cout<<s;
   
}

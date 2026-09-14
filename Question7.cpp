#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter year = ";
    cin>>n;
    if(n%4==0){
        cout<<n<<" is leap year"<<endl;
    }
    else cout<<n<<" isn't leap year"<<endl;
    
}

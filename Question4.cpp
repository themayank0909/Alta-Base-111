#include<iostream>
using namespace std;
int main(){
    float p,t,d;
    cout<<"Enter price of item = ";
    cin>>p;
    cout<<"Enter discount persentage = ";
    cin>>d;
    cout<<"Enter tax prsentage = ";
    cin>>t;

    cout<<"MRP = "<<p<<endl;
    
    int dis = p-p*(d*0.01);
    cout<<"After discounted price = "<<dis<<endl;

    int tax = dis+dis*(t*0.01);
    cout<<"After tax = "<<tax<<endl;
   
}

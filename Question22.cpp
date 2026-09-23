#include<iostream>
using namespace std;

    void veluByPass(int x){
       x= x+20;
       
    }
    void veluByReference(int &x){
        x=x+30;
    }


    int main(){
    int x=10;
    cout<<x<<endl;
    veluByPass(x);
    cout<<"velu by pass after modifide = "<<x<<endl;
    veluByReference(x);
    cout<<"velu by reference after modified = "<<x<<endl;
}

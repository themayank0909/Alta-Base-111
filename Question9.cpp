#include<iostream>
using namespace std;
int main(){
    float w,h;
    cout<<"Enter your waight = ";
    cin>>w;
    cout<<"Enter your height in meter = ";
    cin>>h;
   
    float BMI=w/(h*h);
    cout<<BMI<<"  is your BMI";

    if (BMI<18.5){cout<<" you are Underwaight";}
    else if (BMI>=18.5 && BMI<25){
        cout<<" you are Normal";
    }
    else if (BMI>=25 && BMI<30){
        cout<<" you are Overwaight";
    }
    else cout<<" you are Obese";
}

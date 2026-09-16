#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number = ";
    cin>>a;
    cout<<"Enter 2nd number = ";
    cin>>b;
    char n;
    cout<<"Enter + - / * :-";
    cin>>n;

    switch (n)
    {
    case '+': cout<<a+b<<" sumation of the number";
        break;
    case '-': cout<<a-b<<" substraction of the number";
        break;
    case '*': cout<<a*b<<" multiplication of the number";
        break;
    case '/': cout<<a/b<<" division of the number";
        break;
    default : cout<<"you enter wrong character"; break;
    }
}

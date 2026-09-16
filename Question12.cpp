#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter month = ";
    cin>>n;


    switch (n)
    {
    case 1 : 
    case 2 : 
    case 12 : 
    cout<<"Winter season";
        break;
    case 3:
    case 4:
    case 5:
     cout<<"Spring season";
        break;
    case 6:
    case 7:
    case 8:
     cout<<"Summer season";
        break;
    case 9:
    case 10:
    case 11:
     cout<<"monsoon season";
        break;

    
    default: cout<<"invalid month";
        break;
    }
}

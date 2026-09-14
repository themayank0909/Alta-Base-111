#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter withdrawal amount = ";
    cin >> n;
    if (5000 >= n+2 && n % 100 == 0 && n>0)
    {
        cout << "Transaction Valid" << endl;
        if (true)
        {
            cout << "Remaining Balance = " << 5000 - n - 2 << endl;
        }
        
    }
    else
        cout << "Transaction not valid" << endl;
}

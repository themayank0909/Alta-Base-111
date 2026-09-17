#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number = ";
    cin >> n;

    bool prime = true;

    if (n <= 1)
        prime = false;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << n << " is prime number";
    else
        cout << n << " isn't prime number";

    return 0;
}

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
int main()
{
    int c = add(20, 40);
    cout << "Addition of int = " << c<<endl;

    float d = add(4.937f, 8.344f);
    cout << "Addition of float = " << d<<endl;

    return 0;
}

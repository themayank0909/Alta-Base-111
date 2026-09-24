#include <iostream>
using namespace std;

pair<int,int> maxmin(int a, int b)
{
    if (a < b)
    {
        return {a, b};
    }
    return {b, a};
}
int main(){
    int a = 50,b=25;
    pair <int,int> result= maxmin(a,b);
    cout<<"Minimum = "<<result.first<<endl;
    cout<<"Maximum = "<<result.second<<endl;

}

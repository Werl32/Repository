
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 15;
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += i;
        a++;
    }
    cout << sum;
}


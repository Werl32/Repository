#include <iostream>
#include <vector>
using namespace std;
int Increase (vector <int> v, int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] += n;
    }  
    for (int i = 0; i < v.size(); i++)
    {
        return v[i];
    }
}

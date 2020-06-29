#include <math.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    long long int n,m,a;
    cin >> n>>m>>a;
    long long int x = ceil((double)n/a);
    long long int y = ceil((double)m/a);
    cout<< x*y<<endl;
    return 0;
}



#include <math.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //For vectors
    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin(),v.end());

    // For ordinary array
    int n = 7; // array size
    int a[] = {4,2,5,3,5,8,3};
    sort(a,a+n);

    //String
    string s = "hello";
    sort(s.begin(), s.end());
    cout << s<<endl;


    return 0;
}
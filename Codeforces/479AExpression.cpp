#include <math.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int max = a+(b*c);
    if(max <= a*(b+c)){
        max = a*(b+c);
    }if(max <= a*(b*c)){
        max = a*(b*c);
    }if(max <= (a+b)*c){
        max = (a+b)*c;
    }if(max <= a+(b+c)){
        max = a+(b+c);
    }
    cout << max;



    return 0;
}
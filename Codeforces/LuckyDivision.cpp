#include <math.h>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> luckyList = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(size_t i=0; i<luckyList.size();i++){
        if(luckyList.at(i)<=n){
            if(n%luckyList.at(i)==0){
                cout << "YES\n";
                return 0;;
            }
        }else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "NO\n";



    return 0;
}
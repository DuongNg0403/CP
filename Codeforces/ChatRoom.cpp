#include <math.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <regex>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> v(s.begin(), s.end());
    int check = 0;
    for(int i = 0; i<v.size(); i++){
        
        if(v.at(i)=='h'){
            if(check==0){
                check++;
            }
            continue;
        }
        if(v.at(i)=='e'){
            if(check==1){
                check++;
            }
            continue;
        }if(v.at(i)=='l'){
            if(check==2||check==3){
                check++;
            }
            continue;
        }if(v.at(i)=='o'){
            if(check==4){
                cout << "YES"<<endl;
                return 0;
            }
            
        }
        
        
    }
    cout << "NO"<<endl;

    return 0;
}
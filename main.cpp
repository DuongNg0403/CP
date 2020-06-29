#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <algorithm>
using namespace std;
/////////// 4.1 
int sum(int a, int b){
    return a+b;
}

double sum(double a, double b){
    return a+b;
}

///////// 4.5
int sum(int numbers[], int size){
    int result = 0;
    for(int i = 0; i < size; i++){
        result+= numbers[i];
    }
    return result;
}


int main(){
    printf("%d\n",sum(1,10));
    int arr[9] = {8,5,3,7,1,6,2,9,4};
    sort(arr, arr+sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout<< arr[i]<<"\n";
    }
    printf("%d\n", sum(arr, sizeof(arr)/sizeof(arr[0])));

    
    return 0;
}


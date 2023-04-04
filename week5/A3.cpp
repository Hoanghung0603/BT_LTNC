#include <iostream>
using namespace std;

int count_even(int* arr, int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0) count++;
    }
    return count;
}

int main(){
    int arr[] = {0,2,4,6,1,5,6,8,8,7};
    int n=10;
    cout<<count_even(arr, n);
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int x=1;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-1; i++){
        sum+=arr[i]*(n-x);
        x++;
    }
    cout<<sum;
}

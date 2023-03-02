#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    string s = to_string(n);
    int k = s.length();
    int j=k/2;
    for(int i=0; i<j; i++){
        if(s[i]!=s[k-1-i]){
            return 0;
            }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    int arr[2];
    int count = 0;

    for(int i=0; i<n;i++){
        count =0;
        cin>>arr[0]>>arr[1];
        for(int j = arr[0]; j<=arr[1]; j++){
            if(check(j)) ++count;
        }
        cout<<count<<endl;
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int bsearch(vector<int> arr, int key,int n){
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r){
       mid = (l+r)/2;
       if (arr[mid]==key) return mid;
       else if(l>r) return -1;
       else if(arr[mid]>key) r=mid-1;
       else if(key>arr[mid]) l=mid+1;
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<< bsearch(arr,key,n);
    return 0;
}

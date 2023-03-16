#include <iostream>
#include <vector>

using namespace std;

int bsearch(vector<int> arr, int key,int n){
    int* ptr = &arr[0];
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r){
       mid = (l+r)/2;
       if (*(ptr+mid)==key) return mid;
       else if(l>r) return -1;
       else if(*(ptr+mid)>key) r=mid-1;
       else if(key>*(ptr+mid)) l=mid+1;
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

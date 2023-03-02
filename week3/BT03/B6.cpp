#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector <int>> arr(n, vector<int> (n,0)) ;
    int x =1;
    int j = (n-1)/2;
    int i =0;
    arr[i][j]=x;
    int a,b;
    a=i;
    b=j;
    while (x<=n*n-1){
        ++x;
        --a;
        ++b;
        if(a==-1) a=n-1;
        if(b==n) b=0;
        if( arr[a][b]==0){
             --i;
             ++j;
             if(i==-1) i=n-1;
             if(j==n) j=0;
             arr[i][j]=x;
        }
        else{
            ++i;
            arr[i][j]=x;
        }
        a=i;
        b=j;
     }

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<' ';
        cout<<endl;
    }

}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int x,e; e=x = 1;
    int col=n;
    int row = m-1;
    int limit = m*n+1;

    vector<vector<int>> arr(m, vector<int> (n));
    int i,j; i=0; j=-1;

    while(x!=limit){
        for(int k=0; k<col;k++){
            j+=e;
            arr[i][j]=x;
            x++;
        }
        for(int k=0; k<row; k++){
            i+=e;
            arr[i][j]=x;
            x++;
        }
        e*=-1;
        --col;
        --row;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<' ';
        cout<<endl;
    }
}

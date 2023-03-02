#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector< vector<char> > arr(m, vector<char> (n));
    vector< vector<int> > temp(m, vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];

            if(arr[i][j]!='*'){
                    temp[i][j]=0;
            }
            else temp[i][j]=10;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==0 && temp[i][j] >=10){
                if(j==0) {
                    ++temp[i+1][j+1];
                    ++ temp[i+1][j];
                    ++temp[i][j+1];
                }
                else if (j==n-1)  {
                    ++temp[i+1][j-1];
                    ++temp[i+1][j];
                    ++temp[i][j-1];
                 }
                 else{
                    ++temp[i][j-1];
                    ++temp[i][j+1];
                    ++temp[i+1][j-1]; ++temp[i+1][j]; ++temp[i+1][j+1];
                 }
            }
            else if (i==m-1 && temp[i][j]>=10){
                if(j==0) {
                    ++temp[i-1][j+1];
                    ++ temp[i-1][j];
                    ++temp[i][j+1];
                }
                else if (j==n-1)  {
                    ++temp[i-1][j-1];
                    ++temp[i-1][j];
                    ++temp[i][j-1];
                 }
                 else{
                    ++temp[i][j-1];
                    ++temp[i][j+1];
                    ++temp[i-1][j-1]; ++temp[i-1][j]; ++temp[i-1][j+1];
                 }
            }
            else if(j==0 && i!=0 && i!=m-1 && temp[i][j]>=10){
                ++temp[i-1][j];
                ++temp[i-1][j+1];
                ++temp[i][j+1];
                ++temp[i+1][j];
                ++temp[i+1][j+1];
            }
            else if( j==n-1 && i!=0 && i!=m-1 && temp[i][j]>=10){
                ++temp[i-1][j];
                ++temp[i-1][j-1];
                ++temp[i][j-1];
                ++temp[i+1][j];
                ++temp[i+1][j-1];
            }
            else if (temp[i][j]>=10){
                ++temp[i][j-1];
                ++temp[i][j+1];
                ++temp[i-1][j-1];
                ++temp[i-1][j];
                ++temp[i-1][j+1];
                ++temp[i+1][j-1];
                ++temp[i+1][j];
                ++temp[i+1][j+1];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]=='*') cout<<'*'<<' ';
            else cout<<temp[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

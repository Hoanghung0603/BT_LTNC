  #include <iostream>
#include <vector>

using namespace std;
int arr[100];
int col[100] ;
int d1[100] ;
int d2[100] ;
int n;
int count =0;
int result[100][100] {0};
void print()
{
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            if(arr[x]==y)
            {
                result[x][y]=1;
                cout<<result[x][y]<<' ';
                result [x][y]=0;
            }
            else cout<<result[x][y]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}
// a[i]=j con hau o vi tri i,j
void Try(int i)
{
    for(int j=1; j<=n; j++){
        if(col[j]==1 && d1[i-j+n]==1&& d2[i+j-1]==1)
        {
            arr[i]=j; // dat vao hang thu i, cot j
            col[j]=d1[i-j+n]=d2[i+j-1]=0;
            if(i==n)
                print();
                ++count;
            else Try(i+1);
            col[j]=d1[i-j+n]=d2[i+j-1]=1;
        }
    }
}

int main(){

    cin>>n;

    for(int x=1; x<=99; x++){
        col[x]=d1[x]=d2[x]=1;
    }
    Try(1);
}

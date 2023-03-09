#include <iostream>
using namespace std;
int arr[100];
int check[100] {0};
int n;

void print()
{
    for(int x=1; x<=n; x++)
        cout<<char(96+arr[x]);
    cout<<endl;
}

void permutation(int i)
{
    for(int j=1; j<=n; j++){
        if(check[j]==0)
        {
            arr[i]=j;
            check[j]=1;
            if(i==n) print();
            else permutation(i+1);
            check[j]=0;
        }
    }

}

int main(){
    cin>>n;
    permutation(1);

    return 0;
}

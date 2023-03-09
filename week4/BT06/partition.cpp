#include <iostream>
using namespace std;

int arr[100];
int x;
int k;
void print(int limit)
{
    for(int i=1; i<=limit; i++) cout<<arr[i]<<' ';
    cout<<endl;
}

void Try(int i, int k, int cursum)
{
    for(int j=k; j>=1; j--)
    {
        if(cursum+j<=x)
        {
            arr[i]=j;
            cursum+=j;
            if(cursum==x) print(i);
            else Try(i+1,j,cursum);
            cursum -=j;
        }
    }
}

int main(){
    cin>>x;
    k=x;
    Try(1,k,0);
    return 0;

}

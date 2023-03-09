#include <iostream>
using namespace std;

int result[100];
int n,k;

void print()
{
    for(int j=1; j<=k; j++)
        cout<<char(result[j]+96);
    cout<<endl;
}

void dosth(int i)
{
    for(int j=result[i-1]+1; j<=n-k+i; j++){
        result[i]=j;
        if(i==k) print();
        else dosth(i+1);
    }
}

int main(){
    cin>>n>>k;
    dosth(1);
    return 0;
}

#include <iostream>
using namespace std;

void test(int arr[]){
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(void*)<<endl; //kích thước một con trỏ
}

int main(){
    int arr[3]={1,2,3};
    cout<<sizeof(arr)<<endl;
    test(arr);

}

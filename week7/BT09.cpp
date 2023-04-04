#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char* concat(const char* a, const char* b){
    int n = strlen(a) + strlen(b) +1;
    char* result = new char[n];

    strcpy(result, a);
    strcat(result, " ");
    strcat(result, b);
    return result;
}

int main(){
//    const char a[] = "Hello";
//    const char b[] = "World";
//    cout << concat(a,b);

//    int* p = new int;
//    int* p2 = p;
//    *p = 10;
//     delete p;  // bộ nhớ mà con trỏ p2 trỏ tới sẽ bị xóa tại dòng này
//    *p2 = 100;  // truy nhập vào vùng bộ nhớ không hợp lệ
//     cerr << *p2;
//     delete p2;

    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;     //lệnh in không chạy như mong muốn

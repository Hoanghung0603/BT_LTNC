#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* str;
    String(){}
    String(const char* a) {
        str = new char[strlen(a)];
        strcpy(str,a);
    }

    void print() {cout<<str<<endl;}
    void append(const char* b){
        int n1 =strlen(str);
        int n2 =strlen(b);
        char* temp = new char[n1+n2];
        for(int i=0; i<n1; i++){
            *(temp+i)=*(str+i);
        }
        for(int i=n1; i<n2; i++){
            *(temp+i)=*(b+i-n1);
        }

    }
    ~String(){
        delete [] str;
        str=nullptr;
    }
};

int main(){
    String a("HELLO");
    a.print();
    a.append(" HI");
    a.print();
}

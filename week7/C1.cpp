#include <iostream>
using namespace std;

int len(char a[]){
    int n=0;
    for(char *p =a; *p!='\0'; p++) n++;
    return n;
}

void swap(char* a1, char* a2){
    char temp=*a1;
    *a1=*a2;
    *a2=temp;
}

void reverse(char a[]){
    int n=len(a);
    for(int i=0; i<n/2; i++) swap(&a[i], &a[n-i-1]);
}

void delete_char(char a[], char c){
    for(char *p =a;*p!='\0'; p++) {
        if(*p==c){
            for(char *ptr=p; *ptr!='\0'; ptr++) *ptr=*(ptr+1);
            p--;
        }
    }
}

void pad_right(char a[], int n){
    int x = len(a);
    if(x>n) return;

    else {
        char* p=&a[x];
        while(n-x!=0){
            *p='5';
            ++p;
            x++;
        }
        a[n]='\0';
    }
}

void pad_left(char a[], int n){
    int x = len(a);
    char b[x];
    char *pa =a;
    char* pb=b;
    for(; *pa!='\0'; pa++,pb++){  //cpy(b,a)
        *pb=*pa;
    }
    char* ptr=a;
    char* pb2=b;
    for(; ptr!=&a[n-x]; ptr++) *ptr='k';
    for(;ptr!=&a[n]; ptr++,pb2++) *ptr=*pb2;
    a[n]='\0';

}

void truncate(char a[], int n){
    int x = len(a); //20
    if(x<=n) return;
    char *p=&a[x];
    for(; p!=&a[n-1]; --p) *p='\0';
}

bool is_palindrome(char a[]){
    int n = len(a);
    int i=0;
    for(char *p =a; (p+i)!=&a[n/2]; i++){
        if(*(p+i)!=*(p+n-i-1)) {
                return 0;
        }
    }
    return 1;
}
int main(){
    char a[]="helloworld";
    char b[]="abba";
    reverse(a);
    cout<<a<<endl;
    delete_char(a,'l');
    cout<<a<<endl;
    pad_right(a,15);
    cout<<a<<endl;
    pad_left(a,20);
    cout<<a<<endl;
    cout<<((is_palindrome(b))?"true":"false")<<endl;
    truncate(a, 15);
    cout<<a<<endl;
}

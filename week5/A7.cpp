#include <iostream>
#include <cstring>
using namespace std;

int count(char* char1, char* char2){
    int count=0;
    int n1 = strlen(char1);
    int n2= strlen(char2);
    char tempchar[n1+1];
    for(int i=0; i<n2-n1+1; i++){
        for(int j=i; j<i+n1; j++){
            tempchar[j-i]=char2[j];
        }
        tempchar[n1]='\0';
        cout<<tempchar<<' '<<char1<<endl;
        if(strcmp(char1, tempchar)==0) ++count;
    }
    return count;
}

int main(){
    char char1[]="ab";
    char char2[]="abbababbbaab";
    cout<<count(char1, char2);
}

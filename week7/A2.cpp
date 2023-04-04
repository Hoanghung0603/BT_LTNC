#include <iostream>
using namespace std;

int main( )
{
//   char a[4] = "abc";
//   for (char *cp = a; (*cp) != '\0'; cp++) {
//      cout << (void*) cp << " : " << (*cp) << endl;
//   }
    int a[3]={1,2,3};
    for(int *cp = a; cp<a+3; cp++)
    {
        cout<<(void*) cp<<" : "<<*cp<<endl;
    }
//    double a[3]={1.2,2.3,3.4};
//    for(int *cp = a; cp<a+3; cp++)
//    {
//        cout<<(void*) cp<<" : "<<*cp<<endl;
//    }
   return 0;
}

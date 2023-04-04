#include <iostream>
using namespace std;

void swap_pointers(char* x, char* y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
//Khi truyền con trỏ vào hàm, con trỏ đó sẽ được copy vào tham số của hàm, và con trỏ mà hàm sử dụng trong phạm vi hàm sẽ là một bản sao của con trỏ đó
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}


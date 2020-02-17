//hw9_27
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   char a[20];
   int i;
   cout << "Input a string(<20)? ";
   cin.getline(a,20);  //¥Hcin¿é¤J¦r¦ê
   cout << "source string=" << a <<  endl;
   
   for(i=0;i<strlen(a);i++)
      if (*(a+i)==' ')
         *(a+i)='*';
      
   cout << "Destination string=" << a << endl;                             
   system("pause");
   return 0;
}

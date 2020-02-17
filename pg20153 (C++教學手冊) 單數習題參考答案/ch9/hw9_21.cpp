//hw9_21
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   int i;
   char a[2][20]={"Time is money","Have a good time"};
   int  b[6]={2,5,4,3,9,8};
   char c[11]="Enjoy C++!";
   for(i=0;i<2;i++)   
      cout << "a[" << i << "]=" << *(a+i) << endl;
   cout << "b[]=";
   for(i=0;i<6;i++)   
      cout << *(b+i) << " ";
   cout << endl << "c[]=";
   for(i=0;i<10;i++)   
      cout << *(c+i);
   cout << endl;
   system("pause");
   return 0;
}  


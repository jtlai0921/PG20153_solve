//hw8_13
#include<iostream>
#include<cstdlib>
#define MAX 5
using namespace std;
int main(void)
{
   float a[MAX];
   int i=0;
   float sum=0.0f;
   cout << "輸入五個浮點數" << endl;
   for(i=0;i<MAX;i++)
   {
      cout << "Input num:";
      cin  >> a[i];
   }     
   for(i=0;i<MAX;i++)
      sum+=a[i];         
   cout << "Average of all is " << sum/MAX << endl;         
   system("pause");
   return 0;
}            

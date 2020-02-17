//hw8_31
#include<cstdlib>
#include<iostream> 
#include<cstring>
using namespace std;
void reverse(char a[]);
int main(void)
{
   int i;
   char a[20]={0};
   cout << "Input a string:";
   cin.getline(a,20);
   cout << "轉換前的string=" << a << endl; 
   reverse(a); 
   cout << "轉換後的string=" ; 
   for(i=0;i<20;i++)
      if(a[i]!=0)\
         cout << a[i];
   cout << endl;
   
   system("pause");
   return 0;
}

void reverse(char a[20])
{
   int i,j;
   char b[20];
   for(i=0;i<20;i++)
       b[19-i]=a[i];
   for(i=0;i<20;i++)
       a[i]=b[i];
   return ;
}         

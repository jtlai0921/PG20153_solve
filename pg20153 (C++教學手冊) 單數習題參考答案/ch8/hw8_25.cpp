//hw8_25
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   char a[26]={0};
   int i,j;
   cout << "Input a number:";
   cin  >>j;
   for(i=0;i<26;i++)
      a[i]=char(i+97);

   if(j%2==0)
      for(i=1;i<=25;i=i+2)
         cout << a[i]<<" "; 
   else 
      for(i=0;i<=24;i=i+2)
         cout << a[i]<<" ";    
   cout << endl;
   
   system("pause");
   return 0;
}            

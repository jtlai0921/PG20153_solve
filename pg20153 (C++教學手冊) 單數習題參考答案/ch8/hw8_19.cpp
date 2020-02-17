//hw8_19
#include<iostream>
#include<cstdlib>
using namespace std;
int ma(int a[]);  
int main(void)
{
   int a[]={48,75,30,17,62};   
     cout <<"a°}¦C³Ì¤j­Èµù¼Ð a[" << ma(a) << "]" << endl;
         
   system("pause");
   return 0;
}

int ma(int a[])
{
   int i,maxa,max=a[0]; 
   for(i=0;i<5;i++) 
      if(a[i]>max)         
      {
         max=a[i];
         maxa=i;
      }   
   return maxa;
}         
    
   
     
        

//hw8_37
#include<cstdlib>
#include<cctype>
#include<iostream>
using namespace std;
void cntchar(char a[]);
int main(void)
{
   int i=0;
   char a[20]={0};
   cout << "Input a string:";
   cin.getline(a,20);
   while(a[i]!='\0')
      i++;
   cntchar(a);
         
   system("pause");
   return 0;
}

void cntchar(char a[])
{
   int k,i,n=0;
   for(i=0;i<strlen(a);i++)
      if(a[i]==' ')
      {
         for(k=i;k<strlen(a);k++)
            a[k]=a[k+1];
         i--;        
      }    
   cout << "刪除空白後結果:" << a << endl;
   return;
}     


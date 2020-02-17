//hw8_35
#include<cstdlib>
#include<cctype>
#include<iostream>
#include<cstring>
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
   int i,n=0;
   for(i=0;i<strlen(a);i++)
      if(isalpha(a[i]))        
         n=n+1;
   cout << "字串中有英文字母的個數有" << n << "個" << endl;
   return;
} 

//hw8_33
#include<cstdlib>
#include<iostream> 
#include<cctype>
using namespace std;
void isl(char a[]);
int main(void)
{
   int i=0;
   char a[20];
   cout << "Input a string:";
   cin.getline(a,20);
   while(a[i]!='\0')
      i++;
   isl(a);
         
   system("pause");
   return 0;
}

void isl(char a[])
{
   int i;
   for(i=0;i<strlen(a);i++)
      if(isupper(a[i]))         
         a[i]=tolower(a[i]);  
   cout << "after convert,string=" << a << endl;
   return;
}     

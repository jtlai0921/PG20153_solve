//hw8_29
#include<iostream>
#include<cstdlib>
using namespace std;
void repeat(int,string);
int main(void)     
{
   repeat(3,"Hello,C++");
   repeat(10,"I love C++"); 
   system("pause");
   return 0;
} 

void repeat(int k,string p)   
{
   int i;
   for(i=1;i<=k;i++)
      cout << p << endl;  
   cout << endl;
   return;
} 
     

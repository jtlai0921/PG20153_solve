//hw8_39
#include<cstring> 
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   int i,tol=0;
   char b[5][21];
   for(i=0;i<5;i++)
   {
      cout << "Input a string(<20)" << i+1 << ":";
      cin.getline(b[i],21);  
   }   
   for(i=0;i<5;i++)
      tol=tol+strlen(b[i]);
   cout <<"字串共有:" << tol << "個字元數" << endl; 
   system("pause");
   return 0;
}            

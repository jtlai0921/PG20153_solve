//hw7_23, myloop程式碼 
//將此範例存成檔名為myloop,編譯後於ms-dos下執行

#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
   int i;
   int a=atoi(argv[1]);
   for(i=0;i<a;i++)
    cout << "Hello kitty" << endl;
   system("pause");
   return 0;
}
 

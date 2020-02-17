//hw7_15
#include<iostream>
#include<cstdlib>
using namespace std;
float mod(int x=1,int y=1);  
int main(void)
{
   int a=5;
   cout << "mod()=" << mod() << endl;
   cout << "mod(" << a << ")=" << mod(a) << endl;
   cout << "mod(3,2)=" << mod(3,2) << endl;
   system("pause");
   return 0;
}

float mod(int x,int y)    
{
  return (float)x/y;
   
}         

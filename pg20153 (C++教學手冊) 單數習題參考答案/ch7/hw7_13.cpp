//hw7_13
#include<iostream>
#include<cstdlib>
using namespace std;
int times(int i,int j=1);  
int main(void)
{
   int a=5;
   cout << "times(" << a << ")=" << times(a) << endl;
   cout << "times(3,5)=" << times(3,5) << endl;
   system("pause");
   return 0;
}

int times(int i,int j)    
{
   return i*j;
}         

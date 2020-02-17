//hw7_17
#include<iostream>
#include<cstdlib>
using namespace std;
#define F(X) 4*((X)*(X))+6*(X)-5
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin  >>i;
   cout << "4*("<< i << "*" << i << ")+" << "6*" << i << "-5=" << F(i) << endl; 
   system("pause");
   return 0;
}
 

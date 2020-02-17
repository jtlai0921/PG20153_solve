//hw7_21
#include<iostream>
#include<cstdlib>
using namespace std;
#include "mymath.h"
int main(void)
{
   
   float i,j;
   cout << "Input a number i:";
   cin  >> i;
   cout << "Input a number j:";
   cin  >> j;
   cout << "(" << i << "+" << j << ")/2" << "ªº¥­§¡­È=" << AVG(i,j) << endl;
   cout << i << "*" << j << "ªº¿n=" <<TIMES(i,j) << endl;
   system("pause");
   return 0;
}      



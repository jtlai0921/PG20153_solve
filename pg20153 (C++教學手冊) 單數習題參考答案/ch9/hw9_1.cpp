//hw9_1
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
   short a=3;
   int b=20;
   double f=2.365;
   cout << "a=" << setw(5) << a << ",sizeof(a)=" << sizeof(a);
   cout << ",address=" << &a << endl;     
   cout << "b=" << setw(5) << b << ",sizeof(b)=" << sizeof(b);
   cout << ",address=" << &b << endl;   
   cout << "f=" << setw(5) << f << ",sizeof(f)=" << sizeof(f);
   cout << ",address=" << &f << endl;    
   system("pause");
   return 0;
}
           

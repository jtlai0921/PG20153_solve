//hw11_17
#include <iostream>
#include <cstdlib>
using namespace std;
class Calculator         
{
      public:
      void add(int a,int b)  
      {
         cout << "�G�Ƥ��X=" << a+b << endl;
      }
      void sub(int a,int b)
      {
         cout << "�G�Ƥ��t="<< a-b << endl; 
      } 
      void mul(int a,int b)
      {
         cout << "�G�Ƥ��n="<< a*b << endl;
      }
      void div(int a,int b)
        {
          cout << "�G�Ƥ���=" << (float)a/b << endl;      
        }  
};         

int main(void)
{
  Calculator A;                 
  int a=3,b=6;
  
  cout << "a=" << a << ",b=" << b << endl;
  A.add(a,b);
  A.sub(a,b);
  A.mul(a,b);
  A.div(a,b);  
  
  system("PAUSE");
  return 0;
}

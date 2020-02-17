//hw6_5
#include<iostream>
#include<cstdlib>
using namespace std;
int sum(int);
int main(void)
{
    int a;
    do
    {
      cout << "Input an integer:";
      cin  >> a;
    } while (a<0);
    
    cout << "1+2+...+" << a << "=" << sum(a) << endl;
    
    system("pause");
    return 0;
}

int sum(int a)
{
   if(a>0)
      return(a+sum(a-1));
   else
      return 0;
}  

//hw6_19
#include<iostream>
#include<cstdlib>

using namespace std;
float power(float,int);

int fact(int);

int main(void)
{
   int k;
   float sum=0.0;
   
   for(k=0;k<=10;k++)
      sum=sum+power(0.1,k)/fact(k);
      
  cout << "sum=" << sum << endl;   
  system("pause");
  return 0;
}

float power(float x,int n)
{
   float p=1.0;
   if(n==0)
      return p;
   else
   {
      p=(x*power(x,n-1));
      return p;
   }
}

int fact(int a)
{
 if(a>0)
      return (a*fact(a-1));
   else
      return 1;
}


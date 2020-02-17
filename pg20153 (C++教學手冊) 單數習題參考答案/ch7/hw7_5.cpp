//hw7_5
#include<iostream>
#include<cstdlib>
using namespace std;
int &min(int &,int &);   
int main(void)
{
   int i=10,j=20;
   cout << "i=" << i << ",j=" << j << endl;
   min(i,j)=-5;       
   cout << "i=" << i << ",j=" << j << endl;
   system("pause");
   return 0;
}

int &min(int &a,int &b)
{
  if(a<b)
     return a;
  else
     return b;
}                 

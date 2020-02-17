//hw7_11
#include<iostream>
#include<cstdlib>
using namespace std;
int max(int,int,int);     
int max(int,int);

int main(void)
{
   cout << "max(9,8,4)=" << max(9,8,4) << endl;
   cout << "max(2,8)=" << max(2,8) << endl;
   system("pause");
   return 0;
}

int max(int i,int j,int k)
{
     int max;
     max=(i>j)?i:j;
     max=(max>k)?max:k;
     if(max==i)
        return i;
     else 
        if(max==j)
           return j;
     else 
     return k;
}             

int max(int i,int j)
{
  if(i>j)
     return i;
  else
     return j;
}

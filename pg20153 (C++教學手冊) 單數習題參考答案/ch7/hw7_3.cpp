//hw7_3
#include<iostream>
#include<cstdlib>
using namespace std;
void sort(int &a,int &b,int &c);
int main(void)
{
   int a=3,b=9,c=6;
   cout << a << "\t" << b << "\t" << c << endl;
   sort(a,b,c);
   cout << a << "\t" << b << "\t" << c << endl;
   system("pause");
   return 0;
} 

void sort(int &a,int &b,int &c)
{
   int max,min,mid;
   max=(a>b)?a:b;
   max=(max>c)?max:c;
   min=(a<b)?a:b;
   min=(min<c)?min:c;
   if(max>a && a>min)
      mid=a;
   else if(max>b && b>min)
      mid=b;
   else 
      mid=c;
   a=min;
   b=mid;
   c=max; 
   return;
}                

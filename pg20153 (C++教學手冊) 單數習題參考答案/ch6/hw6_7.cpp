//hw6_7
#include<iostream>
#include<cstdlib>
using namespace std;
void primeQ(int);
int main(void)
{
    int n;
    do
    {
       cout << "輸入正整數:";
       cin  >> n ;
    }while (n<0);
    
    primeQ(n);
    system("pause");
    return 0;
}

void primeQ(int n)
{
   int i,sum=0;
   for(i=1;i<=n;i++)
     if(n%i==0)
        sum=sum+1;
   if(sum-2>0)
      cout << "不是質數"<< endl;
   else
      cout <<"是質數" << endl; 
   return;  
}  

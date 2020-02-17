//hw5_21
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int i,j,k,p,sum=0,sum1=0;
     for(i=1;i<=49;i=i+2)
     {
       j=i*i;
       sum=sum+j;
     } 
     for(k=2;k<=50;k=k+2)
     {
       p=k*k;
       sum1=sum1+p;
     }  
     cout << "Á`©M¬°:" << sum-sum1 << endl; 
     system("pause");
     return 0;
} 

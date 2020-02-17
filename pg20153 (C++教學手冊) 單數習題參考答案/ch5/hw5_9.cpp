//hw5_9
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int i,j,sum=0;
     cout << "輸入一累加之奇數:";
     cin  >> j; 
     for(i=1;i<=j;i=i+2) 
        sum=sum+i;
     cout << "1+3+...+"<< j << "=" <<  sum << endl;  
     system("pause");
     return 0;
} 

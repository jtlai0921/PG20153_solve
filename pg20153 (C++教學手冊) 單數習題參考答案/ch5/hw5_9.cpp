//hw5_9
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int i,j,sum=0;
     cout << "��J�@�֥[���_��:";
     cin  >> j; 
     for(i=1;i<=j;i=i+2) 
        sum=sum+i;
     cout << "1+3+...+"<< j << "=" <<  sum << endl;  
     system("pause");
     return 0;
} 

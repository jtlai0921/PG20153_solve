//hw5_23
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     float k,i,j,sum=1;
     cout << "輸入一累加數值的分母:";
     cin  >> j;
     for(i=1;i<=j;i++)
         sum=sum+1/(i*i);
     cout << "總和為:" << sum << endl;
     system("pause");
     return 0;
} 

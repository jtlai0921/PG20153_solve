//hw5_17
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int num=30;
     for(int i=1;i<=num;i++)  
       if(num%i==0)
          cout << i << endl ;
     cout << endl;
     system("pause");
     return 0;
} 

//hw5_19
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int i;
     for(i=1;i<=1000;i++)
      {
        if(i%7==0 && i%3==0)  
          cout << "i=" << i << endl;  
      }
     system("pause");
     return 0;
} 

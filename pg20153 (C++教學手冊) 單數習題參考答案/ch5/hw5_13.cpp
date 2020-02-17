//hw5_13
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     float i;
     int j=0;
     for(i=3000;i>=5;i=i/2)
        j++;
     cout << "需要花" << j << "天" << endl; 
     system("pause");
     return 0;
} 

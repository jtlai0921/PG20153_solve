//hw6_17
#include<iostream>
#include<cstdlib>
using namespace std;

int sum=0;
inline int min(int i,int j)
{
    int min;
    min=(i<j)?i:j;
    return min;   
} 

int main(void)
{  
    int i,j;
    cout << "輸入一數值i:";
    cin  >> i;
    cout << "輸入一數值j:";
    cin  >> j;
    sum=i+j;
    cout << "最小值為:" << min(i,j) << endl;
    cout << "sum=" << sum << endl;
    system("pause");
    return 0;
}



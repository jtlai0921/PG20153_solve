//hw6_15
#include<iostream>
#include<cstdlib>
using namespace std;

inline int abs(int i)
{
    i=(i<0)?-i:i;
    return i;   
}
 
int main(void)
{  
    int i;
    cout << "��J�@�ƭ�i:";
    cin  >> i;
    cout << i <<"������Ȭ�:" << abs(i) << endl;
    system("pause");
    return 0;
}

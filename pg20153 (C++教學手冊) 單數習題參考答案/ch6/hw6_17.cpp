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
    cout << "��J�@�ƭ�i:";
    cin  >> i;
    cout << "��J�@�ƭ�j:";
    cin  >> j;
    sum=i+j;
    cout << "�̤p�Ȭ�:" << min(i,j) << endl;
    cout << "sum=" << sum << endl;
    system("pause");
    return 0;
}



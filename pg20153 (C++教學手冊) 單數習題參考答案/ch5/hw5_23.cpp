//hw5_23
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     float k,i,j,sum=1;
     cout << "��J�@�֥[�ƭȪ�����:";
     cin  >> j;
     for(i=1;i<=j;i++)
         sum=sum+1/(i*i);
     cout << "�`�M��:" << sum << endl;
     system("pause");
     return 0;
} 

//hw5_25
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int a,b,c;
     cout << "��J�T���βĤ@��:" ;
     cin  >> a;
     cout <<"��J�T���βĤG��:" ;
     cin  >> b;
     cout <<"��J�T���βĤT��:" ;
     cin  >> c;
          if(a+b>c && a+c>b && b+c>a)
            cout<< "���T�Ӽƥi�c���@�ӤT����" << endl;
          else
            cout <<"��J���T�Ӽ� ���� �c���@�ӤT����" << endl;
     system("pause");
     return 0;
} 

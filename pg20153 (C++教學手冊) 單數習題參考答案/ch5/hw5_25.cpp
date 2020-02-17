//hw5_25
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int a,b,c;
     cout << "輸入三角形第一邊:" ;
     cin  >> a;
     cout <<"輸入三角形第二邊:" ;
     cin  >> b;
     cout <<"輸入三角形第三邊:" ;
     cin  >> c;
          if(a+b>c && a+c>b && b+c>a)
            cout<< "此三個數可構成一個三角形" << endl;
          else
            cout <<"輸入的三個數 不能 構成一個三角形" << endl;
     system("pause");
     return 0;
} 

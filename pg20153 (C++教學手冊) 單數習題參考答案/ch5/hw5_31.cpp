//hw5_31
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   int a;
   cout << "��J�ǥͦ��Z(0~100):";
   cin  >> a;
   if(a>=90)
      cout << "���Z�o��A" << endl;
   else if(a>=80)
           cout << "���Z�o��B" << endl;
        else if(a>=70)
                cout << "���Z�o��C" << endl;
             else if(a>=60)
                     cout << "���Z�o��D" << endl;
                  else if(a>=0) 
                          cout << "���Z�o��E" << endl;
     system("pause");
     return 0;
} 

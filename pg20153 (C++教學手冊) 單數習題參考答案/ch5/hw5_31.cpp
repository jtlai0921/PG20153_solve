//hw5_31
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   int a;
   cout << "輸入學生成績(0~100):";
   cin  >> a;
   if(a>=90)
      cout << "成績得到A" << endl;
   else if(a>=80)
           cout << "成績得到B" << endl;
        else if(a>=70)
                cout << "成績得到C" << endl;
             else if(a>=60)
                     cout << "成績得到D" << endl;
                  else if(a>=0) 
                          cout << "成績得到E" << endl;
     system("pause");
     return 0;
} 

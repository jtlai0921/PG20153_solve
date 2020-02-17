//hw10_11
#include<iostream>
#include<cstdlib>
using namespace std;
enum week   
{   Monday,Tuesday,Wednesday,Thuresday,
    Friday,Saturday,Sunday  }seven;
int main(void)
{
   int i;
   
   char a[7][10]={"Monday","Tuesday","Wednesday","Thuresday",
                  "Friday","Saturday","Sunday"};
   cout << "Input a number:";
   cin >> i;
   seven=static_cast<week>(i);
      cout << "seven(" << seven << ")=" << a[seven-1] << endl;
   system("pause");
   return 0;
}           

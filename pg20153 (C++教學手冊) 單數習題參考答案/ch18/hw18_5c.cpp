//hw18_5(c)
#include<iostream>
#include<cstdlib>

namespace name1
{
   int var=5;
}
using namespace std;
int main(void)
{
   int var=10;
   {
      cout << "var=" << name1::var << endl;
   }
   cout<<"var=" << var << endl;
      
   system("pause");
   return 0;
}

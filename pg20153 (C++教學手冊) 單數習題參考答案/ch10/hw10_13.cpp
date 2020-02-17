//hw10_13
#include<iostream>
#include<cstdlib>
using namespace std;
enum mykey        
{
   Up,Down,Left,Right
}number; 
          
int main(void)
{
   char a[4][6]={"Up","Down","Left","Right"};
   for(number=Up;number<=Right;number=static_cast<mykey>(number+1))
      cout << "number(" <<number << ")=" << a[number] << endl;
   system("pause");
   return 0;
}           

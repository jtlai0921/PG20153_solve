//hw10_15
#include<iostream>
#include<cstdlib>
using namespace std;
enum mykey        
{
   Up,Down,Left,Right
}number;
           
int main(void)
{
   int i;
   char a[4][6]={"Up","Down","Left","Right"};
   
   cout << "Input a number:";
   cin >> i;
   
   number=static_cast<mykey>(i);
   cout << "Moving " << a[number] << endl;
   system("pause");
   return 0;
}           

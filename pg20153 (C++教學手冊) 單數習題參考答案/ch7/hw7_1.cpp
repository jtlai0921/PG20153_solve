//hw7_1
#include<iostream>
#include<cstdlib>
using namespace std;
void cub(int&);
int main(void)
{
   int i;
   cout <<"Input a number:";
   cin  >>i;
   cout << "befor, i=" << i << endl;
   cub(i);
   cout << "after, i=" << i << endl;
   system("pause");
   return 0;
}

void cub(int &i)
{
   i=i*i*i;
   return;
}               

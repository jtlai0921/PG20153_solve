//hw9_17
#include<iostream>
#include<cstdlib>
using namespace std;
void liter( double *);
int main(void)
{
   double a,*ptr;
   cout << "�п�J���ഫ�����ɼ�:";
   cin  >> a;
   ptr=&a;
   cout << a <<"����="; 
   liter(ptr);
   cout << a << "�[��" << endl; 
   system("pause");
   return 0; 
}
     
void liter( double *ptr)
{
   *ptr=*ptr*0.264; 
   return;   
} 

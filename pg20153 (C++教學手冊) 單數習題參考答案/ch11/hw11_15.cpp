//hw11_15
#include <iostream>
#include <cstdlib>
using namespace std;
class I          
{
   public:
      int i;
      
      void show_area(void)  
      {
         cout << "number= " << i << endl;
         if(i%2==0)
              cout << "���Ƭ�����"<<endl;
         else
              cout << "���Ƭ��_��"<< endl;      
      }
      void set_data(int n)  
      {
         
         i=n;
      }    
};         

int main(void)
{
  I a;               
  cout << "Input a number:";
  cin  >> a.i; 
  a.set_data(a.i);
  a.show_area();
  system("PAUSE");
  return 0;
}

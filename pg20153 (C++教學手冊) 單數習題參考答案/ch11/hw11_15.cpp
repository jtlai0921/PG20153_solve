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
              cout << "计案计"<<endl;
         else
              cout << "计计"<< endl;      
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

//hw13_5
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa            
{
 
  public:
     Caaa();
    ~Caaa();
   
 };
Caaa::Caaa()
{
    cout << "constructor celled"<< endl; 
} 
    
Caaa::~Caaa()   
{
    cout << "destructor called "<< endl;
    system("pause");
}
     
int main(void)
{
   Caaa *ptr;
   ptr=new Caaa;   
  
   delete ptr;     

   return 0;
}   
                     

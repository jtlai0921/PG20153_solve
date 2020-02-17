//hw13_3
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
    cout << "constructor called"<< endl; 
}     

Caaa::~Caaa()     
{
    cout << "destructor called "<< endl;
    system("pause");
}
     
int main(void)
{
   Caaa obj;    
             
   system("pause");
   return 0;
}   
                     

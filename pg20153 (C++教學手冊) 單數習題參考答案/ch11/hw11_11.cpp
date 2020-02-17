//hw11_11
#include <iostream>
#include <cstdlib>
using namespace std;
class CData       
{
   public:
     int y;   
      
     int to_year(void)     
      {
         return y-1911;
      }   
};

int main(void)
{
   CData yy;                
   yy.y=2003;        
   cout << "西元" << yy.y << "年=民國" << yy.to_year()<<"年"<<endl;
 
   system("PAUSE");
   return 0;
}

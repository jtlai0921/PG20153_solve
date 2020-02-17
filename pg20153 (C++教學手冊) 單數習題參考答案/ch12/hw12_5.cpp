//hw12_5
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin   
{
   private:
      char id;
      int width,height;
   
   public:
   CWin(char i='D',int w=100,int h=100):id(i),width(w),height(h)  
   {
      cout << "建構元被呼叫了" << endl;   
   }              
    
   void show_member(void)     
   {
      cout << "Window "<< id << ": ";
      cout << "width=" << width << ", height= " << height << endl;
   }            
};

int main(void)
{
   CWin win1('A',80);      
   CWin win2;          
   win1.show_member();
   win2.show_member();
   system("pause");
   return 0;
}                       

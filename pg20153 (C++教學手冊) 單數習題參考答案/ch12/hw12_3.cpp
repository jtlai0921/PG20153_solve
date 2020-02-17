//hw12_3
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin   
{
   private:
      char id;
      int width,height;
   
   public:
   CWin(char i,int w,int h)     
   {
      id=i;
      width=w;
      height=h;
   }
   
   CWin()  // 加上沒有引數的建構元即可 
   {
   }    
   
   void show_member(void)     
   {
      cout << "Window "<< id << ": ";
      cout << "width=" << width << ", height= " << height << endl;
   }       
};

int main(void)
{
   CWin win1('A',80,80);      
   CWin win2;             
   win1.show_member();
//   win2.show_member();   如果以win2呼叫 show_member()，則成員之值將會是記憶體內的殘值 
  
   system("pause");
   return 0;
}                       

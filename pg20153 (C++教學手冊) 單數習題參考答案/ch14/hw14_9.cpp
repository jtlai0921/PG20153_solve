//hw14_9
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin          
{
   private:
   char id;
   int width,height;
   
    public:
    CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)  
        {}
    
    friend CWin operator+(CWin &win1,CWin &win2);
  
    void show_member(void)
    {
       cout << "window "<< id << ": ";
       cout << "width=" << width << ", height=" << height << endl;
    }   
};

CWin  operator+(CWin &win1,CWin &win2)   
{
    int w,h;
    w=win1.width > win2.width ? win1.width : win2.width;
    h=win1.height > win2.height ?win1.height:win2.height;
    return CWin('D',w,h);        
} 

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   CWin win3;
   win3=win1+win2;
   win3.show_member();       
      
   system("pause");
   return 0;
}                      
         

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
   
   CWin()  // �[�W�S���޼ƪ��غc���Y�i 
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
//   win2.show_member();   �p�G�Hwin2�I�s show_member()�A�h�������ȱN�|�O�O���餺���ݭ� 
  
   system("pause");
   return 0;
}                       

//hw11_5
#include <iostream>
#include <cstdlib>
using namespace std;
class Crectangle     
{
   public:                //�S�ŧi�����ܼ�,�L�k�b��L�a��ϥ� 
   int width;
   int height;
};                        //�֤F���O�����Ÿ� ; 

int main(void)
{
   Crectangle rect1;      //�M���O���ŧi�ܼƦW�٭n�@�P 
   rect1.width=15;
   rect1.height=10;       //����ŧi�W�٭n�@�P 
   cout <<"���n��:"<<rect1.height*rect1.width<< endl;
   system("PAUSE");
   return 0;
}

//hw13_9
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa           
{
  private:
     int m,n;
  public:
     Caaa(int m1,int n1):m(m1),n(n1)
     {}
     Caaa(const Caaa &obj)
     {
        cout <<"�����غc���Q�I�s�F" << endl;
        m=obj.m;
        n=obj.n;
     }    
     void show()
     {
        cout<<"m="<< m << ", n=" << n << endl;
     }
 };

 int main(void)
 {
   Caaa obj1(10,20);   
   Caaa obj2=obj1;
   obj1.show();
   obj2.show();
             
   system("pause");
   return 0;
}   
                     

// hw15_21
#include <iostream>
#include <cstdlib>

using namespace std;

class Caaa    // �w�qCaaa���O�A�b���������O
{
   public:
     int num1,num2;
     void display()
     {
        cout<<"printed from Caaa class"<<endl;
     }
};

class Cbbb : public Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
   public:
   void set_num(int a, int b)
   {
      num1=a;
      num2=b;
   }
   void show()
   {
      cout<<"num1= "<<num1<<endl;
      cout<<"num2= "<<num2<<endl;
   }   
   void display()
   {
       cout<<"printed from Cbbb class"<<endl;
    }
   
};

int main(void)
{
   Caaa aa;
   Cbbb bb;
  
   aa.display();  
   bb.display();

   
   system("pause");
   return 0;
}


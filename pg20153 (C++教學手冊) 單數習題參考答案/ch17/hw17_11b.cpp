//hw17_11b
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)   // ��Ʀ����A�Ψӿ�J���󪺸�Ʀ���
      {
         cout <<"Enter name: "; cin >>name;
         cout <<"Enter age: "; cin >>age;  
      }
      void show_data(void)   // ��Ʀ����A�Ψ���ܪ��󪺸�Ʀ���
      {
         cout <<"Name: " << name<<endl;
         cout <<"Age: "  << age <<endl;  
      }            
};

int main(void)
{
   ifstream ifile("c:\\student.dat",ios::binary);  // �}�ҤG�i����
   CStudent st;
   for(int i=0;i<3;i++)
   {
        ifile.read((char*) &st,sizeof(st));  // �q�G�i���ɤ�Ū�����
        st.show_data();
   }
    cout<<"�G�i���ɤw�QŪ���F..."<<endl; 
   
   ifile.close();       // �����ɮ�  
   system("pause");
   return 0;
}


//hw17_11
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
   CStudent st1;    
   CStudent st2;
   CStudent st3;
   st1.get_data();
   st2.get_data();
   st3.get_data(); 
   ofstream ofile("c:\\student.dat",ios::binary);
   
   ofile.write((char*) &st1,sizeof(st1));   // �N����g�J�G�i���ɤ�
   ofile.write((char*) &st2,sizeof(st2));   // �N����g�J�G�i���ɤ�
   ofile.write((char*) &st3,sizeof(st3));   // �N����g�J�G�i���ɤ�
   cout<< "��Ƥw�g�J�ɮפ�..."<<endl;
   
   ofile.close();       // �����ɮ�
   system("pause");
   return 0;
}


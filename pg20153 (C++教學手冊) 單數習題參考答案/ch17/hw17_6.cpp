//hw17_6
#include <fstream>    
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ifstream afile1("c:\\aaa.txt",ios::in);     
   ifstream afile2("c:\\bbb.txt",ios::in);  
   ofstream afile3("c:\\ccc.txt",ios::app);    
   
   char txt[40];
   
   while(!afile1.eof())   // �P�O�O�_Ū���ɮת�����
   {
      afile1 >> txt;       
      afile3 <<txt <<endl;
   }
      
   while(!afile2.eof())   // �P�O�O�_Ū���ɮת�����
   {
      afile2 >> txt;      
      afile3 <<txt<<endl;
   }
   
     
   afile1.close();       // �����ɮ�
   afile2.close();       // �����ɮ� 
   afile3.close();       // �����ɮ�     
   
   system("pause");
   return 0;
}



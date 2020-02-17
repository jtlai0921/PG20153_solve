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
   
   while(!afile1.eof())   // 判別是否讀到檔案的尾端
   {
      afile1 >> txt;       
      afile3 <<txt <<endl;
   }
      
   while(!afile2.eof())   // 判別是否讀到檔案的尾端
   {
      afile2 >> txt;      
      afile3 <<txt<<endl;
   }
   
     
   afile1.close();       // 關閉檔案
   afile2.close();       // 關閉檔案 
   afile3.close();       // 關閉檔案     
   
   system("pause");
   return 0;
}



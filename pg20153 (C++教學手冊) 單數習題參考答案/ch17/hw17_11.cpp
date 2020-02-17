//hw17_11
#include <fstream>   // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)   // 函數成員，用來輸入物件的資料成員
      {
         cout <<"Enter name: "; cin >>name;
         cout <<"Enter age: "; cin >>age;  
      }
      void show_data(void)   // 函數成員，用來顯示物件的資料成員
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
   
   ofile.write((char*) &st1,sizeof(st1));   // 將物件寫入二進位檔中
   ofile.write((char*) &st2,sizeof(st2));   // 將物件寫入二進位檔中
   ofile.write((char*) &st3,sizeof(st3));   // 將物件寫入二進位檔中
   cout<< "資料已寫入檔案中..."<<endl;
   
   ofile.close();       // 關閉檔案
   system("pause");
   return 0;
}


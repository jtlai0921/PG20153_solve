//hw17_11b
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
   ifstream ifile("c:\\student.dat",ios::binary);  // 開啟二進位檔
   CStudent st;
   for(int i=0;i<3;i++)
   {
        ifile.read((char*) &st,sizeof(st));  // 從二進位檔中讀取資料
        st.show_data();
   }
    cout<<"二進位檔已被讀取了..."<<endl; 
   
   ifile.close();       // 關閉檔案  
   system("pause");
   return 0;
}


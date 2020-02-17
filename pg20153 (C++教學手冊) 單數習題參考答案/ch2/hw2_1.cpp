 //hw2_1 
#include<iostream>              //含括iostream檔案 
#include<cstdlib>               //含括cstdlib檔案   
using namespace std;            //設定命名空間為std 
int main(void)                   //main()區塊的開始 
{
   int i;                        //宣告變數i  
   i=5;
   cout << i << "+" << i << "=" << (i+i) << endl;   //印出字串、變數內容及換行 
   cout << i << "*" << i << "=" << (i*i);           //印出字串、變數內容
   system("pause");             //程式執行暫停 
   return 0;                    //執行成功回傳0 
}

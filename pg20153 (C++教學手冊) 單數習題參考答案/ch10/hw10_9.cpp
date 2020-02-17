//hw10_9
#include<iostream>
#include<cstdlib>
using namespace std;
union mydata      
{
   float f;
   int i;
}temperature;  
int main(void)
{    
   char tem;
   do{
      cout <<"(1)以浮點數計算平均值" << endl;
      cout <<"(2)以整數計算平均值" << endl;
      cout <<"What's your choice? ";
      cin.get(tem);
      cin.get();     
   }while((tem>50)||(tem<49));
   
   if(tem=='1')
   {
      cout << "輸入浮點數:";
      cin  >> temperature.f;
   }
   else
   {
      cout <<"輸入整數:";
      cin  >> temperature.i;
   }
   
   cout <<"**** Output ****" << endl;          
   
   if(tem=='1')
     cout << temperature.f << "*" <<temperature.f << "=" 
          << temperature.f*temperature.f << endl;
   else
      cout << temperature.i << "*" <<temperature.i<< "=" 
           << temperature.i*temperature.i << endl;
   system("pause");
   return 0;
}           

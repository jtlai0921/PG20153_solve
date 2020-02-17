//hw10_3
#include<iostream>
#include<cstdlib>
using namespace std;
union mydata      
{
   float f;
   float c;
}temperature;        
int main(void)
{  
   char tem;
   do{
      cout <<"(1)Fahrenheit->Celsius" << endl;
      cout <<"(2)Celsius->Fahrenheit" << endl;
      cout <<"What's your choice? ";
      cin.get(tem);
      cin.get();     
   }while((tem>50)||(tem<49));
  
   if(tem=='1')
   {
      cout << "Input Fahrenheit:";
      cin  >> temperature.f;
   }
   else
   {
      cout <<"Input Celsius:";
      cin  >> temperature.c;
   }
   cout <<"**** Output ****" << endl;            
  
   if(tem=='1')
      cout << temperature.f << " F=" <<(temperature.f*5.0/9)-(160/9.0) << " Celsius degrees" << endl;
   else
      cout << temperature.c << " C=" << (temperature.c*9/5.0)+32 << " Fahrenheit degrees" << endl;
   
   system("pause");
   return 0;
}           

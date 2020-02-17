//hw8_15
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
   float a[3][4]={{18.2,17.3,15.0,13.4},{23.8,25.1,20.6,17.8},{20.6,21.5,18.4,15.7}};
   float b[7]={0};
   float c[3]={0};
   float min=a[0][0],max=a[0][0];
   int i,j,max1,max2,min1,min2;
   float sum=0.0f;
   cout << "(a)陣列內容如下:"<< endl;
   cout << "       星期一  星期二  星期三  星期四" << endl;
   for(i=0;i<3;i++)
   {
      cout << "時段"<< i+1 << "   "; 
      for(j=0;j<4;j++)
         cout << setw(4) << a[i][j] << "    ";
      cout <<endl;
   } 
   cout << endl << "(b)每日平均溫度如下:" << endl;
   for(i=0;i<4;i++)
   {
      for(j=0;j<3;j++)
         b[i]=b[i]+a[j][i];
   } 
   for(i=0;i<4;i=i++)   
      cout << "星期" << i+1 <<":" << b[i]/3 << "度"<< endl; 
   cout << endl << "(c)早上.中午.晚上的平均溫度如下:" << endl;
   for(j=0;j<3;j++)
   {
      for(i=0;i<4;i++)
         c[j]=c[j]+a[j][i];
   }
   cout << "時段一:" << c[0]/4 << "度" << endl; 
   cout << "時段二:" << c[1]/4 << "度" << endl; 
   cout << "時段三:" << c[2]/4 << "度" << endl;  
    
   for(i=0;i<4;i=i++) 
      for(j=0;j<3;j++)
         if(a[j][i]>max)         //判斷最大值
         {
            max=a[j][i];
            max1=i;             //高溫星期 
            max2=j;             //高溫時段 
         }
         
   for(i=0;i<4;i=i++) 
      for(j=0;j<3;j++)
         if(a[j][i]<min)         //判斷最小值
         {
            min=a[j][i];
            min1=i;             //低溫星期 
            min2=j;             //低溫時段 
         }
         
   cout << endl << "(d)溫度最高的日子與時段:" << endl; 
   cout <<"星期" << max1+1 <<"的第"<<max2+1<<"時段" << endl;
    
   cout << endl << "(e)溫度最低的日子與時段:" << endl; 
   cout <<"星期" << min1+1 <<"的第"<<min2+1<<"時段" << endl;
  
   system("pause");
   return 0;
}            

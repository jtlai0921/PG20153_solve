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
   cout << "(a)�}�C���e�p�U:"<< endl;
   cout << "       �P���@  �P���G  �P���T  �P���|" << endl;
   for(i=0;i<3;i++)
   {
      cout << "�ɬq"<< i+1 << "   "; 
      for(j=0;j<4;j++)
         cout << setw(4) << a[i][j] << "    ";
      cout <<endl;
   } 
   cout << endl << "(b)�C�饭���ūצp�U:" << endl;
   for(i=0;i<4;i++)
   {
      for(j=0;j<3;j++)
         b[i]=b[i]+a[j][i];
   } 
   for(i=0;i<4;i=i++)   
      cout << "�P��" << i+1 <<":" << b[i]/3 << "��"<< endl; 
   cout << endl << "(c)���W.����.�ߤW�������ūצp�U:" << endl;
   for(j=0;j<3;j++)
   {
      for(i=0;i<4;i++)
         c[j]=c[j]+a[j][i];
   }
   cout << "�ɬq�@:" << c[0]/4 << "��" << endl; 
   cout << "�ɬq�G:" << c[1]/4 << "��" << endl; 
   cout << "�ɬq�T:" << c[2]/4 << "��" << endl;  
    
   for(i=0;i<4;i=i++) 
      for(j=0;j<3;j++)
         if(a[j][i]>max)         //�P�_�̤j��
         {
            max=a[j][i];
            max1=i;             //���ŬP�� 
            max2=j;             //���Ůɬq 
         }
         
   for(i=0;i<4;i=i++) 
      for(j=0;j<3;j++)
         if(a[j][i]<min)         //�P�_�̤p��
         {
            min=a[j][i];
            min1=i;             //�C�ŬP�� 
            min2=j;             //�C�Ůɬq 
         }
         
   cout << endl << "(d)�ū׳̰�����l�P�ɬq:" << endl; 
   cout <<"�P��" << max1+1 <<"����"<<max2+1<<"�ɬq" << endl;
    
   cout << endl << "(e)�ū׳̧C����l�P�ɬq:" << endl; 
   cout <<"�P��" << min1+1 <<"����"<<min2+1<<"�ɬq" << endl;
  
   system("pause");
   return 0;
}            

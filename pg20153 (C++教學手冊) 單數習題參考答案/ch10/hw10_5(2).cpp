//hw10_5(2) �H���c�}�C���g�k 
#include<iostream>
#include<cstdlib>
using namespace std;
void func(struct mydata a); 
struct mydata        
{
   char id[6];
   char name[15];
   int score1;
   int score2;
   int score3;
   float score4;
} student[3];

int main(void)
{
   int i,flag=0;
   char number[6];
   
   for(i=0;i<3;i++)  // Input data by array
   {
      cout << "�п�J5�Ӧ�ƾ�ƪ��Ǹ�:";           
      cin.getline(student[i].id,6);
      cout << "�ǥͩm�W:";                  
      cin.getline(student[i].name,15);
      cout <<"�������Z:";
      cin  >> student[i].score1;
      cout <<"�������Z:";
      cin  >> student[i].score2 ;
      cout << "���ɦ��Z:";
      cin  >> student[i].score3;
      cin.get();
      cout << endl;
   }
  
   cout << "��J���d�ߪ��Ǹ�:";
   cin.getline(number,6);
   for(i=0;i<3;i++)
      if(strcmp(student[i].id,number)==0)
      {
         func(student[i]);
         flag=1;
      }
   if(flag==0)
      cout << "�L�����!!" << endl;
   system("pause");
   return 0;
}
   
void func(struct mydata a)      
{  
   a.score4=a.score1*0.3+a.score2*0.3+a.score3*0.4;
   cout << "Id= "<<a.id << "\t" << "Name= " << a.name << "\t";
   cout << "Score= " << a.score4 << endl << endl; 
   return;
} 


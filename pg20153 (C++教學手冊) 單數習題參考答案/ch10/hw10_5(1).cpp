//hw10_5(1), �@�몺�g�k (���ΰ}�C) 
#include<iostream>
#include<cstdlib>
using namespace std;
void func(struct mydata a);
void input(struct mydata *); 
struct mydata        
{
   char id[6];
   char name[15];
   int score1;
   int score2;
   int score3;
   float score4;
} student1,student2,student3;

int main(void)
{
   char number[6];
    
   input(&student1);
   input(&student2);
   input(&student3);
   
   cout << endl << "��J���d�ߪ��Ǹ�:";
   cin.getline(number,9);
   if(strcmp(student1.id,number)==0)
      func(student1);
   else if(strcmp(student2.id,number)==0)
      func(student2);
   else if(strcmp(student3.id,number)==0)
      func(student3);      
   else
      cout << "�L�����!!" << endl;
   system("pause");
   return 0;
}
   
void func(struct mydata a)      
{  
   cout << "Id= "<<a.id << "\t" << "Name= " << a.name << "\t";
   a.score4=a.score1*0.3+a.score2*0.3+a.score3*0.4;
   cout << "Score= " << a.score4 << endl << endl; 
   return;
} 

void input(struct mydata *ptr)
{
   cout << "�п�J5�Ӧ�ƾ�ƪ��Ǹ�:";    // ��J�ǥͪ����      
   cin.getline(ptr->id,6);
   cout << "�ǥͩm�W:";                  
   cin.getline(ptr->name,15);
   cout <<"�������Z:";
   cin  >> ptr->score1;
   cout <<"�������Z:";
   cin  >> ptr->score2 ;
   cout << "���ɦ��Z:";
   cin  >> ptr->score3;
   cin.get();
   cout << endl;   
}   

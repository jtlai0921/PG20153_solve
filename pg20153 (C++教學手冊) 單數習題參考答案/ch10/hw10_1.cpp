//hw10_1
#include<iostream>
#include<cstdlib>
using namespace std;
struct mydata       
{
   char id[9];
   char name[15];
   int score1;
   int score2;
   int score3;
}student;
int main(void)
{   
   cout << "Student's ID(8):";           
   cin.getline(student.id,9);
   cout << "Student's name:";                  
   cin.getline(student.name,15);
   cout <<"期中成績:";
   cin  >> student.score1;
   cout <<"期末成績:";
   cin  >> student.score2 ;
   cout << "平時成績:";
   cin  >> student.score3;
   cout << "*****Output******" << endl;   
   cout << student.id << endl;  
   cout << student.name << endl;
   cout << "學期成績為:" << student.score1*0.3+
                            student.score2*0.3+
                            student.score3*0.4 << endl; 
   system("pause");
   return 0;
}   

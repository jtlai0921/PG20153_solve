//hw17_7
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[40];   
    ifstream ifile("c:\\donkey.txt",ios::in);
    if(ifile.is_open())  
       while(!ifile.eof())   
        {
            ifile >> txt;      
            cout << txt <<endl; 
        }     
    else 
      cout << "ÀÉ®×¶}±Ò¥¢±Ñ..."  << endl; 
   ifile.close();     
   system("pause");
   return 0;
}


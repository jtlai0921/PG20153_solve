//hw13_7
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin    
{
   private:
     char id, *title;   
     
   public:     
         
     void show(void)
     {
        cout<<"Window "<< id <<": "<< title <<endl;
     }
     
     CWin(char, char *);
     ~CWin();
     
};

CWin::CWin(char i='D', char *text="Defaule window"):id(i)  
{
    title=new char[strlen(text)+1];  
    strcpy(title,text);
}

CWin::~CWin()   
{ 
    cout<<"解構元被呼叫了，Win " << this->id<<"被銷毀了.."<<endl;
    delete [] title; 
    system("pause");
} 
     
int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin win2('B'); 	 
   
   win1.show(); 
   win2.show();
   cout<<"sizeof(win1)= "<<sizeof(win1)<<endl;                
   cout<<"sizeof(win2)= "<<sizeof(win2)<<endl;  
   system("pause");
   return 0;
}


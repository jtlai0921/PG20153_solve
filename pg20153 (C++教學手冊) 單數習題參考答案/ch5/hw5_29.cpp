//hw5_29
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    float x,y;
    cout << "�п�Jx�y�Э�:";
    cin  >> x;
    cout << "�п�Jy�y�Э�:";
    cin  >> y;
    if(x>0) 
    {
       if(y>0)
          cout << "��J�y�ЭȮy����Ĥ@�H��" << endl;    
       else if(y<0)
          cout << "��J�y�ЭȮy����ĥ|�H��" << endl;       
    }  
    else if(x<0)
    {
       if(y>0)
          cout << "��J�y�ЭȮy����ĤG�H��" << endl;    
       else if(y<0)
          cout << "��J�y�ЭȮy����ĤT�H��" << endl;
    } 
    if (x==0)   
       cout <<"�y�Ц��y�b�W" << endl; 
    if (y==0)
       cout <<"�y�Ц��x�b�W" << endl; 
    system("pause");
    return 0;
} 

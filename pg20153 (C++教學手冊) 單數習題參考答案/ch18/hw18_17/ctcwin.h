#include <iostream>
#include <cstdlib>

using namespace std;
class CTextWin : public CWin  // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  // �l���O�̪��p������
      char *text;
      
   public:     
      CTextWin(char i,char *tx):CWin(i)     // �l���O���غc��
      {
         cout<<"CTextWin()�غc���Q�I�s�F..."<<endl; 
         text= new char[strlen(tx)+1];         
         strcpy(text,tx);
      }
      CTextWin(const CTextWin &tx):CWin(tx)  // �l���O�������غc��
      {
         cout<<"CTextWin()�����غc���Q�I�s�F..."<<endl; 
         text= new char[strlen(tx.text)+1];         
         strcpy(text,tx.text);
      }      
      ~CTextWin()
      {
         cout<<"CTextWin()�Ѻc���Q�I�s�F... "<<endl;
         system("pause");
      }   
      void show_member()       // �l���O��show_member()���
      {
         cout<<"Window "<<id <<": ";         
         cout<< "text = " << text << endl;
      }
      void set_member(char i,char *tx)  // �l���O��set_member()���
      {
         id=i;
         strcpy(text,tx);
      } 
};

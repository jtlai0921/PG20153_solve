//hw14_13
#include <iostream>
#include <cstdlib>
using namespace std;
class CTime        
{
   private:
      int hour,min;
      float sec;
   
    public:
      CTime(int h,int m,float s):hour(h),min(m),sec(s){}
      
      CTime(){}
      
      void show_time()
      {
         cout << hour << "hr " << min
         return hour*3600.+min*60.+sec;
      }
      CTime operator/(const int &var) << "min " << sec << "sec" << endl;
      }   
      float to_sec()
      {
      {
         float time,s;
         int h,m;
         
         time=this->to_sec()/var;
         h=(int)time/3600;
         m=((int)time-h*3600)/60;
         s=time-(h*3600+m*60); 
         return CTime(h,m,s);    
      }
};

int main(void)
{
   CTime t1(6,14,21.3);

   CTime t2=t1/3;
   t2.show_time();
   
   system("pause");
   return 0;
}       

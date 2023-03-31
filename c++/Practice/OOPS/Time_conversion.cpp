#include <iostream>
using namespace std ;

class time12
{
    private:
    int hrs;
    int mins;

    public:

    int pm;

    time12()
    {
        hrs=mins=0;
        pm=1;
    }


    time12(int h,int m,int ap)
    {
        hrs=h;
        mins=m;
        pm=ap;
    
    }

   void display()
   {

     cout<<endl;
     cout<<hrs<<" : ";
     
     if(mins<10)
     {
        cout<<'0';
     }
    
        cout<<mins<<" : ";
    
    if(pm==1)
    {
        cout<<"am";
    }
    else
    {
        cout<<"pm";
    }


   }

};


class time24
{
    private:
    int hours;
    int minutes;
    int secs;

    public:

        time24()
        {
            hours=minutes=secs=0;
        }
        time24(int h,int m,int s)
        {
              hours=h;
              minutes=m;
              secs=s;
        }
      
      void display()
      {
               if(hours<10)
               {
                cout<<'0';
               }
               cout<<hours<<" : ";
               if(minutes<10)
               {
                cout<<'0';
               }
               cout<<minutes<<" : ";
                if(secs<10)
                {
                    cout<<'0';
                }
            cout<<secs<<" .";
      }
           
     operator time12();
};

time24::operator time12()
{
    int hr=hours;
    int pm=hr<12?1:0;
    
    int roundMins= secs<30?minutes:minutes+1;

if(roundMins==60)
{
    roundMins -= 60;
    hr++;
    if(hr==12|| hr==24)
    {
        pm=(pm==1)?0:1;
    }

}
int hr12= hr<13?hr:hr-12;

if(hr12==0)
{
    hr12=12;
    pm=1;
}

return time12(hr12,roundMins,pm);

}


int main()
{
    
    
   
   int h,m,s;
  cout<<"Enter hrs >> ";
  cin>>h;
  cout<<"Enter mins >> ";
  cin>>m;
  cout<<"Enter secs >> ";
  cin>>s;
   
  time24 t24(h,m,s);
   t24.display();

  time12 t12=t24;

  t12.display();




    return 0;
}
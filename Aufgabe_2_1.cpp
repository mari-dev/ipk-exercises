#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,x1,x2,d;
    cout<<"insert a \t"<<endl;
    cin>>a;
     cout<<"insert b \t"<<endl;
    cin>>b;
     cout<<"insert c \t"<<endl;
    cin>>c;
    if (a==0){
            if (b==0){
                    cout << "Da a=b=0, gibt es keine eindeutige lösung"<<endl;
                    }
            else{cout<<"a=0? Die Gleichung ist nicht quadratisch"<<endl;
                }
            }
    else{      
         d=b*b-4*a*c;
        if (d<0){cout<<"Die Lösung ist komplex"<<endl;
                }
        else{
            cout<<"Die Lösungen sind folgende: "<<endl;
            x1=(-b+sqrt(d))/(2*a);
            cout<<"x1 = "<< x1<<endl;
            x2=(-b-sqrt(d))/(2*a);
            cout<<"x2 = "<< x2<<endl;
            }
         }
return 0;
}
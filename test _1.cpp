#include <iostream>
#include <cmath>
using namespace std;

// main() is where program execution begins.
int main() {
   double a, b, c, x1, x2, root, root_prep;
   cout <<"a = " << flush;
   cin >> a;
   cout <<"b = " << flush;
   cin >> b;
   cout <<"c = " << flush;
   cin >> c;

   root_prep = (b*b - 4.0*a*c); //das Determinant
   root = std::sqrt(root_prep); 
   x1 = (-b + root)/(2.0*a); //Man rechnet beide Werte durch der Mitternachtsformel
   x2 = (-b - root)/(2.0*a);

   if(isnan(root)){      //ab hier, selbsterklärend wegen cout Inhalte.   
     cout<<"The solution is complex"<<endl;
   }else if (a==0.0){
            if (b==0.0){
            cout<<"There's no unique solution"<<endl;
            }else cout<<"a=0?"<<endl;
         }else{
   cout<< "x1=" << x1 << endl;
   cout<< "x2=" << x2 << endl;
   }
}
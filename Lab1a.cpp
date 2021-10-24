#include <iostream>
#include "Lab1a.h"
using namespace std;


int main () {

  Complex c1(2.0,1.0);
  Complex c2(2.1,1.5);
    c1.printalg();
    c1.printr();
    c2.printalg();
   
    
    /* Esempio:
      cout<<"\nSomma:"<<endl;
      Complex c3=c1.Operatorplus(c2); 
      c3.printalg();
      Si può fare anche così definendo nuova...
    */

    cout<<"\nSomma:"<<endl;
    Complex c3=c1 + c2;
    c3.printalg();
      
    cout<<"\nDifferenza:"<<endl;
    c3=c1 - c2;
    c3.printalg();
    
    cout<<"\nMoltiplicazione:"<<endl;
    c3=c1 * c2;
    c3.printalg();

    cout<<"\nDivisione:"<<endl;
    c3=(c1 / c2);
    c3.printalg();

    cout<<"\nMoltiplicazione double"<<endl;
    Complex c4(0.,0.);
    c4=3.0 * c2;
    c4.printalg();

    /*cout<<"\nUguaglianza"<<endl;
    Complex c5=c4;
    c5.printalg();
    c4.printalg();*/

    cout<<"\nOperazione+="<<endl;
    c3+=c4;
    c3.printalg();

    cout<<"\nOperazione-="<<endl;
    c3-=c4;
    c3.printalg();

    cout<<"\nOperazione*="<<endl;
    c3*=c4;
    c3.printalg();

    cout<<"\nOperazione/="<<endl;
    c3/=c4;
    c3.printalg();
    
    return 0;
  
}

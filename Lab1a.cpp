#include <iostream>
#include "Lab1a.h"
using namespace std;


int main () {

  Complex c1(2.0,1.0);
  Complex c2(2.1,1.5);
    c1.printalg();
    c1.printmag();
    c2.printalg();
   
    
    cout<<"\nSomma:"<<endl;
    Complex c3=c1.Operatorplus(c2);
    c3.printalg();
    
    cout<<"\nDifferenza:"<<endl;
    c3=c1.Operatorminus(c2);
    c3.printalg();
    
    cout<<"\nMoltiplicazione:"<<endl;
    c3=c1.Operatortimes(c2);
    c3.printalg();

    cout<<"\nDivisione:"<<endl;
    c3=c1.Operatorover(c2);
    c3.printalg();

    Complex c4(0.,0.);
    c4=c4.Operatordouble(3.0,c1);
    c4.printalg();
    

  return 0;

}

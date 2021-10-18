#include <iostream>
#include <cmath>
#include "Lab1a.h"
using namespace std;




  Complex::Complex(double r, double i) {
    real_=r;
    imm_=i;
  }

/*Complex::Complex(double r,double theta) {
    arg_=theta;
    r_=r;
    }*/
    
    


  //Funzioni setters
  void Complex::setreal (double newr) {
    real_=newr;
  }

  void Complex::setimm (double newi) {
    imm_=newi;
  }

  //Funzioni getters
  double Complex::re () {
    return real_;
  }

  double Complex::im() {
    return imm_;
  }

  double Complex::mag() {
    double magnitude=sqrt(pow(real_,2)+pow(imm_,2));
    return magnitude;
  }



  //Funzione reset
  void Complex::reset () {
    real_=0.;
    imm_=0.;
  }

  //Funzioni stampa 

  void Complex::printalg () {
    cout<<"Numero complesso: "<<real_<<" +i"<<imm_<<endl;
  }

void Complex::printmag() {
  cout<<"Il modulo di questo numero complesso vale: "<<mag()<<endl;
}



  //Funzioni di overlaoding

Complex Complex::Operatorplus(Complex& cn) {
  double real=real_+cn.re();
  double imm=imm_+cn.im();

  return Complex(real,imm);
}

  Complex Complex::Operatorminus(Complex &cn) {
    double real=real_-cn.re();
    double imm=imm_-cn.im();
    
    return Complex (real,imm);
}



 



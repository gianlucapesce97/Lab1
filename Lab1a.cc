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
  double Complex::re () const{
    return real_;
  }

  double Complex::im() const{
    return imm_;
  }

  double Complex::mag() const{
    double magnitude=sqrt(pow(real_,2)+pow(imm_,2));
    return magnitude;
  }



  //Funzione reset
  void Complex::reset () {
    real_=0.;
    imm_=0.;
  }

  //Funzioni stampa 

  void Complex::printalg () const{
    cout<<"Numero complesso: "<<real_<<" +i"<<imm_<<endl;
  }

void Complex::printmag() {
  cout<<"Il modulo di questo numero complesso vale: "<<mag()<<endl;
}



  //Funzioni di overlaoding

Complex Complex::Operatorplus(const Complex& cn) {
  double real=real_+cn.re();
  double imm=imm_+cn.im();

  return Complex(real,imm);
}

  Complex Complex::Operatorminus(const Complex &cn) {
    double real=real_-cn.re();
    double imm=imm_-cn.im();
    
    return Complex (real,imm);
}

Complex Complex::Operatortimes(const Complex &cn) {
  double real=((real_*cn.re())-(imm_*cn.im()));
  double imm=((real_*cn.im())+(imm_*cn.re()));

  return Complex (real,imm);
}

Complex Complex::Operatorover(const Complex &cn) {
  double real=(((real_*cn.re())+(imm_*cn.im())))/(pow(cn.re(),2)+pow(cn.im(),2));
  double imm=((imm_*cn.re())-(real_*cn.im()))/(pow(cn.re(),2)+pow(cn.im(),2));

  return Complex (real,imm);
}

Complex Complex::Operatordouble(double d, const Complex& cn) {
  double real=d*cn.re();
  double imm=cn.im();

  return Complex (real,imm);
}


 



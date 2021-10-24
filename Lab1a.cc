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

  void Complex::setr(double newr){
    r_=newr;
  }

  void Complex::setphase (double newphase) {
    phase_=newphase;
  }

  //Funzioni getters
  double Complex::re () const{
    return real_;
  }

  double Complex::im() const{
    return imm_;
  }

  double Complex::r() const{
    double magnitude=sqrt(pow(real_,2)+pow(imm_,2));
    return magnitude;
  }

  double Complex::phase() const{
    double phi=acos(real_/(r()));
    return phi;
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

void Complex::printr() const {
  cout<<"Il modulo di questo numero complesso vale: "<<r()<<endl;
}



  //Funzioni di overlaoding

Complex Complex::operator+(const Complex& cn) const{
  double real=real_+cn.re(); //i metodi dentro un const DEVONO essere const
  double imm=imm_+cn.im();

  return Complex(real,imm);
}

  Complex Complex::operator-(const Complex &cn) const{
    double real=real_-cn.re();
    double imm=imm_-cn.im();
    
    return Complex (real,imm);
}

Complex Complex::operator*(const Complex &cn) const{
  double real=((real_*cn.re())-(imm_*cn.im()));
  double imm=((real_*cn.im())+(imm_*cn.re()));

  return Complex (real,imm);
}

Complex Complex::operator/(const Complex &cn) const{
  double real=(((real_*cn.re())+(imm_*cn.im())))/(pow(cn.re(),2)+pow(cn.im(),2));
  double imm=((imm_*cn.re())-(real_*cn.im()))/(pow(cn.re(),2)+pow(cn.im(),2));

  return Complex (real,imm);
}

/*Complex Complex::operator=(const Complex& cn) const{
  double real=cn.re(); //va bene anche real=real_;
  double imm=cn.im();
  return Complex (real,imm);
  }*/

const Complex& Complex::operator+=(const Complex &cn){
  real_+=cn.re(); //senza *this è equivalente a double real=real_+cn.re(); 
  imm_+=cn.im();
  return *this;
}

const Complex& Complex::operator-=(const Complex &cn){
  real_-=cn.re(); 
  imm_-=cn.im();
  return *this;
}

const Complex& Complex::operator*=(const Complex &cn){
  real_*=cn.re(); 
  imm_*=cn.im();
  return *this;
}

const Complex& Complex::operator/=(const Complex &cn){
  real_/=cn.re(); 
  imm_/=cn.im();
  return *this;
}

Complex operator*(const double& d, const Complex& cn) {
  double real=d*cn.re();
  double imm=d*cn.im();

  return Complex (real,imm);
}


 


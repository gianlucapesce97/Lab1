#include <iostream>
using namespace std;

class Complex{
 public:
  Complex(double r,double i);
// class Complex(double r,double theta);

 void setreal(double newr);
 void setimm(double newi);
 void setr(double newr);
 void setphase(double newphase);

 double re() const;
 double im() const;
 double r() const;
 double phase() const;

 void reset();
 void printalg() const;
 void printr() const;

 Complex operator+(const Complex& cn) const;
 Complex operator-(const Complex& cn) const;
 Complex operator*(const Complex& cn) const;
 Complex operator/(const Complex& cn) const;
 //Complex operator=(const Complex& cn) const;
 const Complex& operator+=(const Complex &cn);
 const Complex& operator-=(const Complex &cn);
 const Complex& operator*=(const Complex &cn);
 const Complex& operator/=(const Complex &cn);
 // void printesp();

 private:
 double imm_;
 double real_;
 double r_;
 //double arg_;
 double phase_;
};

Complex operator*(const double& d, const Complex& cn) /*const*/; //non può essere const come Global function, dentro la Class sì






#include <iostream>
using namespace std;

class Complex{
 public:
  Complex(double r,double i);
// class Complex(double r,double theta);

 void setreal(double newr);
 void setimm(double newi);

 double re() const;
 double im() const;
 double mag() const;
 //double r();

 void reset();
 void printalg() const;
 void printmag();

 Complex Operatorplus(const Complex& cn);
 Complex Operatorminus(const Complex& cn);
 Complex Operatortimes(const Complex& cn);
 Complex Operatorover(const Complex& cn);
 Complex Operatordouble(double d,const Complex& cn);
 // void printesp();

 private:
 double imm_;
 double real_;
 /*double r_;
 double arg_;
 double phase_;*/
};

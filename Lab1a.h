#include <iostream>
using namespace std;

class Complex{
 public:
  Complex(double r,double i);
// class Complex(double r,double theta);

 void setreal(double newr);
 void setimm(double newi);

 double re();
 double im();
 double mag();
 //double r();

 void reset();
 void printalg();
 void printmag();

 Complex Operatorplus(Complex& cn);
 // void printesp();

 private:
 double imm_;
 double real_;
 /*double r_;
 double arg_;
 double phase_;*/
};

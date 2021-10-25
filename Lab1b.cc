#include <iostream>
#include <cmath>
#include "Lab1b.h"

using namespace std;

Vector3d::Vector3d(double x, double y, double z){
  x_=x;
  y_=y;
  z_=z;
}

//Setters
void Vector3d::setx(double newx){
  x_=newx;
}
void Vector3d::sety(double newy){
  y_=newy;
}
void Vector3d::setz(double newz){
  z_=newz;
}
void Vector3d::settheta(double newtheta){
  theta_=newtheta;	
}
void Vector3d::setphi(double newphi){
  phi_=newphi;
}
void Vector3d::setmag(double newmag){
  mag_=newmag;	
}
void Vector3d::setangle(double newangle){
  mag_=newangle;	
}
//Getters
double Vector3d::getx() const{
  return x_;	
}
double Vector3d::gety() const{
  return y_;
}
double Vector3d::getz() const{
  return z_;
}
double Vector3d::gettheta() const{
  return theta_;
}
double Vector3d::getphi() const{
  return phi_;
}
double Vector3d::getmag() const{
  return mag_;
}
double Vector3d::getangle() const{
  return angle_;
}

//Change of coordinates : Cartesian-->Spherical
double Vector3d::magnitude()const{
  double mag=sqrt(pow(x_,2)+pow(y_,2)+pow(z_,2));
  return mag;
}

double Vector3d::anglephi(){
  double phi=asin(sqrt((pow(x_,2)+pow(y_,2))/pow(magnitude(),2)));
  return phi;
}

double Vector3d::angletheta(){
  double theta=acos(x_/(magnitude()*sin(anglephi())));
  return theta;
}
    
//Print functions
void Vector3d::printcart(){
  cout<<"Componenti del vettore:"<<"\t("<<x_<<","<<y_<<","<<z_<<")"<<endl;
}

void Vector3d::printsphe(){
  cout<<"Componenti del vettore:"<<"\t("<<magnitude()<<",\t"<<angletheta()<<",\t"<<anglephi()<<")"<<endl;
}

//Overloading functions
Vector3d Vector3d::operator+(const Vector3d& vn) const{
  double x=x_+vn.getx();
  double y=y_+vn.gety();
  double z=z_+vn.getz();
  return Vector3d(x,y,z);
}

Vector3d Vector3d::operator-(const Vector3d& vn) const{
  double x=x_-vn.getx();
  double y=y_-vn.gety();
  double z=z_-vn.getz();
  return Vector3d(x,y,z);
}

const Vector3d& Vector3d::operator=(const Vector3d& vn){
  x_=vn.x_;
  y_=vn.y_;
  z_=vn.z_;
  return *this;
}
//Member Functions:
/*
//distanza fra due vettori:
double Vector3d::distance(const Vector3d& vn, const Vector3d& cn)const{
   double d=sqrt(pow(cn.getx()-vn.getx(),2)+pow(cn.gety()-vn.gety(),2)+pow(cn.getz()-vn.getz(),2));
   return d;
   }*/
//angolo fra due vettori:
double Vector3d::computeangle(const Vector3d& vn,const Vector3d& cn)const{
  double a=acos(vn.scalarproduct(cn)/(vn.magnitude()*cn.magnitude()));
  return a;
}
//prodotto scalare
double Vector3d::scalarproduct(const Vector3d& cn) const{
  //double sp=vn.getmag()*cn.getmag()*cos(getangle());
  double sp=(x_*cn.x_)+(y_*cn.y_)+(z_*cn.z_);
  return sp;
}
//prodotto vettoriale

Vector3d operator*(const float& d, const Vector3d& cn){
  double x=d*cn.getx();
  double y=d*cn.gety();
  double z=d*cn.getz();

  return Vector3d (x,y,z);
}

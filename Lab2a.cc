#include <iostream>
#include <cmath>
#include "Lab2a.h"

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
double Vector3d::magnitude(){
  mag_=sqrt(pow(x_,2)+pow(y_,2)+pow(z_,2));
  return mag_;
}

double Vector3d::anglephi(){
  phi_=asin(x_/(mag_*cos(theta_)));
}

double Vector3d::angletheta(){
  theta_=acos(x_/(mag_*sin(phi_)));
}
    
//Print functions
void Vector3d::printcart(){
  cout<<"Componenti del vettore:"<<"\t("<<x_<<","<<y_<<","<<z_<<")"<<endl;
}

void Vector3d::printsphe(){
  cout<<"Componenti del vettore:"<<"\t("<<mag_<<",\t"<<theta_<<",	\t"<<phi_<<",\t"<<endl;
}

//Overloading functions
Vector3d Vector3d::operator+(const Vector3d& vn) const{
  double x=x_+vn.getx();
  double y=y_+vn.gety();
  double z=z_+vn.getz();
  return Vector3d(x,y,z);
}

/*Vector3d Vector3d::operator-(const Vector3d& vn) const{
  double x=x_-vn.getx();
  double y=y_-vn.gety();
  double z=z_-vn.getz();
  return Vector3d(x,y,z);
  }*/
 //Functions
double Vector3d::distance(Vector3d& vn, Vector3d& cn){
   double d=sqrt(pow(cn.getx()-vn.getx(),2)+pow(cn.gety()-cn.gety(),2)+pow(cn.getz()-vn.getz(),2));
   return d;
 }
double Vector3d::scalarproduct(Vector3d& vn, Vector3d& cn){
   double sp=vn.getmag()*cn.getmag()*cos(getangle());
   return sp;
 }
double Vector3d::vectorproduct(Vector3d& vn, Vector3d& cn){
   double vp=vn.getmag()*cn.getmag()*sin(getangle());
 }
 

#include <iostream>

using namespace std;

class Vector3d{
public:
        Vector3d(double x, double y, double z);
	//Setters	
	void setx(double newx);
	void sety(double newy);
	void setz(double newz);
	void settheta(double newtheta);
	void setphi(double newphi);
	void setmag(double newmag);
	void setangle(double newangle);
	//Getters
	double getx() const;
	double gety() const;
	double getz() const;
	double gettheta() const;
	double getphi() const;
	double getmag() const;
	double getangle() const;

	//Change of coordinates : Cartesian-->Spherical
	double magnitude();
	double anglephi();
	double angletheta();
	//Print functions;
	void printcart();
	void printsphe();
	//Overloading functions
	Vector3d operator+(const Vector3d& vn) const;
	Vector3d operator-(const Vector3d& vn) const;
	//Functions
	double distance(Vector3d& vn, Vector3d& cn);
	double scalarproduct(Vector3d& vn, Vector3d& cn);
	double vectorproduct(Vector3d& vn, Vector3d& cn);
private:
	double x_;//cartesian coordinates
	double y_;
	double z_;
	double mag_;//polar coordinates
	double theta_;
	double phi_;
	double angle_;//angle between two vectors
};


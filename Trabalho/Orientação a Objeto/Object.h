#pragma once


class Object
{
protected:
	float x, y, z,Rx, Tx, Sx, Ry, Ty, Sy, Rz, Tz, Sz, angulo;
	int r;
	int g;
	int b;
public:
	Object();
	~Object();
	void scale(float Sx, float Sy, float Sz);
	void translate(float Tx, float Ty, float Tz);
	void rotate(float angulo, float Rx, float Ry, float Rz);
	void color(int r, int g, int b);
	virtual void draw() = 0;

};


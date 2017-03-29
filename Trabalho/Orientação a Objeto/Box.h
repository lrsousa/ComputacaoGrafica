#pragma once

#include <vector>
#include "Object.h"
#include "Time.h"
#include "Line.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

struct point {
	int x;
	int y;
	point(int x_, int y_) {
		x = x_;
		y = y_;
	}
};

class Box : public Object
{
private:
	int ma_x;
	int ma_y;
	int me_x;
	int me_y;
	vector<point> pontos;

public:
	Box();
	~Box();
	void draw();
};


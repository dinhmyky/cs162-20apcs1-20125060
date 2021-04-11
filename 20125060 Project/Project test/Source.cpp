#include "Student.h"
#include "Date.h"
#include "classR.h"
#include <iostream>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	classR apcs1, apcs2, clc1, clc2, vp;
	createAClass(apcs1, fin);
	createAClass(apcs2, fin);
	createAClass(clc1, fin);
	createAClass(clc2, fin);
	createAClass(vp, fin);
	return 0;
}
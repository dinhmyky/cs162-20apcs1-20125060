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
	//createAClass("20APCS1.txt",apcs1, fin);
	createAClass("20APCS2.txt",apcs2, fin);
	addStudent2Class("20APCS2.txt", apcs2, fin);
	//createAClass("20CLC1.txt",clc1, fin);
	//createAClass("20CLC2.txt",clc2, fin);
	//createAClass("20VP.txt",vp, fin);
	return 0;
}
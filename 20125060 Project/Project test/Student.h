#ifndef _STUDENT_H_ 
#define _STUDENT_H_ 
#include "Date.h"
struct student 
{
	int No;
	string StudentID;
	string First_name;
	string Last_name;
	bool Gender;
	Date Date_of_Birth;
	string SocialID;
	//input a student 
};
void inputAStudent(student& a, ifstream& fin);
void saveAStudent(student& a, ofstream& fout);
#endif 
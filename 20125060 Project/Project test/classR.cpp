#include "classR.h"
#include <iostream>
using namespace std;

void createAClass(classR& _init_, ifstream& fin)
{
	cout << "Load class from file." << endl;
	fin.open("CreateClass.txt");
	if (!fin.is_open())
		cout << "Can't load file." << endl;
	else
	{
		getline(fin, _init_.name);
		fin >> _init_.num_of_students;
		//_init_.member = new student[_init_.num_of_students];
		for (int i = 0; i < _init_.num_of_students; i++)
		{
			inputAStudent(_init_.member[i], fin);
		}
		cout << "Load file successfully." << endl;
	}
	fin.close();
}

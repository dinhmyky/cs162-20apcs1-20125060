#include <iostream>
#include <fstream>
using namespace std;
struct Date
{
	int day, month, year;
};
struct Student
{
	int stID;
	//int socialID;
	char fullname[51];
	char gender[10];
	double gpa;
	char address[101];
	Date dob;
};
struct Course
{
	char id[11];
	char cname[21];
	char teacher[101];
	int credits[11];
	//Student enrolledStudents[8];
	int maxStudent;
};

void inputDate(Date& d)
{
	cout << "Day: ";
	cin >> d.day;
	cout << "Month: ";
	cin >> d.month;
	cout << "Year: ";
	cin >> d.year;
}

void inputStudent(Student& st)
{
	cout << "ID: ";
	cin >> st.stID;
	cin.ignore(1);

	cout << "Full name: ";
	cin.getline(st.fullname, 51);

	cout << "Address: ";
	cin.getline(st.address, 51);

	cout << "Gender: ";
	cin.getline(st.gender, 10);

	cout << "GPA: ";
	cin >> st.gpa;

	cout << "Date of birth: " << endl;
	inputDate(st.dob);
}

int main()
{
	//ifstream fin;
	//ofstream fout;
	Student st;

	inputStudent(st);
	return 0;
}
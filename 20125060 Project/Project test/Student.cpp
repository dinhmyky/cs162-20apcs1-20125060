#include "Student.h"
void inputAStudent(student& a, ifstream& fin) 
{
    fin >> a.No;
    getline(fin, a.StudentID);
    getline(fin, a.First_name);
    getline(fin, a.Last_name);
    string gender;
    getline(fin, gender);
    if (gender == "Male")
        a.Gender = true;
    else a.Gender = false;
    inputADate(a.Date_of_Birth, fin);
    getline(fin, a.SocialID);
}
void outputAStudent(student& a, ofstream& fout) 
{
    fout << "No: " << a.No << endl;
    fout << "Student ID: " << a.StudentID << endl;
    fout << "First Name: " << a.First_name << endl;
    fout << "Last Name: " << a.Last_name << endl;
    fout << "Gender: " << a.Gender << endl;
    fout << "Date of birth: ";
    outputADate(a.Date_of_Birth, fout);
    fout << "Social ID: "<<a.SocialID << endl;
}
/*
Nick Thoms
Data Structures 2020
Due: 1/28/2020
Lab 1: Class Example
Description: This program is an example of how a class works. It's main purpose is to store data within a 
             class, so it then can be retrieved and outputted to the screen. It stores information about 
			 students and their classes.
*/

#include<iostream>
#include<iomanip>
#include"Student.h"

using namespace std;

void display(student);

int main()
{
student student1;
student student2;

// Values are set to student 1.
student1.setStudentName("Tim");
student1.setStudentId("1234");
student1.setCourseInfo("C++", "Fall 2019", float(95.1));
student1.setCourseInfo("Data Structures", "Spring 2020", float(79.3));
student1.setCourseInfo("Calculus", "Spring 2020", float(92.45));
student1.findGPA();

// Values are set to student 2. 
student2.setStudentName("Joel");
student2.setStudentId("4321");
student2.setCourseInfo("Composition 1", "Fall 2019", float(60.5));
student2.setCourseInfo("Micro Economics", "Spring 2020", float(84));
student2.setCourseInfo("Chemistry 1", "Spring 2020", float(82.9));
student2.findGPA();

// Information is displayed and the user is prompted for input, in which the displayed info is specified.
display(student1);
student1.inputGrade();
display(student2);
student2.inputGrade();

return 0;
}

// Values stored in the class's attributes are returned and stored into local variables, then outputted to the
// screen.
void display(student student)
{
	string studentName;
	string studentId;
	float GPA;
	int total;
	courseComponents course[100];

	studentName = student.getStudentName();
	studentId = student.getStudentId();
	GPA = student.getGPA();
	total = student.getTotal();
	
	for (int j = 0; j < total; j++)
	{
		course[j].courseName = student.getCourseName(j); // Note: The argument for the course get functions
		course[j].courseDate = student.getCourseDate(j); //       refers to the component of the array that
		course[j].courseGrade = student.getCourseGrade(j); //     needs to be obtained.
	}

	cout << "Name: " << studentName << "\n" << "ID: " << studentId << "\n\n";
	for (int j = 0; j < total; j++)
	{
		cout << "Course:" << course[j].courseName << ", " << course[j].courseDate << "\n";
		cout << "Grade:" << setprecision(4) << course[j].courseGrade << "\n\n";
	}
	cout << "GPA: " << setprecision(3) << GPA << "\n\n";
}
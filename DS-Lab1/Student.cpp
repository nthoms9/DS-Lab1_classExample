/*
Nick Thoms
Data Structures 2020
Due: 1/28/2020
Lab 1: Class Example
Description: This is the implementation file where the method definitions for the class are located.
*/

#include<iostream>
#include"Student.h"

using namespace std;

// Constructor 
student::student()
{
	studentName = "";
	studentId = "";
	GPA = 0;
	total = 0;

	for (int j = 0; j < 100; j++)
	{
		courseInfo[j].courseName = "";
		//courseInfo[j].courseDate = "";
		courseInfo[j].courseGrade = float(0);
	}
}

// The student's GPA is calculated
void student::findGPA()
{
	int gradePoints = 0;
	int courses = 0;
	for (int j = 0; j < total; j++)
	{
		if (courseInfo[j].courseGrade <= 100 && courseInfo[j].courseGrade >= 90)
			gradePoints = gradePoints + 4;
		else if (courseInfo[j].courseGrade < 90 && courseInfo[j].courseGrade >= 80)
			gradePoints = gradePoints + 3;
		else if (courseInfo[j].courseGrade < 80 && courseInfo[j].courseGrade >= 70)
			gradePoints = gradePoints + 2;
		else if (courseInfo[j].courseGrade < 70 && courseInfo[j].courseGrade >= 60)
			gradePoints = gradePoints + 1;

		courses++;
	}
	GPA = float(gradePoints) / float(courses);
}

// Classes with an user-specified grade are outputted to the screen.
void student::inputGrade()
{
	char input;
	bool valid;

	do
	{
		valid = true;

		cout << "Input an uppercase letter to see classes with a corresponding grade for the current student: ";
		cin >> input;
		cout << "\n";

		switch (input)
		{
		case 'A':
			for (int j = 0; j < total; j++)
			{
				if (courseInfo[j].courseGrade <= 100 && courseInfo[j].courseGrade >= 90)
					cout << "Course:" << courseInfo[j].courseName << " " << courseInfo[j].courseDate << "\n"
					<< "Grade:" << courseInfo[j].courseGrade << "\n\n";
			};
			break;
		case 'B':
			for (int j = 0; j <= total; j++)
			{
				if (courseInfo[j].courseGrade < 90 && courseInfo[j].courseGrade >= 80)
					cout << "Course:" << courseInfo[j].courseName << " " << courseInfo[j].courseDate << "\n"
					<< "Grade:" << courseInfo[j].courseGrade << "\n\n";
			};
			break;
		case 'C':
			for (int j = 0; j < total; j++)
			{
				if (courseInfo[j].courseGrade < 80 && courseInfo[j].courseGrade >= 70)
					cout << "Course:" << courseInfo[j].courseName << " " << courseInfo[j].courseDate << "\n"
					<< "Grade:" << courseInfo[j].courseGrade << "\n\n";
			};
			break;
		case 'D':
			for (int j = 0; j < total; j++)
			{
				if (courseInfo[j].courseGrade < 70 && courseInfo[j].courseGrade >= 60)
					cout << "Course:" << courseInfo[j].courseName << " " << courseInfo[j].courseDate << "\n"
					<< "Grade:" << courseInfo[j].courseGrade << "\n\n";
			};
			break;
		case 'F':
			for (int j = 0; j < total; j++)
			{
				if (courseInfo[j].courseGrade < 60)
					cout << "Course:" << courseInfo[j].courseName << " " << courseInfo[j].courseDate << "\n"
					<< "Grade:" << courseInfo[j].courseGrade << "\n\n";
			};
			break;
		default: cout << "Your input was invalid, (Valid grades are A, B, C, D, and F)\n\n"; valid = false;
			break;
		}

		if (valid == true)
		{
		cout << "If you wish to check another grade input 1, if not input 2: ";
		cin >> input;
		cout <<"\n";
		}

	} while (input == 1 || valid == false);

}
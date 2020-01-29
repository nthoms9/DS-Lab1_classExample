
/*
Nick Thoms
Data Structures 2020
Due: 1/28/2020
Lab 1: Class Example
Description: This is the header file where the "student" class is created. It contains a constructor get
			 methods, set methods, a method that calculates a student's GPA, and a method that displays
			 certain classes to the screen depending on the user's input.
*/#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;


// This struct type breaks down a college course into several components.
struct courseComponents
{
	string courseName;
	string courseDate;
	float  courseGrade;
};

class student
{
public:
	// Preconditions: A variable of the "student" type is declared in the client file.
	// Postconditions: Default values are assigned to the class's attributes.
	student();

	//Preconditions:  The constructor has been called.
	//Postconditions: A new value is assigned to the "studentName" attribute.
	void setStudentName(string studentName_) { studentName = studentName_; };

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "studentName" is returned which allow for use of the value in the
	//                client file. 
	string getStudentName() { return studentName; };

	//Preconditions:  The constructor has been called.
	//Postconditions: A new value is assigned to the "studentId" attribute.
	void setStudentId(string studentId_) { studentId = studentId_; };

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "studentId" is returned which allows for use of the value in the
	//                client file. 
	string getStudentId() { return studentId; };

	//Preconditions:  The constructor has been called.
	//Postconditions: A new value is assigned to the "courseInfo" attributes, then 1 is added to the int 
	//                "total", which holds the value for the number of classes.
	void setCourseInfo(string courseName_, string courseDate_, float courseGrade_) 
	{
		courseInfo[total].courseName = courseName_; 
		courseInfo[total].courseDate = courseDate_;
		courseInfo[total].courseGrade = courseGrade_;
		total++;
	};

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "courseName"  returned which allows for use of the value in the
	//                client file.
	string getCourseName(int order) { return courseInfo[(order)].courseName; };

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "courseDate" is returned which allows for use of the value in the
	//                client file. 
	string getCourseDate(int order) { return courseInfo[(order)].courseDate; };

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "courseGrade" is returned which allows for use of the value in the
	//                client file. 
	float getCourseGrade(int order) { return courseInfo[(order)].courseGrade; };

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "total" is returned which allows for use of the value in the
	//                client file. 
	int getTotal() { return total; };

	//Preconditions:  The constructor has been called and the "setCourseInfo" method has been called.
	//Postconditions: A value is calculated and stored in the attribute "GPA";
	void findGPA();

	//Preconditions:  The constructor has been called.
	//Postconditions: The value stored in "GPA" is returned which allows for use of the value in the
	//                client file. 
	float getGPA() { return GPA; };

	//Preconditions:  The constructor has been called and the "setCourseInfo" method has been called.
    //Postconditions: The user of the program is prompted for an input, in response specific attributes
	//                will be displayed to the screen.
	void inputGrade();

	// The attributes that hold the values in this class are encapsulated as private attributes.
private:
	string studentName;
	string studentId;
	courseComponents courseInfo[100];
	int total;
	float GPA;
};

#endif
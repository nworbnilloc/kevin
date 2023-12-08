//
// main.cpp
// C867-project
//
// Collin Brown
// ID: 010818704
//
// 2 June 2023
//

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {

public:
	// D. 1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:

	Student();

	// Setter methods to set the values of various student attributes
	void SetID(string id);
	
	void SetFirstName(string fName);
	
	void SetLastName(string lName);
	
	void SetEmailAddr(string emailAd);
	
	void SetAge(int yrsOld);
	
	void SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
	
	void SetDegreeProg(degree degrPr);
	

	// Getter methods to retrieve the values of student attributes
	string GetID();
	
	string GetFirstName();
	
	string GetLastName();
	
	string GetEmailAddr();
	
	int GetAge();
	
	int GetDaysInCourse1();
	
	int GetDaysInCourse2();
	
	int GetDaysInCourse3();
	
	degree GetDegreeProg();
	

	// Print methods to display individual attributes
	void PrintID();
	
	void PrintFirstName();
	
	void PrintLastName();
	
	void PrintEmailAddr();
	
	void PrintAge();
	
	void PrintDaysInCourse();
	
	void PrintDegreeProg();
	
	
	// Prints all student attributes
	void PrintAllStudentInfo();

private:
	// Private member variables to store student information
	string studentID;
	
	string firstName;
	
	string lastName;
	
	string emailAddr;
	
	int age;
	
	int daysInCourse[3];
	
	degree degrProg;
	
};

#endif


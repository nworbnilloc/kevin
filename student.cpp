//
// main.cpp
// C867-project
//
// Collin Brown
// ID: 010818704
//
// 2 June 2023
//

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;
#include "student.h"

// D. 1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:

Student::Student() {
    // Initialize variables to default values
    studentID = "";
    
    firstName = "";
    
    lastName = "";
    
    emailAddr = "";
    
    age = 0;
    
    daysInCourse[0] = 0;
    
    daysInCourse[1] = 0;
    
    daysInCourse[2] = 0;
    
    degrProg;
    
}

// Set student ID
void Student::SetID(string id) {

    studentID = id;
    
}

// Set student's first name
void Student::SetFirstName(string fName) {

    firstName = fName;
    
}

// Set student's last name
void Student::SetLastName(string lName) {

    lastName = lName;
    
}

// Set student's email address
void Student::SetEmailAddr(string emailAd) {

    emailAddr = emailAd;
    
}

// Set student's age
void Student::SetAge(int yrsOld) {

    age = yrsOld;
    
}

// Set number of days to complete a student's 3 courses
void Student::SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {

    daysInCourse[0] = daysInCourse1;
    
    daysInCourse[1] = daysInCourse2;
    
    daysInCourse[2] = daysInCourse3;
    
}

// Set student's degree program
void Student::SetDegreeProg(degree degrPr) {

    degrProg = degrPr;
    
}

// Get student ID
string Student::GetID() {

    return studentID;
    
}

// Get student's first name
string Student::GetFirstName() {

    return firstName;
    
}

// Get student's last name
string Student::GetLastName() {

    return lastName;
    
}

// Get student's email address
string Student::GetEmailAddr() {

    return emailAddr;
    
}

// Get student's age
int Student::GetAge() {

    return age;
    
}

// Get the number of days to complete the first course
int Student::GetDaysInCourse1() {

    return daysInCourse[0];
    
}

// Get the number of days to complete the second course
int Student::GetDaysInCourse2() {

    return daysInCourse[1];
    
}

// Get the number of days to complete the third course
int Student::GetDaysInCourse3() {

    return daysInCourse[2];
    
}

// Get student's degree program
degree Student::GetDegreeProg() {

    return degrProg;
    
}

// Print only student ID
void Student::PrintID() {

    cout << studentID;
    
}

// Print only student's first name
void Student::PrintFirstName() {

    cout << firstName << endl;
    
}

// Print only student's last name
void Student::PrintLastName() {

    cout << lastName << endl;
    
}

// Print only student's email
void Student::PrintEmailAddr() {

    cout << emailAddr << endl;
    
}

// Print only student's age
void Student::PrintAge() {

    cout << age << endl;
    
}

// Print student's days to complete each course
void Student::PrintDaysInCourse() {

    cout << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << endl;
    
}

// Print student's degree
void Student::PrintDegreeProg() {

    string degreeString;
    
    if (degrProg == SECURITY) {
    
        degreeString = "SECURITY";
        
    }
    
    else if (degrProg == NETWORK) {
    
        degreeString = "NETWORK";
        
    }
    
    else if (degrProg == SOFTWARE) {
    
        degreeString = "SOFTWARE";
        
    }
    
    else {
    
        degreeString = "ERROR";
        
    }
    
    cout << degreeString << endl;
    
}

// Print all student info in the required format
void Student::PrintAllStudentInfo() {

    string degreeString;
    
    if (degrProg == SECURITY) {
    
        degreeString = "SECURITY";
        
    }
    
    else if (degrProg == NETWORK) {
    
        degreeString = "NETWORK";
        
    }
    
    else if (degrProg == SOFTWARE) {
    
        degreeString = "SOFTWARE";
        
    }
    
    else {
    
        degreeString = "ERROR";
        
    }
    
    cout << "Student ID: " << studentID << endl;
    
    cout << "First Name: " << firstName << endl;
    
    cout << "Last Name: " << lastName << endl;
    
    cout << "Age: " << age << endl;
    
    cout << "Days in Courses: " << "[" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "]" << endl;
    
    cout << "Degree Program: " << degreeString << endl << endl;
    
    cout << "##################################################" << endl << endl;
    
}


//
// main.cpp
// C867-project
//
// Collin Brown
// ID: 010818704
//
// 2 June 2023
//

#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>
#include "degree.h"
#include <array>
#include "student.h"

// Roster class

class Roster {

public:

    Roster(int classSz);
    
    // Gets the student ID at a given index
    string GetStudentID(int index);
    
    // Adds a new student to the roster
    void add(string studentData);
    
    // Removes a student from the roster based on their student ID
    void remove(string studentID);
    
    // Prints information for all students in the roster
    void printAll();
    
    // Calculates and print the average number of days in course for a student
    void printAverageDaysInCourse(string studentID);
    
    // Prints the email addresses that are invalid
    void printInvalidEmails();
    
    // Prints information for students in the roster based on their degree program
    void printByDegreeProgram(degree degrPr);
    
    ~Roster();

    int classSize;
    
    int index;
    
private:

    array<Student*, 5> classRosterArray; // Stores the student objects
    
};

#endif


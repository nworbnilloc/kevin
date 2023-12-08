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
#include "student.h"
#include "roster.h"
#include "degree.h"
#include "roster.cpp"
#include "student.cpp"
#include <string>

using namespace std;

int main()
{
    // F.1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.


    cout << "|--------------------------------------------------|\n";  
    cout << "| C867: Scripting and Programming Applications     |\n";
    cout << "| Programming language used: C++                   |\n"; 
    cout << "| Name: Collin Ray Brown (@c0llinray)              |\n";
    cout << "| WGU ID: 010818704                                |\n";
    cout << "|--------------------------------------------------|\n\n";

    // Student Data
    string studentData[] = {
    
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        
        "A5,Collin,Brown,cbrown226@wgu.edu,22,21,28,35,SOFTWARE"
        
    };
    
    // F.2.  Create an instance of the Roster class called classRoster.
    Roster* classRoster = new Roster(5);

    // F.3.  Add each student to classRoster.
    for (int i = 0; i < 5; ++i) {
    
        classRoster->add(studentData[i]);
        
    };

    // Printing class roster
    classRoster->printAll();

    // Printing invalid emails
    classRoster->printInvalidEmails();

    // Printing average days in courses for each student
    for (int i = 0; i < 5; ++i) {
    
        classRoster->printAverageDaysInCourse(classRoster->GetStudentID(i));
        
    }
    
    cout << endl << endl << endl;
    
    // Printing students with SOFTWARE Degree
    classRoster->printByDegreeProgram(SOFTWARE);
    
    cout << endl;

    // Removing Student A3
    cout << "*******************\n\n";
    
    classRoster->remove("A3");
    
    cout << endl << "*******************\n\n";
    

    // Printing new class roster
    classRoster->printAll();
    
    cout << endl;

    // Testing "student not found" error
    classRoster->remove("A3");
    
    cout << endl;

    // Destructor
    classRoster->~Roster();
    
    delete classRoster;

    return 0;
}


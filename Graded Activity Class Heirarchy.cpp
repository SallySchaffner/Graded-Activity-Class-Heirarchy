#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;

// Function prototype
void displayGrade(const GradedActivity&);

int main()
{
    // Create a GradedActivity object. The score is 88.
    GradedActivity test1(88.0);
    test1.setName("Discussion Post");

    // Create a PassFailExam object. There are 100 questions,
    // the student missed 25 of them, and the minimum passing
    // score is 70.
    PassFailExam test2(100, 25, 70.0);
    test2.setName("Practice Test");

    // Display the grade data for both objects.
   // cout << "Test 1:\n";
    cout << "+++ " << test1.getName() << " +++\n";
    displayGrade(test1);    // GradedActivity object
    //cout << "\nTest 2:\n";
    cout << "+++ " << test2.getName() << " +++\n";
    displayGrade(test2);    // PassFailExam object
    return 0;
}

//***************************************************************
// The displayGrade function displays a GradedActivity object's *
// numeric score and letter grade.                              *
//***************************************************************

void displayGrade(const GradedActivity& activity)
{
    cout << setprecision(1) << fixed;
    cout << "The activity's numeric score is "
        << activity.getScore() << endl;
    cout << "The activity's letter grade is "
        << activity.getLetterGrade() << endl;
}
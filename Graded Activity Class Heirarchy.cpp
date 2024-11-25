#include <iostream>
#include <iomanip>
#include <string>
#include "PassFailExam.h"
#include "FinalExam.h"
#include <vector>
using namespace std;

// Function prototype
void displayGrade(const GradedActivity*);

int main()
{
    // Constant for the size of an array.
    const int NUM_TESTS = 4;

    // Create a vector of Graded Activity pointers 
    vector<GradedActivity*> grades(NUM_TESTS);

    // Store the graded activities in the class
    grades[0] = new GradedActivity(99.0, "Chapter 1 Quiz");
    grades[1] = new FinalExam(100, 25);
    grades[2] = new GradedActivity(67.0, "Chapter 2 Quiz");
    grades[3] = new PassFailExam(50, 12, 60.0, "Practice Quiz");

   cout << "Output with range-based for loop: \n";
   cout << "----------------------------------\n";
   for (auto activity : grades)
    {
        displayGrade(activity);
        cout << endl;
    }

   cout << "Output with iterator\n";
   cout << "--------------------\n";
   vector<GradedActivity*>::iterator it;
   for (it = grades.begin(); it != grades.end(); ++it) {
       displayGrade(*it);
       cout << endl;
    }
    std::cout << std::endl;
        
    return 0;
}

//***************************************************************
// The displayGrade function displays a GradedActivity object's *
// numeric score and letter grade. This version of the function *
// uses a GradedActivity pointer as its parameter.              *
//***************************************************************

void displayGrade(const GradedActivity* activity)
{
    cout << "+++" << activity->getName() << " +++" << endl;
    cout << setprecision(1) << fixed;
    cout << "The activity's numeric score is "
        << activity->getScore() << endl;
    cout << "The activity's letter grade is "
        << activity->getLetterGrade() << endl;
}
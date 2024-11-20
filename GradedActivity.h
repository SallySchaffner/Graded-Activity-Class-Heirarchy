#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

#include <string>

// GradedActivity class declaration

class GradedActivity
{
protected:
    double score;   // To hold the numeric score
    std::string name;    // To hold the name of the activity
public:
    // Default constructor
    GradedActivity()
    {
        score = 0.0;
        name = "";
    }

    // Constructor
    GradedActivity(double s, std::string n="Graded Activity")
    {
        score = s;
        name = n;
    }

    // Mutator functions
    void setScore(double s)
    {
        score = s;
    }

    void setName(std::string n)
    {
        name = n;
    }

    // Accessor functions
    double getScore() const
    {
        return score;
    }

    std::string getName() const
    {
        return name;
    }

    virtual char getLetterGrade() const;
};
#endif 
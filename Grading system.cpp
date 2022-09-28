// program to show grading system//
#include <iostream>
using namespace std;

int main()
{
    int math, english, french, science, cre;
    int average;

    cout << "Enter marks for Maths: ";
    cin >> math;

    cout << "Enter marks for English: ";
    cin >> english;

    cout << "Enter marks for French: ";
    cin >> french;

    cout << "Enter marks for Science: ";
    cin >> science;

    cout << "Enter marks for CRE: ";
    cin >> cre;

    average = (math + english + french + science + cre) / 5;

    if(average >= 70)
        cout << "Grade A";
    else if(average >= 60 && average < 70)
        cout << "Grade B";
    else if(average >= 50 && average < 60)
        cout << "Grade C";
    else if(average >= 40 && average < 50)
        cout << "Grade D";
    else if(average < 40)
        cout << "Fail";

    return 0;
}

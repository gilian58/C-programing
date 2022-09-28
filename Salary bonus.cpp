//program to show salary bonus//
#include <iostream>
using namespace std;

int main()
{
    float salary, bonus;
    int years;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your years of service: ";
    cin >> years;

    if (years > 10)
        bonus = salary * 0.1;
    else if (years >= 6 && years <= 10)
        bonus = salary * 0.08;
    else if (years < 6)
        bonus = salary * 0.05;

    cout << "Your net bonus amount is: " << bonus << endl;

    return 0;
}

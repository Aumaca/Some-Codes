#include <iostream>

/*
    Receives amount of worked hours and amount of extra hours worked and also the minimum wage.
    Returns the final wage.
    value of hour worked: 7.5%;
    value of extra hour worked: 15%;

    Begin
        Float hours, extraHours, minimumWage, finalWage;
        Read(hours, extraHours, minimumWage);
        finalWage <- hours * 0.075 * minimumWage + extraHours * 0.15 * minimumWage;
        Write(finalWage);
    End

*/
int main() {
    float hours, extraHours, minimumWage, finalWage;
    std::cout << "Hours worked: ";
    std::cin >> hours;
    std::cout << "Extra hours worked: ";
    std::cin >> extraHours;
    std::cout << "Minimum Wage: ";
    std::cin >> minimumWage;
    finalWage = hours * 0.075 * minimumWage + extraHours * 0.15 * minimumWage;
    std::cout << "Final wage: " << finalWage;
    return 0;
}
#include <iostream>

/*
    The Farm Problem

    In this challenge, a farmer is
    asking you to tell him how many
    legs can be counted among all his
    animals. The farmer breeds
    three species: chickens = 2 legs,
                   cows = 4 legs,
                   pigs = 4 legs.
    The farmer has counted his animals
    and he gives you a subtotal for each
    species. You have to implement a function
    that returns the total number of legs
    of all the animals.

    Examples
    animals(2, 3, 5) ➞ 36

    animals(1, 2, 3) ➞ 22

    animals(5, 2, 8) ➞ 50

    The order of animals passed is animals(chickens, cows, pigs).
*/
int countLegs(int chickens, int cows, int pigs) {
    int totalLegs;
    totalLegs = chickens * 2 + cows * 4 + pigs * 4;
    return totalLegs;
}

int main()
{
    int ex1 = countLegs(2, 3, 5);
    int ex2 = countLegs(1, 2, 3);
    int ex3 = countLegs(5, 2, 8);
    std::cout << "Example 1: " << ex1 << "\n";
    std::cout << "Example 2: " << ex2 << "\n";
    std::cout << "Example 3: " << ex3 << "\n";
    return 0;
}
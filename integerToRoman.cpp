#include <iostream>  // input and output operations
using namespace std; // Makes std:: prefix not necessary

/*
    This algorithm receives an integer and then returns
    a string representing his roman number.

    I checked this algorithm before on internet,
    so at least I tried to understand by myself.

    To form all roman numbers between 10 to 1, is
    just necessary the letters I, IV, V, IX and X.
    There are IV and IX because they are the only
    numbers that need to start with a roman number
    lesser then the following to perform subtraction.

    From 100 to 10 the process is the same:
    to 1 to 10: I, IV, V, IX and X;
    to 10 to 100: X, XL, L, XC and C.
    The only numbers that needs subtraction:
    (units) -> 4, 9
    (tens) -> 40, 90
    (hundreds) -> 400, 900
*/

string toRoman(int n)
{
    string romans[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int integers[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result;
    for (int i = 0; i < 13; ++i)
    {
        while (n - integers[i] >= 0)
        {
            result += romans[i];
            n -= integers[i];
        }
    }
    return result;
};

int main()
{
    int n = 954;
    cout << n << " = " << toRoman(n) << "\n";
    n = 2023;
    cout << n << " = " << toRoman(n) << "\n";
    n = 17;
    cout << n << " = " << toRoman(n) << "\n";
    n = 34;
    cout << n << " = " << toRoman(n) << "\n";
    return 0;
}
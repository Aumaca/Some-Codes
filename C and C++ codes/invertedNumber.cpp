#include <iostream>

/*
    Receive a number and then return the inversed number.

    Begin
        Integer: number, n1, n2, n3, n4, inversedNumber;
        Read(number);
        n1 = number / 1000;       # unit
        number -= n1 * 1000;
        n2 = number / 100 * 10;   # ten
        number -= n2 * 10;
        n3 = number / 10 * 100;   # hundred
        number -= n3 / 10;
        n4 = number;              # thousand
        inversedNumber = n1 + n2 + n3 + n4;
        Write(number);
    End
*/
int main()
{
    int number, n1, n2, n3, n4, inversedNumber;
    std::cout << "Number: ";
    std::cin >> number;
    n1 = number / 1000;
    number -= n1 * 1000;
    n2 = number / 100 * 10;
    number -= n2 * 10;
    n3 = number / 10 * 100;
    number -= n3 / 10;
    n4 = number * 1000;
    inversedNumber = n1 + n2 + n3 + n4;
    std::cout << "Inverted number: " << inversedNumber;
    return 0;
}
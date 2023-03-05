#include <iostream> // Resposible for input/output stream
#include <map> // To dictionaries
using namespace std; // To omit namespace qualifier

bool isEqualDenominators(int firstDenominator, int secondDenominator);

void showResult(map<string, int> firstFraction, map<string, int> secondFraction, map<string, int> result, char operation);

map<string, int> toSum(map<string, int> firstFraction, map<string, int> secondFraction);

map<string, int> toSubtraction(map<string, int> firstFraction, map<string, int> secondFraction);

map<string, int> toMultiplication(map<string, int> firstFraction, map<string, int> secondFraction);

map<string, int> toDivision(map<string, int> firstFraction, map<string, int> secondFraction);

int main()
{
    map<string, int> firstFraction = {
        {"numerator", 0},
        {"denominator", 0},
    };

    map<string, int> secondFraction = {
        {"numerator", 0},
        {"denominator", 0},
    };

    int choice = 0;

    cout << "=== Fraction Calculator ===\n";
    cout << "What operation do you want?\n";
    cout << "[1] Sum\n";
    cout << "[2] Subtraction\n";
    cout << "[3] Multiplication\n";
    cout << "[4] Division\n";
    cout << "Operation: ";
    cin >> choice;
    if (choice > 4 || choice < 1)
    {
        cout << "Invalid choice for operation. Try again.\n";
        main();
    }

    cout << "First fraction numerator: ";
    cin >> firstFraction["numerator"];
    cout << "First fraction denominator: ";
    cin >> firstFraction["denominator"];

    cout << "Second fraction numerator: ";
    cin >> secondFraction["numerator"];
    cout << "Second fraction denominator: ";
    cin >> secondFraction["denominator"];

    char operation;
    if (choice == 1)
    {
        map<string, int> result = toSum(firstFraction, secondFraction);
        showResult(firstFraction, secondFraction, result, '+');
    }
    if (choice == 2)
    {
        map<string, int> result = toSubtraction(firstFraction, secondFraction);
        showResult(firstFraction, secondFraction, result, '-');
    }
    if (choice == 3)
    {
        map<string, int> result = toMultiplication(firstFraction, secondFraction);
        showResult(firstFraction, secondFraction, result, 'x');
    }
    if (choice == 4)
    {
        map<string, int> result = toDivision(firstFraction, secondFraction);
        showResult(firstFraction, secondFraction, result, '/');
    }
}

bool isEqualDenominators(int firstDenominator, int secondDenominator)
{
    bool isEqual = (firstDenominator == secondDenominator) ? true : false;
    return isEqual;
}

// SHOW RESULT function
void showResult(map<string, int> firstFraction, map<string, int> secondFraction, map<string, int> result, char operation)
{
    cout << "Result: " << firstFraction["numerator"] << " / " << firstFraction["denominator"] << " " << operation <<
    " " << secondFraction["numerator"] << " / " << secondFraction["denominator"] << " = " << result["numerator"] <<
    " / " << result["denominator"];
}

// SUM function
map<string, int> toSum(map<string, int> firstFraction, map<string, int> secondFraction)
{
    map<string, int> result;
    if (isEqualDenominators(firstFraction["denominator"], secondFraction["denominator"]))
    {
        result["numerator"] = firstFraction["numerator"] + secondFraction["numerator"];
        result["denominator"] = firstFraction["denominator"];
        return result;
    }
    result["numerator"] = (firstFraction["numerator"] * secondFraction["denominator"]) + (secondFraction["numerator"] * firstFraction["denominator"]);
    result["denominator"] = firstFraction["denominator"] * secondFraction["denominator"];
    return result;
}

// SUBTRACTION function
map<string, int> toSubtraction(map<string, int> firstFraction, map<string, int> secondFraction)
{
    map<string, int> result;
    if (isEqualDenominators(firstFraction["denominator"], secondFraction["denominator"]))
    {
        result["numerator"] = firstFraction["numerator"] - secondFraction["numerator"];
        result["denominator"] = firstFraction["denominator"];
        return result;
    }
    result["numerator"] = (firstFraction["numerator"] * secondFraction["denominator"]) - ((secondFraction["numerator"] * firstFraction["denominator"]));
    result["denominator"] = firstFraction["denominator"] * secondFraction["denominator"];
    return result;
}

// MULTIPLICATION function
map<string, int> toMultiplication(map<string, int> firstFraction, map<string, int> secondFraction)
{
    map<string, int> result;
    result["numerator"] = firstFraction["numerator"] * secondFraction["numerator"];
    result["denominator"] = firstFraction["denominator"] * secondFraction["denominator"];
    return result;
}

// DIVISION function
map<string, int> toDivision(map<string, int> firstFraction, map<string, int> secondFraction)
{
    map<string, int> result;
    result["numerator"] = firstFraction["numerator"] * secondFraction["denominator"];
    result["denominator"] = firstFraction["denominator"] * secondFraction["numerator"];
    return result;
}
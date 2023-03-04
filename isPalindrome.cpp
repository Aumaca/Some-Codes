#include <iostream>
#include <string>
using namespace std;

void checkPalindrome(string word)
{
    string wordWithoutSpace;
    string backwardsWordWithSpace;
    string backwardsWordWithoutSpace;

    // set 'backwardsWordWithoutSpace' as 'word' but without space
    for (int i = 0; i <= word.length() - 1; ++i)
    {
        if (word[i] == ' ')
        {
            continue;
        }
        wordWithoutSpace += word[i];
    }

    // 'i' begin in max index of the word until the begin
    // 'i' must not be less than the initial index (0)
    // so 'i' will be subtracted until 0
    for (int i = word.length() - 1; i >= 0; --i)
    {
        if (word[i] == ' ')
        {
            backwardsWordWithSpace += word[i];
            continue;
        }
        backwardsWordWithoutSpace += word[i];
        backwardsWordWithSpace += word[i];
    }
    string result = (wordWithoutSpace == backwardsWordWithoutSpace) ? "are equal, so it's a palindrome!" : "are different, so it's not a palindrome...";
    cout << "\"" << word << "\""
         << " and "
         << "\"" << backwardsWordWithSpace << "\" "
         << result << "\n";
}

void testYourself()
{
    string word;
    cout << "Write some word: ";
    cin >> word;
    checkPalindrome(word);
}

int main()
{
    char decision;
    char restart = 'Y';
    cout << "This algorithm checks if the provided word is a palindrome. \n";
    cout << "Want to test by yourself? \n";
    cout << "Y/N: ";
    cin >> decision;
    if (decision == 'Y' || 'y')
    {
        while (restart == 'Y' || 'y')
        {
            testYourself();
            cout << "Try again?\n";
            cout << "[Y/N]: ";
            cin >> restart;
            if (restart != 'Y' || 'y') {
                break;
            }
        }
    }
    else
    {
        string word;
        word = "a sacada da casa";
        checkPalindrome(word);
        word = "carlos augusto";
        checkPalindrome(word);
        word = "reviver";
        checkPalindrome(word);
        word = "luz azul";
        checkPalindrome(word);
    }

    return 0;
}
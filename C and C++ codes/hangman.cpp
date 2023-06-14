#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm> // Only used for find() in array
#include <chrono> // Used to work with time

std::string newWord()
{
    std::vector<std::string> words{"google", "bird", "plane", "smartphone", "computer", "rubiks", "notebook", "socks", "light", "space", "superman"};
    std::random_device rd;
    std::mt19937 rng(std::chrono::system_clock::now().time_since_epoch().count());
    std::shuffle(words.begin(), words.end(), rng);
    return words[0];
}

std::string updateUserStatus(const std::string &actualWord, const std::string &userWord, char letter)
{
    std::string updatedWord = userWord;
    bool isCorrect = false;
    for (int i = 0; i < actualWord.length(); ++i)
    {
        if (actualWord[i] == letter)
        {
            updatedWord[i] = letter;
        }
    }
    if (isCorrect)
    {
        std::cout << "You were right!\n";
    }
    else
    {
        std::cout << "Oh... You were not lucky.\n";
    }
    return updatedWord;
}

void displayWrongLetters(const std::vector<char> &wrongLetters)
{
    std::cout << "Wrong Letters: ";
    for (const char &letter : wrongLetters)
    {
        if (letter == wrongLetters[wrongLetters.size() - 1])
        {
            std::cout << letter << ".\n";
        }
        else
        {
            std::cout << letter << ", ";
        }
    }
}

void game()
{
    // Set variables
    std::string actualWord = newWord();
    std::string userWord(actualWord.size(), '_');
    std::vector<char> wrongLetters;
    int lives = 6;
    char letter;

    std::cout << "You have 6 lives... Good luck!\n";
    while (lives > 0)
    {
        // Guess letter
        std::string letterToInput;
        std::cout << "Guess a letter: ";
        getline(std::cin, letterToInput);
        while (letterToInput.length() != 1)
        {
            std::cout << "Invalid input.\n";
            std::cout << "Guess a letter: ";
            getline(std::cin, letterToInput);
        }
        letter = tolower(letterToInput[0]);

        // Checks if letter is included inside word and 'wrongLetters'
        if (actualWord.find(letter) == std::string::npos) // npos: https://cplusplus.com/reference/string/string/npos/
        {
            // If the letter is wrong but was already tried
            if (std::find(wrongLetters.begin(), wrongLetters.end(), letter) != wrongLetters.end())
            {
                std::cout << "You already guessed the letter \"" << letter << "\" before...";
                std::cout << "Try again!\n";
            }
            else
            {
                std::cout << "\"" << letter << "\" is not included in the word...\n";
                wrongLetters.push_back(letter);
                lives--;
            }
        }
        else
        {
            userWord = updateUserStatus(actualWord, userWord, letter);
        }

        // Display tried letters
        displayWrongLetters(wrongLetters);

        // Show updated status
        std::cout << "\n\n------------------\n\n";
        std::cout << "Lives: " << lives << "\n";
        std::cout << "Word: " << userWord << "\n";

        // End
        if (userWord == actualWord)
        {
            std::cout << "Congratulations! You won!\n";
            return;
        }
    }
    std::cout << "Game over! The word was \"" << actualWord << "\".\n";
}

int main()
{
    std::cout << "HANGMAN GAME!\n";
    std::cout << "Let's begin.\n";
    game();
    return 0;
}

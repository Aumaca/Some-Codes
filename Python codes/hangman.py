from random import randint


class Game():
    def __init__(self):
        actual_word_theme, actual_word = self.set_word()
        self.actual_word_theme = actual_word_theme
        self.actual_word = actual_word
        self.lives = 6
        self.user_word = ''.join(['_' for _ in self.actual_word])
        self.wrong_letters = []

    # Returns random theme and a random word from theme
    def set_word(self):
        words = {
            "Technology": ["Algorithm", "Raspberry", "Arduino",
                           "Metaverse", "Computer", "Robotics",
                           "Cryptography", "Software", "Hardware"],
            "Country": ["Australia", "Brazil", "Canada",
                        "Egypt", "France", "India",
                        "Japan", "Mexico", "Nigeria"]
        }
        theme = list(words.keys())[randint(0, len(words.keys()) - 1)]
        word = (words[theme][randint(0, len(words[theme]) - 1)]).lower()
        return theme, word

    def update_user_status(self, letter: str):
        if letter in self.wrong_letters:
            print("\n")
            print("You already tried this letter!")
            return
        
        correct = False
        user_word_array = list(self.user_word)
        for i, x in enumerate(self.actual_word):
            if x == letter:
                user_word_array[i] = letter
                correct = True

        print("\n")

        if not correct:
            self.lives -= 1
            self.wrong_letters.append(letter)
            print("Wrong!")
        else:
            print("Right!")
        self.user_word = ''.join(user_word_array)

    def run(self):
        if '_' not in self.user_word:
            print("\n")
            print("You did it!")
            print(f"The word was {self.actual_word}.")
            return
        if self.lives > 0:
            print(f"Your lives: {self.lives}.")
            print(f"Wrong Letters: {', '.join(self.wrong_letters)}")
            print(f"Theme: {self.actual_word_theme}.")
            print(f"Word: {self.user_word}")
            letter = input("Guess a letter: ")
            while len(letter) != 1 or not letter.isalpha():
                print("Invalid input. Try again.")
                letter = input("Guess a letter: ")
            self.update_user_status(letter)
            self.run()
        else:
            print("You died...")
            print(f"The word was: {self.actual_word}")
            return


print("Welcome to the Hangman Game!")
print("Let's go.\n")
game = Game()
game.run()

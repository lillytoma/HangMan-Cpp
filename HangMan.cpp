#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to hangman... Guess a Country Name \nEach letter is represented by a star. You have to type only one letter in one try \nYou have 5 tries to try and guess a the word.\n" << endl;
    cout << "-----------------------------------------------------------------------------------------\n" << endl;
    string words[] =
   
    {
        "japan",
        "turkey",
        "nepal",
        "malaysia",
        "philippines",
        "australia",
        "america",
        "ethiopia",
        "oman",
        "indonesia"
    };


   
    srand(time(NULL));
    int n = rand() % 10;
    string word = words[n];

   
    string guessed_letters(word.length(), '*'); // initialize guessed letters with stars

    cout << guessed_letters << endl;

    char letter;
    int remaining_guesses = 5;

    while (remaining_guesses > 0 && guessed_letters != word)
    {
   

        cout << "Guess a letter: ";
        cin >> letter;

        bool found = false;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == letter)
            {
                guessed_letters[i] = letter;
                found = true;

            }
 
        }


        if (found)    //by default it is read as true 
        {
            cout << "\nYou found a letter! Isnt that exciting!" << endl;
            cout << "You have " << remaining_guesses << " guesses left.\n" << endl;
        }
        else
        {
            remaining_guesses--;
            cout << "\nWhoops! That letter isnt in there!" << endl;
            cout << "You have " << remaining_guesses << " guesses left.\n" << endl;
        }

        cout << guessed_letters << endl;
    }

    if (guessed_letters == word)
    {
        cout << "Yeah, you got it!\n\n" << word << "." << endl;
    }
    else
    {
        cout << "You lost!\n\n" << word << "." << endl;
    }

    return 0;
}







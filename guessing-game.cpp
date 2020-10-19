#include <iostream>
#include <cstdlib>

void guess_me();

int main()
{
    guess_me();

    return 0;
}

void guess_me()
{
    int user_input = 0;

    std::srand(time(NULL));
    int secret_number = (std::rand() % 10) + 1;

    while (user_input != secret_number)
    {
        std::cout << "Guess the secret number between 1 and 10 : ";

        if (!(std::cin))
        {
            std::cout << "please enter a numeric number" << std::endl;
            break;
        }
        std::cin >> user_input;

        if (user_input == secret_number)
        {
            std::cout << "The force is strong in this one  " << secret_number << std::endl;
        }
    }
}

//@jim4067
//the program generated a secret number and asks the user to guess the number
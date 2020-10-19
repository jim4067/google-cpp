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
    int random = (std::rand() % 10) + 1;

    while (user_input != random)
    {
        std::cout << "Guess a number : ";
        std::cin >> user_input;

        if (user_input == random)
        {
            std::cout << "you and the computer guessed  " << random << std::endl;
        }
    }
}
//Projects on C++ Programming Internship
//CodSoft Internship
//Domain Name - C++ Programming
//Task-1(Number Guessing Game)
//Intern Name - Mugilarasan Rajendran

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 
    std::cout << "\t\t\tWelcome to Guess the Number Game\n\n";

    do
    {
        std::cout << "Enter your guess between 1 and 100: ";
        std::cin >> guess;
        chances++;

        if (guess > randomNumber){
            std::cout << "The "<<guess<<" is Too high!\n\n";
        }
        else if (guess < randomNumber){
            std::cout << "The "<<guess<<" is Too low!\n\n";
        }
        else{
            std::cout << "\nVoila! You got the right guess "<<guess <<"in "<< chances << " tries!\n";
        }
    } 
        while (guess != randomNumber);

	return 0;
}

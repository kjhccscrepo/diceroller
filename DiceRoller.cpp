#include <random>
#include <iostream>
int HowManyDice;
int HowManySides;
int CurrentDiceRoll;
int TotalDiceRoll;
int MaximumRoll;
double AverageRoll;
double IntNumFix;
double TestVar;

int main()
{
    srand(time(0));

    std::cout << "Welcome to the Dice Roller Program\n\n";
    std::cout << "How many dice do you want to roll: ";
    std::cin >> HowManyDice;
    std::cout << "\n\nHow many sides are on these dice: ";
    std::cin >> HowManySides;

    std::cout << "\n\nWhen you roll your " << HowManyDice << "d" << HowManySides << ", the stats are...\n";
    MaximumRoll = (HowManyDice * HowManySides);
    IntNumFix = MaximumRoll;
    AverageRoll = MaximumRoll/2;
    IntNumFix = HowManyDice;
    AverageRoll = (AverageRoll += (IntNumFix/2));


    std::cout << "\nMinimum: " << HowManyDice; 
    std::cout << "\nAverage: " << AverageRoll;
    std::cout << "\nMaximum: " << MaximumRoll;

    do {

        CurrentDiceRoll = (rand() % 6 + 1);
        std::cout << "\n" << CurrentDiceRoll;
      

    
    } while (0);
    return 0;
}
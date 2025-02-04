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
int remainingrolls;
int rollcount = 1;

int main()
{
    srand(time(0));
    std::cout << "Welcome to the Dice Roller Program\n\n";
    std::cout << "How many dice do you want to roll: ";
    std::cin >> HowManyDice;
    std::cout << "\nHow many sides are on these dice: ";
    std::cin >> HowManySides;

    std::cout << "\n\nWhen you roll your " << HowManyDice << "d" << HowManySides << ", the stats are...\n";
    MaximumRoll = (HowManyDice * HowManySides);
    IntNumFix = MaximumRoll;
    AverageRoll = MaximumRoll / 2;
    IntNumFix = HowManyDice;
    AverageRoll = (AverageRoll += (IntNumFix / 2));


    std::cout << "\nMinimum: " << HowManyDice;
    std::cout << "\nAverage: " << AverageRoll;
    std::cout << "\nMaximum: " << MaximumRoll;
    std::cout << "\n";

    for (remainingrolls = HowManyDice; remainingrolls > 0; rollcount++) {

        CurrentDiceRoll = (rand() % HowManySides + 1);
        std::cout << "\nRoll #" << rollcount << " was " << CurrentDiceRoll;
        TotalDiceRoll = TotalDiceRoll + CurrentDiceRoll;
        remainingrolls -= 1;

    }
    std::cout << "\n\nThe total of the " << HowManyDice << " rolls was " << TotalDiceRoll << ".";
    std::cout << "\nThanks for using the Dice Roller Program! Program will now close...";
    
    return 0;
}

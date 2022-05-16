// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Helper.h"

int main()
{
    char menu[2][32] = { "Another Question","Exit" };
    char questions[4][36] = { "What is 2 + 2?","What is 3 * 3?", "What is 5 + 3?","What is 5 - 2?" };

    // Asnwer choices
    char Question1[4][32] = { "2","5","4","3" };
    char Question2[4][32] = { "9","12","6","10" };
    char Question3[4][32] = { "7","6","8","9" };
    char Question4[4][32] = { "3","4","6","7" };
    int range = 5;
    int random =15+ rand() % (20-15+1);
    int UserAnswer;
    while (true) {
        int UserChoice = MainMenu(2, menu);
        system("cls");
        
        switch (UserChoice)
        {
        case 1:
            random = 1 + rand() % ((int)(4 - 1 + 1));
            std::cout << questions[random-1] << std::endl << std::endl;
            switch (random)
            {
            case 1:
                UserAnswer = MainMenu(4, Question1);
                if (UserAnswer == 3)
                    std::cout << "You Got It Right!!!\n\n";
                else
                    std::cout << "That was Incorrect :(\n\n";
                
                break;
            case 2:
                UserAnswer = MainMenu(4, Question2);
                if (UserAnswer == 1)
                    std::cout << "You Got It Right!!!\n\n";
                else
                    std::cout << "That was Incorrect :(\n\n";
                break;
            case 3:
                UserAnswer = MainMenu(4, Question3);
                if (UserAnswer == 3)
                    std::cout << "You Got It Right!!!\n\n";
                else
                    std::cout << "That was Incorrect :(\n\n";
                break;
            case 4:
                UserAnswer = MainMenu(4, Question4);
                if (UserAnswer == 4)
                    std::cout << "You Got It Right!!!\n\n";
                else
                    std::cout << "That was Incorrect :(\n\n";
                
                break;

            default:
                break;
               
            }
            system("pause");
            system("cls");
            break;
        case 2:
            exit(0);
            break;
        default:
            break;
        }
    }
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

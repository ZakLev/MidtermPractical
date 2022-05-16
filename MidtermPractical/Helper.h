#pragma once
#include <iostream>
#include <vector>

int GetValidatedInt(const char* strMessage , int min = 0, int max = 0)
{
    bool notNum = false;
    int num;
    do {
        
        int length = strlen(strMessage) + 1; 
        char* message = new char[length];
        strcpy_s(message, length, strMessage);
        std::cout << message;
        delete message;
        std::cin >> num;
        if (min == 0 && max == 0)
        {
            if (std::cin.fail())//check for input error
            {
                std::cin.clear(); // clears any errors in the console
                std::cin.ignore(INT_MAX, '\n'); // clears out the buffer
                
            }
            else
            {
              //  std::cout << "\n";
                notNum = true;
            }
        }
        else {
            if (std::cin.fail() || num > max || num < min)//check for input error
            {
                std::cin.clear(); // clears any errors in the console
                std::cin.ignore(INT_MAX, '\n'); // clears out the buffer
                
            }

            else
            {
               // std::cout << "\n";
                notNum = true;
            }
        }
        

    } while (notNum == false);
   
    std::cin.clear(); // clears any errors in the console
    std::cin.ignore(INT_MAX, '\n'); // clears out the buffer

    return num;
}

int MainMenu(int Amount, char strMessege[][32])
{
    for (int x = 0; x < Amount; x++)
    {
        std::cout << x + 1 << ". " << strMessege[x] << std::endl;
    }
   int choice = GetValidatedInt("Please Choose an Option: ", 1, Amount);
   return choice;
        
}
int randomRange(int min, int max)
{
    return min + rand() % max;
}
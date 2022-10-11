#include <iostream>
#include <conio.h>

int main()
{
    char ch;
    while ((ch = getch()) != 'q')
    {
        std::cout << ch;
    }
}
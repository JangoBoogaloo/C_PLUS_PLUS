#include <iostream>

int main(int argc, char *argv[])
{
    int favourite = 0;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favourite;
    std::cout << "Your number is: " << favourite << std::endl;
    return 0;
}
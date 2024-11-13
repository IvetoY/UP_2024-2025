#include <iostream>
#include <ctime>
int main()
{
    int yourYear;
    int yourMonth;
    int yourDay;
   std::cout << "year of birth:" << std::endl;
    std::cin >> yourYear;
    std::cout << "month:" << std::endl;
    std::cin >> yourMonth;
    std::cout << "day:" << std::endl;
    
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int day = now->tm_mday;
    int month = now->tm_mon + 1;
    int year = now->tm_year + 1900;
int days=0;
int hours=0;
int minutes=0;

    return 0;
}
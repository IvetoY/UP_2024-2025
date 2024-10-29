#include <iostream>

int main()
{
    int n;
    std::cout << "enter the length of your array" << std::endl;
    std::cin >> n;
    int d;
    std::cout << "d:" << std::endl;
    std::cin >> d;
    int numbers[256];
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }
    int currentElement;
    int j=0;
    do
    {
        
        for (int i = 0; i <n; i++)
        {
            currentElement = numbers[j];
            numbers[j] = numbers[i];
            numbers[i]=currentElement;
        }
        
        d--;
    }
    while (d != 0);

    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
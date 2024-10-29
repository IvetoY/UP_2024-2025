#include <iostream>

int main()
{
    int n;
    std::cout << "n:" << std::endl;
    std::cin >> n;
    int array[256];
    int br = 0;
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    int i = 0;
    int j = n - 1;
    while (i != j && i < n / 2)
    {

        if (array[i] == array[j])
        {
            i += 1;
            j -= 1;
        }
        else
        {
            flag=false;
            break;

        }
    }

    std::cout<<flag;

    return 0;
}
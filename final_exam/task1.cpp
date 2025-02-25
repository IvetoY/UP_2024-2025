#include <iostream>
#include <climits> 

void readTheNumbers(size_t n, int numbers[]) {
    for (size_t i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
}

int func(int numbers[], size_t n) {
    int maxSum = INT_MIN; 
    int currentSum = 0;

    for (size_t i = 0; i < n; i++) {
        currentSum += numbers[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0; 
        }
    }

    return maxSum;
}

int main() {
    size_t n;
    std::cout << "n:" << std::endl;
    std::cin >> n;

    if (n < 1 || n > 100) {
        std::cerr << "Грешка: n трябва да бъде в интервала [1, 100]." << std::endl;
        return 1;
    }

    int numbers[100];
    std::cout << "Enter your numbers:" << std::endl;
    readTheNumbers(n, numbers);

    std::cout << "result: " << func(numbers, n) << std::endl;

    return 0;
}

#include <iostream>
#include <algorithm> // За сортиране

const size_t MAX_SIZE = 64;

void readTheNumbers(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            std::cin >> numbers[i][j];
        }
    }
}

void print(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            std::cout << numbers[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void func(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]) {
    bool hasEqualRows = false;

    // Сортиране на всички редове
    for (size_t i = 0; i < n; i++) {
        std::sort(numbers[i], numbers[i] + m);
    }

    // Сравняваме всички двойки редове
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            bool areEqual = true;
            for (size_t k = 0; k < m; k++) {
                if (numbers[i][k] != numbers[j][k]) {
                    areEqual = false;
                    break;
                }
            }
            if (areEqual) {
                std::cout << "Редовете " << i + 1 << " и " << j + 1 << " са еднакви.\n";
                hasEqualRows = true;
            }
        }
    }

    if (!hasEqualRows) {
        std::cout << "Няма редове с еднакви елементи.\n";
    }
}

int main() {
    size_t n, m;

    std::cout << "Въведете брой редове (n): ";
    std::cin >> n;
    std::cout << "Въведете брой колони (m): ";
    std::cin >> m;

    int array[MAX_SIZE][MAX_SIZE];

    std::cout << "Въведете елементите на матрицата:\n";
    readTheNumbers(n, m, array);

    std::cout << "Матрицата е:\n";
    print(n, m, array);

    std::cout << "\nРезултат:\n";
    func(n, m, array);

    return 0;
}

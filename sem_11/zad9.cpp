#include <iostream>
void findSubsets(int* set, int* subset, int size, int subsetSize, int index) {
    if (index == size) {
        std::cout << "{ ";
        for (int i = 0; i < subsetSize; ++i) {
            std::cout << subset[i] << " ";
        }
        std::cout << "}" << std::endl;
        return;
    }
    findSubsets(set, subset, size, subsetSize, index + 1);
    subset[subsetSize] = set[index];
    findSubsets(set, subset, size, subsetSize + 1, index + 1);
}

int main() {
    int size;
    std::cout << "Enter the size of the set: ";
    std::cin >> size;

    int* set = new int[size];
    std::cout << "Enter the elements of the set: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> set[i];
    }

    int* subset = new int[size];
    std::cout << "All subsets of the set are: " << std::endl;
    findSubsets(set, subset, size, 0, 0);

    delete[] set;
    delete[] subset;

    return 0;
}

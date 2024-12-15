#include <iostream>
void addElement(int*& array, int& currentSize, int newElement) {
    int* newArray = new int[currentSize + 1];
    for (int i = 0; i < currentSize; i++) {
        newArray[i] = array[i];
    }
    newArray[currentSize] = newElement;
    delete[] array;

    array = newArray;
    currentSize++;
}

void printArray(int* array, int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* array = nullptr; 
    int size = 0;      
    
    char choice;
    do {
        std::cout << "Enter a new element: ";
        int newElement;
        std::cin >> newElement;
        addElement(array, size, newElement);
        printArray(array, size);
        
        std::cout << "Do you want to add another element? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    delete[] array;
    
    return 0;
}
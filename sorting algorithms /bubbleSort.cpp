#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>  

template<typename Iterator>
void bubbleSort(Iterator begin, Iterator end) {
    bool swapped; 
    do {
        swapped = false; 
        for (auto it = begin; it != std::prev(end); ++it) {
            auto next_it = std::next(it); 
            if (*it > *next_it) {
                std::swap(*it, *next_it); 
                swapped = true; 
            }
        }
        --end; 
    } while (swapped); 
}

int main() {
    std::vector<int> container = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Unsorted array: ";
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    bubbleSort(std::begin(container), std::end(container));

    std::cout << "Sorted array: ";

    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main() {
    unsigned int buff;
    std::string word;
    std::cin >> buff >> word;
    unsigned int pivot = word.length()/2;
    unsigned int iteration = 0;
    for(;;) {
        for (unsigned int i = 0; i < word.length(); ++i) {
            if (((i < pivot) && (i < (pivot - iteration))) || ((i > pivot) && (i > (pivot + iteration)))) {
                std::cout << '*';
            }  else
            std::cout << word[i];
        }
        if ((pivot - iteration) == 0) {
            break;
        } else {
            ++iteration;
            std::cout << std::endl;
        }
    }
    return 0;
}

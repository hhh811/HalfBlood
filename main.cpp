#include <iostream>

#include "answer/answer.hpp"

int main(int args, const char *argv[]) {
    int expected_answer = answer::v1::find_the_ultimate_answer();
    for (;;) {
        std::cout << "What's the ultimate answer" << std::endl;
        int answer;
        std::cin >> answer;
        if (answer == expected_answer) {
            std::cout << "Correct!" << std::endl;
            break;
        }
    }
    
    return 0;
}
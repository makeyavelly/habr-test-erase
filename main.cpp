#include <iostream>
#include <vector>

#include "Object.hpp"

using Objects = std::vector<Object>;

void print(const Objects &objects) {
    std::cout << "Objects: ";
    for (const auto &object : objects) {
        std::cout << object << " ";
    }
    std::cout << std::endl;
}

int main() {
    constexpr int SIZE = 6;

    Objects objects;
    objects.reserve(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        objects.emplace_back(i);
    }

    print(objects);

    std::cout << "~~~ EraseBegin ~~~" << std::endl;
    objects.erase(objects.begin() + 3);
    std::cout << "~~~ EraseEnd ~~~" << std::endl;

    print(objects);

    return 0;
}

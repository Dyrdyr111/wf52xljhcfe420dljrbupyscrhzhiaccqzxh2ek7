#include <iostream>

int main() {
    int X, Y;

    std::cout << "Podaj wysokosc prostokata: ";
    std::cin >> X;
    std::cout << "Podaj szerokosc prostokata: ";
    std::cin >> Y;

    if (X <= 0 || Y <= 0) {
        std::cout << "Wysokosc i szerokosc musza byc dodatnie." << std::endl;
        return 1;
    }

    std::cout << "Prostokat pusty:" << std::endl;
    for (int i = 1; i <= X; i++) {
        for (int j = 1; j <= Y; j++) {
            if (i == 1 || i == X ||
                j == 1 || j == Y) {
                std::cout << "X";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "Prostokat pelny:" << std::endl;
    for (int i = 1; i <= X; i++) {
        for (int j = 1; j <= Y; j++) {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
}

#include <iostream>

int main(){
    std::cout << "Podaj 3 dlugosci boków trojkata, a program policzy obwod" << std::endl;
    std::cout << "oraz poda informacje czy trojkat jest ostrokatny, prostokatny lub rozwartokatny"  << std::endl;
    double a, b, c;
    std::cout << "Podaj dlugosc boku a: ";
    std::cin >> a;
    std::cout << "Podaj dlugosc boku b: ";
    std::cin >> b;
    std::cout << "Podaj dlugosc boku c: ";
    std::cin >> c;
    
    double obwod = a + b + c;
    std::cout << "Obwod trojkata wynosi: " << obwod << std::endl;
    std::cout << "Rodzaj trojkata: ";
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        std::cout << "prostokatny" << std::endl;
    } else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
        std::cout << "rozwartokatny" << std::endl;
    } else {
        std::cout << "ostrokatny" << std::endl;
    }


}
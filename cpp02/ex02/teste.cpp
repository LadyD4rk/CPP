#include <iostream>

class Ponto {
public:
    int x, y;

    // Construtor
    Ponto(int x, int y) : x(x), y(y) {}

    // Sobrecarga do operador '+' usando a palavra-chave 'operator'
    Ponto operator+(const Ponto& outro) {
        return Ponto(this->x + outro.x, this->y + outro.y);
    }
};

int main() {
    Ponto p1(2, 3);
    Ponto p2(4, 5);

    // Agora podemos usar o operador '+' diretamente entre objetos!
    Ponto p3 = p1 + p2; 

    std::cout << "Resultado: X=" << p3.x << ", Y=" << p3.y << "\n";
    return 0;
}
#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Getters e Setters
    int getB1() {
        return B1;
    }

    void setB1(int valor) {
        B1 = valor;
    }

    float getB2() {
        return B2;
    }

    void setB2(float valor) {
        B2 = valor;
    }

    // Métodos
    void MB1() {
        cout << "Método MB1 executado" << endl;
    }

    void MB2() {
        cout << "Método MB2 executado" << endl;
    }
};

int main() {

    return 0;
}
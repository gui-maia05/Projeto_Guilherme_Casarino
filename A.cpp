#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Getters e Setters
    int getA1() {
        return A1;
    }

    void setA1(int valor) {
        A1 = valor;
    }

    float getA2() {
        return A2;
    }

    void setA2(float valor) {
        A2 = valor;
    }

    // Métodos
    void MA1() {
        cout << "Método MA1 executado" << endl;
    }

    void MA2() {
        cout << "Método MA2 executado" << endl;
    }

    // Novo Método
    void MA3() {
        cout << "Alteracao a classe A partir do clone" << endl;
    }
};

int main() {

    return 0;
}

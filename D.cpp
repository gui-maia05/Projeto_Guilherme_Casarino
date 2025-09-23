#include <iostream>
using namespace std;

class D {
private:
    int D1;
    float D2;

public:
    // Getters e Setters
    int getD1() {
        return D1;
    }

    void setD1(int valor) {
        D1 = valor;
    }

    float getD2() {
        return D2;
    }

    void setD2(float valor) {
        D2 = valor;
    }

    // Métodos
    void MD1() {
        cout << "Método MD1 executado" << endl;
    }

    void MD2() {
        cout << "Método MD2 executado" << endl;
    }

    void MD4() {
        cout << "Método MD4 executado" << endl;
    }
};

int main() {

    return 0;
}

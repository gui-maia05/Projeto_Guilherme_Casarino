#include <iostream>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    // Getters e Setters
    string getC1() {
        return C1;
    }

    void setC1(string valor) {
        C1 = valor;
    }

    int getC2() {
        return C2;
    }

    void setC2(int valor) {
        C2 = valor;
    }

    // Métodos
    void MC1() {
        cout << "Método MC1 executado" << endl;
    }

    void MC2() {
        cout << "Método MC2 executado" << endl;
    }

    void MC3() {
        cout << "Método MC3 executado" << endl;
    }
};

int main() {

    return 0;
}
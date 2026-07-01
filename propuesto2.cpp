#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string dni;
    int edad;
};

int main() {
    int n;
    Persona personas[100];

    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    cin.ignore();

    return 0;
}
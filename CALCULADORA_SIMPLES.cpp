#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    int opcao;

    // Entrada de dados
    cout << "=== Calculadora Simples ===" << endl;
    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    // Menu de opções
    cout << "\nEscolha uma operacao:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cout << "4. Divisao" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    // Estrutura switch para executar a operação
    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            cout << "\nResultado da soma: " << resultado << endl;
            break;

        case 2:
            resultado = num1 - num2;
            cout << "\nResultado da subtracao: " << resultado << endl;
            break;

        case 3:
            resultado = num1 * num2;
            cout << "\nResultado da multiplicacao: " << resultado << endl;
            break;

        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "\nResultado da divisao: " << resultado << endl;
            } else {
                cout << "\nErro: divisao por zero nao permitida!" << endl;
            }
            break;

        default:
            cout << "\nOpcao invalida!" << endl;
    }

    return 0;
}_
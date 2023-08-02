#include <iostream>
#include <stdio.h>
#include "Conta.cpp"

using namespace std;

int main()
{
    Conta c1;

    double valordepositado;
    cout << "Digite um valor a ser depositado: " << endl ;
    cin >> valordepositado;

    c1.depositar(valordepositado);
    cout << c1.consultarSaldo();
    c1.retirar(valordepositado);
    c1.zerarSaldo();

    return 0;
}
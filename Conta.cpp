#include <iostream>
#include <stdio.h>

using namespace std;

class Conta
{
    public:
        void zerarSaldo()
        {
             saldo = 0;
        }
        void depositar(double valor)
        {
            saldo += valor;
        }
        void retirar(double valor)
        {
            saldo -= valor;
        }
        double consultarSaldo()
        {
            return saldo;
        }
    private :
        double saldo;
};
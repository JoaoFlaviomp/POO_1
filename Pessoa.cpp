#include <iostream>
#include <stdio.h>
#include "math.h"

using namespace std;

class Pessoa
{
	public: 
		char nome[100];
		void setIdade(int valor)
		{
			idade = valor;
		}
		void setPeso(double valor)
		{
			peso = valor;
		}
		void setAltura(double valor)
		{
			altura = valor;
		}
		int getIdade()
		{
			return idade;
		}
		double getPeso()
		{
			return peso;
		}
		double getAltura()
		{
			return altura;
		}
		void imprimirDados()
		{
			cout << "Idade: " << getIdade() << endl;
			cout << "Peso: " << getPeso() << endl;
			cout << "Altura: " << getAltura() << endl;
		}
		double retorna_IMC()
		{
			double imc = getPeso() / (pow(getAltura(), 2));
			return imc;
		}

	private:
		int idade;
		double peso;
		double altura;

};

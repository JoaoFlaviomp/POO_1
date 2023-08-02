#include <iostream>
#include "Pessoa.cpp"

using namespace std;

int main()
{
	Pessoa p1, p2;
	char nome[100];
	int idade;
	double peso, altura;

	cout << "Digite um nome" << endl;
	gets(nome);
	cout << "Digite uma idade" << endl;
	cin >> idade;
	cout << "Digite o peso" << endl;
	cin >> peso;
	cout << "Digite a altura" << endl;
	cin >> altura;

	p1.setIdade(idade);
	p1.setPeso(peso);
	p1.setAltura(altura);
	p1.imprimirDados();

	fflush(stdin);

	cout << "Digite um nome" << endl;
	gets(nome);
	cout << "Digite uma idade" << endl;
	cin >> idade;
	cout << "Digite o peso" << endl;
	cin >> peso;
	cout << "Digite a altura" << endl;
	cin >> altura;

	p2.setIdade(idade);
	p2.setPeso(peso);
	p2.setAltura(altura);
	p2.imprimirDados();

	int valor1 = p1.getIdade();
	int valor2 = p2.getIdade();

	cout << "A pessoa mais velha eh: " << endl;

	if (valor1 > valor2)
	{
		p1.imprimirDados();
	}
	else
	{
		p2.imprimirDados();
	}

	cout << "O IMC da pessoa A eh: " << p1.retorna_IMC() << endl;
	cout << "O IMC da pessoa b eh: " << p2.retorna_IMC() << endl;

	return 0;
}
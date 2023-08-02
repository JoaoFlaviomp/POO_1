#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class String
{
public:
	void digitaString()
	{
		cout << "Digite sua string: ";
		cin.getline(str,100);
	}

	char* imprimeString()
	{
		return str;
	}

	int comprimento()
	{
		int tam;
		//int i;
		str[strcspn(str, "\n")] = 0;
		while (str[tam] !='\0')
		{
			//i++;
			tam++;
		}
		return tam;
	}

private:
	char str[100];

};

int main() {
	String s;
	s.digitaString();
	cout << "String: " << s.imprimeString() << endl;
	printf("%s possui %d caracteres.\n", s.imprimeString(), s.comprimento());
	return 0;
}
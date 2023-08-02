#include<iostream>
#include<stdio.h>
#include<string.h>
#include "String.cpp"

using namespace std;

int main() 
{
	String s;
	s.digitaString();
	cout << "String: " << s.imprimeString() << "\n";
	printf("%s possui %d caracteres.\n", s.imprimeString(), s.comprimento());
	return 0;
}
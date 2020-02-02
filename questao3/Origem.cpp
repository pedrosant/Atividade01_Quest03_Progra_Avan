#include<iostream>

using namespace std;

int main() {
	float numerador = 2;
	float denominador = 50;
	float potencia = 1;
	float total = 0;
	float r = 0;

	for (int i = 50; i > 0; i--) {
		r = pow(numerador, potencia);
		total += (r / denominador);
		potencia++;
		denominador--;
	}

	cout << "Resutado: " << total <<::endl;
	system("pause");
	return 0;
}


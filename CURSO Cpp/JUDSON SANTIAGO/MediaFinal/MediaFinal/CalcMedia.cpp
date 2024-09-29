#include <iostream>
using namespace std;

int main() {

	float n1, n2, n3, n4, media;

	cout << "Calculando a média" << endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Nota 3: ";
	cin >> n3;
	cout << endl;
	media = (n1 + n2 + n3) / 3;

	if (media >= 7) {
		cout << "A média das notas: " << media;
		cout << endl;
	}
	else cout << "Nota 4: "; cin >> n4;


	

	if (media < 7) {

		if (n1 >= n2 && n1 >= n3) {

			if (n2 >= n3) {
			media = (n1 + n2 + n4) / 3;
			cout << "Media Final: " << media;
			} else media = (n1 + n3 + n4) / 3; cout << "Media Final: " << media;
		}

	}
	else if (n2 >= n1 && n2 >= n3) {
		if (n1 >= n3) {
			media = (n1 + n2 + n4) / 3;
			cout << "Media Final: " << media;
		}
		else media = (n1 + n2 + n4) / 3; cout << "Media Final: " << media;
	}
	else{
		
		if (n1 >= n2) {
			media = (n1 + n3 + n4) / 3;
			cout << "Media Final: " << media;
		}
		else media = (n3 + n2 + n4) / 3; cout << "Media Final: " << media;
		
	}


	return 0;
}
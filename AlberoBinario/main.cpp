#include"Albero.h"
#include"Albero.cpp"

int main() {
	Albero<int> Natale;
	int x;
	for (int i = 0; i < 5; i++) {
		cout << "Numerino: ";
		cin >> x;
		Natale.InserisciRicorsivo(x);
	}
	Natale.Preorder();
	cout << Natale.ContaNodi();
	cout << endl;
	cout << Natale.ContaNodiFoglia();
	system("PAUSE");
	return 0;
}

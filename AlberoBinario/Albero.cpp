#include "Albero.h"
using namespace std;

template <class tipo>
Albero<tipo>::Albero() {
	T = nullptr;
}

template <class tipo>
void Albero<tipo>::Preorder(NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		cout << T->GetInfo()<<endl;
		Preorder(T->GetLeftLink());
		Preorder(T->GetRightLink());
	}
}

template <class tipo>
void Albero<tipo>::Inorder(NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		Preorder(T->GetLeftLink());
		cout << T->GetInfo() << endl;
		Preorder(T->GetRightLink());
	}
}

template <class tipo>
void Albero<tipo>::Postorder(NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		Preorder(T->GetLeftLink());
		Preorder(T->GetRightLink());
		cout << T->GetInfo() << endl;
	}
}

template <class tipo>
void Albero<tipo>::Preorder() {
	Preorder(T);
}

template <class tipo>
void Albero<tipo>::Inorder() {
	Inorder(T);
}

template <class tipo>
void Albero<tipo>::Postorder() {
	Postorder(T);
}

template <class tipo>
void Albero<tipo>::InserisciIterativo(tipo x) {
	NodoAlbero<tipo>* q = T;
	while (q != nullptr) {
		if (x > q->GetInfo()) {
			q = q->GetRightLink();
		}
		else {
			q = q->GetLeftLink();
		}
	}
	T = new NodoAlbero<tipo>(x);
}

template <class tipo>
NodoAlbero<tipo>* Albero<tipo>::InserisciRicorsivo(tipo x, NodoAlbero<tipo>* q){
	if (q == 0){
		q = new NodoAlbero<tipo>(x);
	}
	else{
		if(x > q->GetInfo()){
			q->SetRightLink(InserisciRicorsivo(x, q->GetRightLink()));
		}
		else{
			q->SetLeftLink(InserisciRicorsivo(x, q->GetLeftLink()));
		}
	}
	return q;
}

template <class tipo>
void Albero<tipo>::InserisciRicorsivo(tipo x){
	T = InserisciRicorsivo(x, T);
}

template <class tipo>
int Albero<tipo>::ContaNodi() {
	int nNodi = 0;
	ContaNodi(nNodi, T);
	return nNodi;
}

template <class tipo>
int Albero<tipo>::ContaNodi(int &nNodi, NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		nNodi++;
		ContaNodi(nNodi, T->GetLeftLink());
		ContaNodi(nNodi, T->GetRightLink());
		return nNodi;
	}
}

template <class tipo>
int Albero<tipo>::ContaNodiFoglia() {
	int nNodiFoglia = 0;
	ContaNodiFoglia(nNodiFoglia, T);
	return nNodiFoglia;
}

template <class tipo>
int Albero<tipo>::ContaNodiFoglia(int &nNodiFoglia, NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		ContaNodiFoglia(nNodiFoglia, T->GetLeftLink());
		ContaNodiFoglia(nNodiFoglia, T->GetRightLink());
	}
	if (T == nullptr) {
		nNodiFoglia++;
	}
	return nNodiFoglia;
}

template <class tipo>
Albero<tipo>::~Albero() {}

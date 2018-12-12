#include "Albero.h"


template <class tipo>
Albero<tipo>::Albero() {
	T = nullptr;
}

template <class tipo>
void Albero<tipo>::Preorder(NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		cout << T->GetInfo();
		Preorder(T->GetLeftLink());
		Preorder(T->GetRightLink());
	}
}

template <class tipo>
void Albero<tipo>::Inorder(NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		Preorder(T->GetLeftLink());
		cout << T->GetInfo();
		Preorder(T->GetRightLink());
	}
}

template <class tipo>
void Albero<tipo>::Postorder(NodoAlbero<tipo>* T) {
	if (T != nullptr) {
		Preorder(T->GetLeftLink());
		Preorder(T->GetRightLink());
		cout << T->GetInfo();
	}
}

template <class tipo>
void Albero<tipo>::InserimentoIterativo(tipo x) {
	NodoAlbero<tipo>* q = T;
	while (T != nullptr) {
		if (x > q->GetInfo()) {
			q = q->GetRightLink();
		}
		else {
			q = q->GetLeftLink();
		}
	}
	NodoAlbero temp = new NodoAlbero(x);
	if (x > q->GetInfo()) {
		q->SetRightLink(temp);
		q = q->GetRightLink();
	}
	else {
		q->SetLeftLink(temp);
		q = q->GetLeftLink();
	}
	q->SetInfo(x);
}

template <class tipo>
void Albero<tipo>::InserisciRicorsivo(tipo x, NodoAlbero<tipo>* T){
	if (T == 0){
		T = new NodoAlbero<tipo>(x);
	}
	else{
		if(x > T->getInfo()){
			InserisciRicorsivo(x, T->getRightLink());
		}
		else{
			InserisciRicorsivo(x, T->getLeftLink());
		}
	}
}

template <class tipo>
void Albero<tipo>::InserisciRicorsivoPublic(tipo x){
	InserisciRicorsivo(x, T);
}
template <class tipo>
Albero<tipo>::~Albero() {}

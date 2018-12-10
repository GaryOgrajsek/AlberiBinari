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
Albero<tipo>::~Albero() {}

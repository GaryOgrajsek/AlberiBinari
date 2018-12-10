#include "NodoAlbero.h"

template <class tipo>
NodoAlbero<tipo>::NodoAlbero(){}

template <class tipo>
tipo NodoAlbero<tipo>::GetInfo() {
	return info;
}

template <class tipo>
NodoAlbero<tipo>* NodoAlbero<tipo>::GetLeftLink() {
	return leftLink;
}

template <class tipo>
NodoAlbero<tipo>* NodoAlbero<tipo>::GetRightLink() {
	return rightLink;
}

template <class tipo>
void NodoAlbero<tipo>::SetInfo(tipo x) {
	info = x;
}

template <class tipo>
void NodoAlbero<tipo>::SetLeftLink(NodoAlbero<tipo>* x) {
	leftLink = x;
}

template <class tipo>
void NodoAlbero<tipo>::SetRightLink(NodoAlbero<tipo>* x) {
	rightLink = x;
}

template <class tipo>
NodoAlbero<tipo>::~NodoAlbero(){}

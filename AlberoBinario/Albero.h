#pragma once
#include "NodoAlbero.h"
#include "NodoAlbero.cpp"
#include<iostream>
template <class tipo>
class Albero{
private:
	NodoAlbero<tipo>* T;
	NodoAlbero<tipo>* InserisciRicorsivo(tipo, NodoAlbero<tipo>*);
	void Preorder(NodoAlbero<tipo>*);
	void Inorder(NodoAlbero<tipo>*);
	void Postorder(NodoAlbero<tipo>*);
	int ContaNodi(int&, NodoAlbero<tipo>*);
	int ContaNodiFoglia(int&, NodoAlbero<tipo>*);
	//sovrapposizione =

public:
	Albero();
	void Preorder();
	void Inorder();
	void Postorder();
	void InserisciIterativo(tipo);
	void InserisciRicorsivo(tipo);
	int ContaNodi();
	int ContaNodiFoglia();
	~Albero();
};


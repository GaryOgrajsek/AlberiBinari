#pragma once
#include "NodoAlbero.h"
#include<iostream>
template <class tipo>
class Albero{
private:
	NodoAlbero<tipo>* T;

public:
	Albero();
	void Preorder(NodoAlbero<tipo>*);
	void Inorder(NodoAlbero<tipo>*);
	void Postorder(NodoAlbero<tipo>*);
	void InserimentoIterativo(tipo);
	void InserimentoRicorsivo(tipo);
	~Albero();
};


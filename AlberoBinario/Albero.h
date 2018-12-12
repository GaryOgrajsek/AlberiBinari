#pragma once
#include "NodoAlbero.h"
#include<iostream>
template <class tipo>
class Albero{
private:
	NodoAlbero<tipo>* T;
	void InserimentoRicorsivo(tipo, NodoAlbero<tipo>*);

public:
	Albero();
	void Preorder(NodoAlbero<tipo>*);
	void Inorder(NodoAlbero<tipo>*);
	void Postorder(NodoAlbero<tipo>*);
	void InserimentoIterativo(tipo);
	void InserimentoRicorsivoPublic(tipo);
	~Albero();
};


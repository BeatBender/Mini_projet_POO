#pragma once
#ifndef JOUEUR_H_
#define JOUEUR_H_
#include <string>
#include "Parcours.h"
#include <vector>

using namespace std;

class Joueur
{
private:
	//Variables Joueur
	string nom;
	string prenom;
	float taille;
	float poids;
	string villeNaissance;
	vector<Parcours> vect_parcours;


public:
	//Constructeurs
	Joueur(void);
	Joueur(string,string,float,float,string);

	//Gestion des parcours
	void ajoutParcours(Parcours);


	//Accesseurs GET
	string getNom();
	string getPrenom();
	float getTaille();
	float getPoids();
	string getVilleNaissance();

};

#endif
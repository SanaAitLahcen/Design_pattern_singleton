#include "singleton.h"

//déclaration des attributs static
int singleton::compt = 0;
singleton* singleton::instance = nullptr;



singleton::singleton()
{
	this->compt++;
	this->id = 0;
	this->libelle = "";
}


singleton::singleton(int id, string str)
{
	this->id = compt;
	this->libelle = str;
}



singleton& singleton::operator=(const singleton& U) //const: valeur non modifiable
{
	if (this != &U)
	{  
		// Vérification de l'auto-affectation
		this->id = U.id;
		this->libelle = U.libelle;

	}
	return *this;  // Retourner l'objet courant
}




singleton& singleton::createur()
{
	if (!instance)
	{
		instance = new singleton();
	}
	return *instance; //accéder a l'objet reel (instance juste l'adresse ou se trouve objet)
}




singleton::~singleton()
{
	if (instance)
		delete instance;

}

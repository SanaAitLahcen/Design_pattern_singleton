#include "singleton.h"
#include<iostream>
using namespace std;



int main()
{

	//ona utiliser fct static createur pour n'utilise pas l'objet qui si vous etes l'utiliser il est privé on ne peut pas le créer
	singleton& P = singleton::createur(); //crée une seule instance 
	singleton& P2 = singleton::createur();//le meme objet

}

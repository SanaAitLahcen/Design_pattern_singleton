#include "singleton.h"
#include<iostream>
using namespace std;



int main()
{

	//ona utiliser fct static createur pour n'utilise pas l'objet qui si vous etes l'utiliser il est priv� on ne peut pas le cr�er
	singleton& P = singleton::createur(); //cr�e une seule instance 
	singleton& P2 = singleton::createur();//le meme objet

}

#pragma once
#include<string>
using namespace std;

class singleton
{
private:
	static singleton* instance;
	static int compt;
	int id;
	string libelle;
	singleton();
	singleton(int, string);
	singleton& operator=(const singleton& U);
	singleton(const singleton&) = delete;

public:

	static singleton& createur();
	~singleton();
};


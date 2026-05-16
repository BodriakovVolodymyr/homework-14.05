#pragma once
#include <string>
#include <iostream>
#include <list>
using namespace std;
class Taxi
{
	string num;
	string brand;
	string name;
	bool free;
public:
	Taxi();
	Taxi(string num, string brand,string name,bool free);
	~Taxi();

	void setNum(string num);
	void setBrand(string brand);
	void setName(string name);
	void setFree(bool free);

	string getNum()const;
	string getBrand()const;
	string getName()const;
	bool getFree()const;

	void show();
};


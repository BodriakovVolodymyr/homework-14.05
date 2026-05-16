#pragma once
#include"Taxi.h"
class TaxiList
{
	list<Taxi>taxis;
public:
	void showAll();
	void addFront();
	void insertBeforeTaxi();
	void deleteTaxi();
	void setOnCall();
	void setFreeTaxi();
	void showFree();
	void showBusy();
};


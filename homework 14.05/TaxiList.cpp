#include "TaxiList.h"

void TaxiList::pushBack(Taxi t)
{
	taxis.push_back(t);
}

void TaxiList::showAll()
{
	for (Taxi t : taxis)

	{
		t.show();
		cout << endl;
	}
}

void TaxiList::addFront()
{
	string num, brand, name;
	bool free;
	cout << "Enter taxi number: ";
	cin >> num;
	cout << "Enter brand: ";
	cin >> brand;
	cin.ignore();
	cout << "Enter driver name: ";
	getline(cin, name);
	cout << "Free? (1/0): ";
	cin >> free;
	taxis.push_front(Taxi(num, brand, name, free));
}

void TaxiList::insertBeforeTaxi()
{
	string user;

	cout << "Enter taxi number BEFORE which add new taxi: ";
	cin >> user;
	for (auto p = taxis.begin(); p != taxis.end(); p++)
	{
		if (p->getNum() == user)
		{
			string num, brand, name;
			bool free;

			cout << "Enter new taxi number: ";
			cin >> num;

			cout << "Enter brand: ";
			cin >> brand;

			cin.ignore();

			cout << "Enter driver name: ";
			getline(cin, name);

			cout << "Free? (1/0): ";
			cin >> free;

			taxis.insert(p, Taxi(num, brand, name, free));

			return;
		}
	}

	cout << "Taxi not found\n";
}

void TaxiList::deleteTaxi()
{
	string num;

	cout << "Enter taxi number to delete: ";
	cin >> num;
	for (auto p = taxis.begin(); p != taxis.end(); p++)
	{
		if (p->getNum() == num)
		{
			taxis.erase(p);

			cout << "Taxi deleted\n";

			return;
		}
	}

	cout << "Taxi not found\n";
}

void TaxiList::setOnCall()
{
	string num;

	cout << "Enter taxi number: ";
	cin >> num;

	for (auto& t : taxis)
	{
		if (t.getNum() == num)
		{
			t.setFree(false);

			cout << "Taxi is ON CALL now\n";

			return;
		}
	}

	cout << "Taxi not found\n";
}

void TaxiList::setFreeTaxi()
{
	string num;

	cout << "Enter taxi number: ";
	cin >> num;

	for (auto& t : taxis)
	{
		if (t.getNum() == num)
		{
			t.setFree(true);

			cout << "Taxi is FREE now\n";

			return;
		}
	}

	cout << "Taxi not found\n";
}

void TaxiList::showFree()
{
	for (Taxi t : taxis)
	{
		if (t.getFree())
		{
			t.show();
		}
	}
}

void TaxiList::showBusy()
{
	for (Taxi t : taxis)
	{
		if (!t.getFree())
		{
			t.show();
		}
	}
}

#include "Taxi.h"

Taxi::Taxi()
{
    num = "No info";
    brand = "No info";
    name = "No info";
    free = false;
}

Taxi::Taxi(string num, string brand, string name, bool free)
{
    this->num = num;
    this->brand = brand;
    this->name = name;
    this->free = free;
}

Taxi::~Taxi()
{
}

void Taxi::setNum(string num)
{
    this->num = num;
}

void Taxi::setBrand(string brand)
{
    this->brand = brand;
}

void Taxi::setName(string name)
{
    this->name = name;
}

void Taxi::setFree(bool free)
{
    this->free = free;
}

string Taxi::getNum() const
{
    return num;
}

string Taxi::getBrand() const
{
    return brand;
}

string Taxi::getName() const
{
    return name;
}

bool Taxi::getFree() const
{
    return free;
}

void Taxi::show()
{
    cout << "Taxi number: " << num << endl;
    cout << "Brand: " << brand << endl;
    cout << "Driver name: " << name << endl;
    if (free)
    {
        cout << "Status: FREE" << endl;
    }
    else
    {
        cout << "Status: ON CALL" << endl;
    }
}

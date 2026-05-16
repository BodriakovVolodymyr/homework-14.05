#include "Taxi.h"
#include "TaxiList.h"

int main()
{
    TaxiList t1;

    t1.pushBack(Taxi("AA1111AA", "Toyota", "Ivanov I.I.", true));
    t1.pushBack(Taxi("BB2222BB", "BMW", "Petrov P.P.", false));
    
    t1.showAll();
    t1.addFront();
    t1.insertBeforeTaxi();
    t1.deleteTaxi();
    t1.setOnCall();
    t1.setFreeTaxi();
    t1.showFree();
    t1.showBusy();
  
}


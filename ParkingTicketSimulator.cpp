#include "stdafx.h"
#include <string>
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

int main()
{	
	PoliceOfficer a("Raine L.", 777);
	ParkedCar b("Honda", "Civic" , "Steel" , "xxxxxx", 16);
	ParkingMeter c(120);
	cout << "\nAmount of minutes paid: " << c.getPaidMinutes() << endl;
	a.issueTicket(b, c);

	ParkedCar e("Honda", "Accord", "Green", "oooooo", 90);
	PoliceOfficer f("Faythe R.", 999);
	ParkingMeter g(60);
	cout << "\nAmount of minutes paid: " << c.getPaidMinutes() << endl;
	f.issueTicket(e, g);
}


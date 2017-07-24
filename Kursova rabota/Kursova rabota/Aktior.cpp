#include<iostream>

using namespace std;

#include "FILMI.h"
#include "KOMEDIQ.h"
#include "AKTIOR.h"

AKTIOR::AKTIOR( void )
{
	Ime = new char[ 5];
	strcpy( Ime, "None");
}

AKTIOR::AKTIOR(char *aName, char *aJanr, char*aIme)
			: KOMEDIQ( aName, aJanr )
{
	Ime = new char[ strlen( aIme ) + 1 ];
	strcpy( Ime, aIme );
}

void AKTIOR :: Display( void )
{
	KOMEDIQ::Display();
	cout << "Imeto na aktiora e: " << Ime << endl;
}

char *AKTIOR::getClassName(void)
{
	cout<<endl;
	return "AKTIOR";
}

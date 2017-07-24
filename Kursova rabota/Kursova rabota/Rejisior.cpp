#include<iostream>

using namespace std;

#include "FILMI.h"
#include "EKSHYN.h"
#include "REJISIOR.h"

REJISIOR::REJISIOR( void )
{
	Ime = new char[ 5];
	strcpy( Ime, "None");
}

REJISIOR::REJISIOR(char *aName, char *aJanr, char*aIme)
			: EKSHYN( aName, aJanr )
{
	Ime = new char[ strlen( aIme ) + 1 ];
	strcpy( Ime, aIme );
}

void REJISIOR :: Display( void )
{
	EKSHYN::Display();
	cout << "Imeto na rejisiora e: " << Ime << endl;
}

char *REJISIOR::getClassName(void)
{
	cout<<endl;
	return "REJISIOR";
}

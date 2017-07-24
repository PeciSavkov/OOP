#include<iostream>

using namespace std;

#include "MSD.h"
#include "VYNSOR.h"

VYNSOR :: VYNSOR( void )
{
	Ime = new char[ 5];
	strcpy( Ime, "None");
}

VYNSOR :: VYNSOR( char *aVid, char *aIme ) : MSD( aVid )
{
	Ime= new char[ strlen(aIme)+ 1];
	strcpy( Ime, aIme );
}

VYNSOR :: VYNSOR( VYNSOR& aVYNSOR )
{
	setIme( aVYNSOR.getIme());
	Ime = new char[ strlen(aVYNSOR.Ime ) + 1 ];
	strcpy( Ime, aVYNSOR.Ime );
}

char* VYNSOR :: getIme( void )
{
	return Ime;
}

void VYNSOR :: setIme( char *aName )
{
	Ime = new char[ strlen( aName ) + 1 ];
	strcpy(Ime, aName);
}

void VYNSOR :: Display( void )
{
	MSD :: Display();
	cout << "Ime na sortirovka: "<< Ime <<endl;
}

char *VYNSOR::getClassName(void)
{
	cout<<endl;
	return "Vynshna sortirovka";
}

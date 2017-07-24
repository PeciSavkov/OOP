#include<iostream>

using namespace std;

#include "MSD.h"
#include "VYTSOR.h"

VYTSOR :: VYTSOR( void )
{
	Ime = new char[ 5];
	strcpy( Ime, "None");
}

VYTSOR :: VYTSOR( char *aVid, char *aIme ) : MSD( aVid )
{
	Ime= new char[ strlen(aIme)+ 1];
	strcpy( Ime, aIme );
}

VYTSOR :: VYTSOR( VYTSOR& aVYTSOR )
{
	setIme( aVYTSOR.getIme());
	Ime = new char[ strlen(aVYTSOR.Ime ) + 1 ];
	strcpy( Ime, aVYTSOR.Ime );
}

char* VYTSOR :: getIme( void )
{
	return Ime;
}

void VYTSOR :: setIme( char *aName )
{
	Ime = new char[ strlen( aName ) + 1 ];
	strcpy(Ime, aName);
}

void VYTSOR :: Display( void )
{
	MSD :: Display();
	cout << "Ime na sortirovka: "<< Ime <<endl;
}

char *VYTSOR::getClassName(void)
{
	cout<<endl;
	return "Vytreshna sortirovka";
}

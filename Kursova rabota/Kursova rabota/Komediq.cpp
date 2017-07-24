#include<iostream>

using namespace std;

#include "FILMI.h"
#include "KOMEDIQ.h"

KOMEDIQ :: KOMEDIQ( void )
{
	Janr = new char[ 5];
	strcpy( Janr, "None");
}

KOMEDIQ :: KOMEDIQ( char *aName, char *aJanr ) : FILMI( aName )
{
	Janr= new char[ strlen(aJanr)+ 1];
	strcpy( Janr, aJanr );
}

KOMEDIQ :: KOMEDIQ( KOMEDIQ& aKOMEDIQ )
{
	setName( aKOMEDIQ.getName());
	Janr = new char[ strlen(aKOMEDIQ.Janr ) + 1 ];
	strcpy( Janr, aKOMEDIQ.Janr );
}

char* KOMEDIQ :: getJanr( void )
{
	return Janr;
}

void KOMEDIQ :: setJanr( char *aName )
{
	Janr = new char[ strlen( aName ) + 1 ];
	strcpy(Janr, aName);
}

void KOMEDIQ :: Display( void )
{
	FILMI::Display();
	cout << "Janr na filma: "<< Janr <<endl;
}

char *KOMEDIQ::getClassName(void)
{
	cout<<endl;
	return "KOMEDIQ";
}

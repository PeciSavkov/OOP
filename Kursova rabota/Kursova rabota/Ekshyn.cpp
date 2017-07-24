#include<iostream>

using namespace std;

#include "FILMI.h"
#include "EKSHYN.h"

EKSHYN :: EKSHYN( void )
{
	Janr = new char[ 5];
	strcpy( Janr, "None");
}

EKSHYN :: EKSHYN( char *aName, char *aJanr ) : FILMI( aName )
{
	Janr= new char[ strlen(aJanr)+ 1];
	strcpy( Janr, aJanr );
}

EKSHYN :: EKSHYN( EKSHYN& aEKSHYN )
{
	setName( aEKSHYN.getName());
	Janr = new char[ strlen(aEKSHYN.Janr ) + 1 ];
	strcpy( Janr, aEKSHYN.Janr );
}

char* EKSHYN :: getJanr( void )
{
	return Janr;
}

void EKSHYN :: setJanr( char *aName )
{
	Janr = new char[ strlen( aName ) + 1 ];
	strcpy(Janr, aName);
}

void EKSHYN :: Display( void )
{
	FILMI::Display();
	cout << "Janr na filma: "<< Janr <<endl;
}

char *EKSHYN::getClassName(void)
{
	cout<<endl;
	return "EKSHYN";
}

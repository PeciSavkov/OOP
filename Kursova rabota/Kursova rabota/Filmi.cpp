#include<iostream>

using namespace std;

#include "FILMI.h"

FILMI :: FILMI( void )
{
	Name = new char[ 5];
	strcpy( Name, "None");
}

FILMI :: FILMI( char *aName )
{
	Name = new char[ strlen( aName ) + 1 ];
	strcpy( Name, aName );
}

FILMI :: FILMI( FILMI& aFILMI)
{
	Name = new char[ strlen( aFILMI.Name ) + 1 ];
	strcpy( Name, aFILMI.Name );
}

char* FILMI :: getName( void )
{
	return Name;
}

void FILMI :: setName( char *aName )
{
	Name = new char[ strlen( aName ) + 1 ];
	strcpy( Name, aName );
}

void FILMI :: Display( void )
{
	cout << "Imeto na filma e: "<< Name << endl;
}

char *FILMI::getClassName(void)
{
	cout<<endl;
	return "FILMI";
}
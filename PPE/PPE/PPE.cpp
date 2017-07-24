#include<iostream>

using namespace std;

#include "PPE.h"

PPE :: PPE( void )
{
	Name = new char[ 5];
	strcpy( Name, "None");
}

PPE :: PPE( char *aName )
{
	Name = new char[ strlen( aName ) + 1 ];
	strcpy( Name, aName );
}

PPE :: PPE( PPE& aPPE)
{
	Name = new char[ strlen( aPPE.Name ) + 1 ];
	strcpy( Name, aPPE.Name );
}

char* PPE :: getName( void )
{
	return Name;
}

void PPE :: setName( char *aName )
{
	Name = new char[ strlen( aName ) + 1 ];
	strcpy( Name, aName );
}

void PPE :: Display( void )
{
	cout << "Poluprovodnikov element: "<< Name << endl;
}

char *PPE::getClassName(void)
{
	return "PPE";
}
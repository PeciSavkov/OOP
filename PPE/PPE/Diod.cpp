#include<iostream>

using namespace std;

#include "PPE.h"
#include "DIOD.h"

DIOD :: DIOD( void )
{
	Vid = new char[ 5];
	strcpy( Vid, "None");
}

DIOD :: DIOD( char *aName, char *aVid ) : PPE( aName )
{
	Vid= new char[ strlen(aVid)+ 1];
	strcpy( Vid, aVid );
}

DIOD :: DIOD( DIOD& aDIOD )
{
	setName( aDIOD.getName());
	Vid = new char[ strlen(aDIOD.Vid ) + 1 ];
	strcpy( Vid, aDIOD.Vid );
}

char* DIOD :: getVid( void )
{
	return Vid;
}

void DIOD :: setVid( char *aName )
{
	Vid = new char[ strlen( aName ) + 1 ];
	strcpy(Vid, aName);
}

void DIOD :: Display( void )
{
	PPE::Display();
	cout << "Vid na dioda: "<< Vid <<endl;
}

char *DIOD::getClassName(void)
{
	return "DIOD";
}

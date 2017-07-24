#include<iostream>

using namespace std;

#include "PPE.h"
#include "TRA.h"

TRA :: TRA( void )
{
	Vid = new char[ 5];
	strcpy( Vid, "None");
}

TRA :: TRA( char *aName, char *aVid ) : PPE( aName )
{
	Vid= new char[ strlen(aVid)+ 1];
	strcpy( Vid, aVid );
}

TRA :: TRA( TRA& aTRA )
{
	setName( aTRA.getName());
	Vid = new char[ strlen(aTRA.Vid ) + 1 ];
	strcpy( Vid, aTRA.Vid );
}

char* TRA :: getVid( void )
{
	return Vid;
}

void TRA :: setVid( char *aName )
{
	Vid = new char[ strlen( aName ) + 1 ];
	strcpy(Vid, aName);
}

void TRA :: Display( void )
{
	PPE::Display();
	cout << "Vid na tranzistora: "<< Vid <<endl;
}

char *TRA::getClassName(void)
{
	return "TRA";
}

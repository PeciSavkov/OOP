#include<iostream>

using namespace std;

#include "PPE.h"
#include "TIR.h"

TIR :: TIR( void )
{
	Vid = new char[ 5];
	strcpy( Vid, "None");
}

TIR :: TIR( char *aName, char *aVid ) : PPE( aName )
{
	Vid= new char[ strlen(aVid)+ 1];
	strcpy( Vid, aVid );
}

TIR :: TIR( TIR& aTIR )
{
	setName( aTIR.getName());
	Vid = new char[ strlen(aTIR.Vid ) + 1 ];
	strcpy( Vid, aTIR.Vid );
}

char* TIR :: getVid( void )
{
	return Vid;
}

void TIR :: setVid( char *aName )
{
	Vid = new char[ strlen( aName ) + 1 ];
	strcpy(Vid, aName);
}

void TIR :: Display( void )
{
	PPE::Display();
	cout << "Vid na tiristora: "<< Vid <<endl;
}

char *TIR::getClassName(void)
{
	return "TIR";
}

#include<iostream>

using namespace std;

#include "PPE.h"
#include "TIR.h"
#include "MODELTI.h"

MODELTI::MODELTI( void )
{
	Model = new char[ 5];
	strcpy( Model, "None");
}

MODELTI::MODELTI(char *aName, char *aVid, char*aModel)
			: TIR( aName, aVid )
{
	Model = new char[ strlen( aModel ) + 1 ];
	strcpy( Model, aModel );
}

void MODELTI :: Display( void )
{
	TIR::Display();
	cout << "Modelat na tranzistora e: " << Model << endl;
}

char *MODELTI::getClassName(void)
{
	return "MODELTI";
}

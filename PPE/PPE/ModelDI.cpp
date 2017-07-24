#include<iostream>

using namespace std;

#include "PPE.h"
#include "DIOD.h"
#include "MODELDI.h"

MODELDI::MODELDI( void )
{
	Model = new char[ 5];
	strcpy( Model, "None");
}

MODELDI::MODELDI(char *aName, char *aVid, char*aModel)
			: DIOD( aName, aVid )
{
	Model = new char[ strlen( aModel ) + 1 ];
	strcpy( Model, aModel );
}

void MODELDI :: Display( void )
{
	DIOD::Display();
	cout << "Modelat na dioda e: " << Model << endl;
}

char *MODELDI::getClassName(void)
{
	return "MODELDI";
}

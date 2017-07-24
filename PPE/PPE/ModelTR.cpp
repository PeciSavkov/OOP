#include<iostream>

using namespace std;

#include "PPE.h"
#include "TRA.h"
#include "MODELTR.h"

MODELTR::MODELTR( void )
{
	Model = new char[ 5];
	strcpy( Model, "None");
}

MODELTR::MODELTR(char *aName, char *aVid, char*aModel)
			: TRA( aName, aVid )
{
	Model = new char[ strlen( aModel ) + 1 ];
	strcpy( Model, aModel );
}

void MODELTR :: Display( void )
{
	TRA::Display();
	cout << "Modelat na tranzistora e: " << Model << endl;
}

char *MODELTR::getClassName(void)
{
	return "MODELTR";
}

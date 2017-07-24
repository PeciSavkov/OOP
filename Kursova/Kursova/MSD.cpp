#include<iostream>

using namespace std;

#include "MSD.h"

MSD :: MSD( void )
{
	Vid = new char[ 5];
	strcpy( Vid, "None");
}

MSD :: MSD( char *aVid )
{
	Vid = new char[ strlen( aVid ) + 1 ];
	strcpy( Vid, aVid );
}

MSD :: MSD( MSD& aMSD)
{
	Vid = new char[ strlen( aMSD.Vid ) + 1 ];
	strcpy( Vid, aMSD.Vid );
}

char* MSD :: getVid( void )
{
	return Vid;
}

void MSD :: setVid( char *aVid )
{
	Vid = new char[ strlen( aVid ) + 1 ];
	strcpy( Vid, aVid );
}

void MSD :: Display( void )
{
	cout << "Vid sortirovka: "<< Vid << endl;
}

char *MSD::getClassName(void)
{
	cout<<endl;
	return "MSD";
}
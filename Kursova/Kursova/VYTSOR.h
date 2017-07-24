#ifndef VYTSOR_H
#define VYTSOR_H

class VYTSOR : public MSD
{
public:	
	VYTSOR( void );	
	VYTSOR( char *, char * );	
	VYTSOR( VYTSOR & );			
	~VYTSOR( void )				
		{ delete Ime;}	
	char* getIme( void );
	void setIme( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Ime;

};


#endif
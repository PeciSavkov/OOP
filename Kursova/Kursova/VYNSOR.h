#ifndef VYNSOR_H
#define VYNSOR_H

class VYNSOR : public MSD
{
public:	
	VYNSOR( void );	
	VYNSOR( char *, char * );	
	VYNSOR( VYNSOR & );			
	~VYNSOR( void )				
		{ delete Ime;}	
	char* getIme( void );
	void setIme( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Ime;

};


#endif
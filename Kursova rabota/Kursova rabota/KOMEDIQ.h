#ifndef KOMEDIQ_H
#define KOMEDIQ_H

class KOMEDIQ : public FILMI
{
public:	
	KOMEDIQ( void );	
	KOMEDIQ( char *, char * );	
	KOMEDIQ( KOMEDIQ & );			
	~KOMEDIQ( void )				
		{ delete Janr;}	
	char* getJanr( void );
	void setJanr( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Janr;

};


#endif
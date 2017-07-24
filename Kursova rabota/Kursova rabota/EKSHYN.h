#ifndef EKSHYN_H
#define EKSHYN_H

class EKSHYN : public FILMI
{
public:	
	EKSHYN( void );	
	EKSHYN( char *, char * );	
	EKSHYN( EKSHYN & );			
	~EKSHYN( void )				
		{ delete Janr;}	
	char* getJanr( void );
	void setJanr( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Janr;

};


#endif
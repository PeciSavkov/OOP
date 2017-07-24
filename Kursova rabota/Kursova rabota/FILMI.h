#ifndef FILMI_H
#define FILMI_H


class FILMI
{
public:
	FILMI( void );	
	FILMI( char * );			
	FILMI( FILMI & );			
	~FILMI( void )				
		{ delete Name; }		
	char* getName( void );
	void setName( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Name;
};


#endif
#ifndef DIOD_H
#define DIOD_H

class DIOD : public PPE
{
public:	
	DIOD( void );	
	DIOD( char *, char * );	
	DIOD( DIOD & );			
	~DIOD( void )				
		{ delete Vid;}	
	char* getVid( void );
	void setVid( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Vid;

};


#endif
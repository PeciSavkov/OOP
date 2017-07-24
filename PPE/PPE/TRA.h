#ifndef TRA_H
#define TRA_H

class TRA : public PPE
{
public:	
	TRA( void );	
	TRA( char *, char * );	
	TRA( TRA & );			
	~TRA( void )				
		{ delete Vid;}	
	char* getVid( void );
	void setVid( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Vid;

};


#endif
#ifndef TIR_H
#define TIR_H

class TIR : public PPE
{
public:	
	TIR( void );	
	TIR( char *, char * );	
	TIR( TIR & );			
	~TIR( void )				
		{ delete Vid;}	
	char* getVid( void );
	void setVid( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Vid;

};


#endif
#ifndef MSD_H
#define MSD_H


class MSD
{
public:
	MSD( void );	
	MSD( char * );			
	MSD( MSD & );			
	~MSD( void )				
		{ delete Vid; }		
	char* getVid( void );
	void setVid( char * );
	virtual void Display( void );
	virtual char *getClassName( void );

protected:
	char *Vid;
};


#endif
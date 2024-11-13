#include<stdio.h>
int main(void)
{
    //char ID[100];
    int ID;
    char name[100];
    float avgMark;
	
	FILE * cfPtr;
	cfPtr = fopen( "marks.txt", "w" );
	
	if( cfPtr == NULL )
	{
		printf( "File not created" );
		return -1;
	}
	
	printf( "Enter the ID number: ");
	scanf( "%d", &ID );
	printf( "Enter the Name: ");
	scanf( "%s", name);
	printf( "Enter the average mark: ");
	scanf( "%f", &avgMark );
	
	fprintf( cfPtr, "%d\n%s\n%.2f",ID, name, avgMark );
	
	//printf( "%d\n%s\n%.2f",ID, name, avgMark );
	
	fclose( cfPtr );
	
	
	FILE *Ptr;
	Ptr = fopen( "marks.txt", "r" );
	if( Ptr == NULL )
	{
		printf( "File not created" );
		return -1;
	}
/*	while( !feof(Ptr) )
	{
		fscanf( Ptr, "%d%s%f", &ID, &name, &avgMark ); 
	
    	printf( "%d\n%s\n%.2f", ID, name, avgMark );
	}	printf( "%d\n%s\n%.2f", ID, name, avgMark ); */
	
		fscanf( Ptr, "%d%s%f", &ID, &name, &avgMark );
        printf( "%d\n%s\n%.2f", ID, name, avgMark );
	
	return 0;
	
	
}

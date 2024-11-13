#include<stdio.h>
int main(void)
{
	int no, i ;
	
	FILE * cfPtr; // create the file pointer
	cfPtr = fopen("numbers.txt","w");
	if( cfPtr == NULL )
	{
		printf("Fail not created");
		return -1;
	}
	
	for( i = 1 ; i <= 5 ; i++ )
	{
		printf( "Enter the number: " );
		scanf( "%d", &no );
		
		fprintf( cfPtr, "%d", no ); // write numbers to file
	}
	
	fclose( cfPtr );
	
	
	
	return 0;
}

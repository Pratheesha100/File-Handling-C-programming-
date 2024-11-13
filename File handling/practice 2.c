#include<stdio.h>
int main(void)
{

    int ID;
    char name[100];
    float avgMark;
    
    
	FILE * cfPtr1;
	cfPtr1 = fopen( "marks.txt", "r" );
	if( cfPtr1 == NULL )
	{
		printf( "File not created" );
		return -1;
	}
	
	fscanf( cfPtr1, "%d%s%.2f", ID, name, avgMark );
	
	printf( "%d\n%s\n%.2f", ID, name, avgMark );
	fclose(cfPtr1);
	
	return 0;
	
	
}

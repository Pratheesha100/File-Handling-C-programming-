#include<stdio.h>
int main(void)
{
	int i, count[3] = {0};
	char name[100], appType;
	
	FILE * ptr;
	
	ptr = fopen( "appointment.txt","w+" );
	
	if(ptr == NULL )
	{
		printf("File not created");
		return -1;
	}
	
	for( i = 1; i <= 5; i++  )
	{
	   printf("Enter the patient %d name: ", i);
	   scanf("%s", name);
	   printf("Enter the appointment type of patient %d(C/T/S): ", i);
	   scanf(" %c", &appType);
	   printf("\n");
	   
	   fprintf( ptr, "%s\t%c\n", name, appType );
	   	
	}
	
     rewind(ptr);
	
	for( i = 1; i <= 5; i++  )
	{
		fscanf(ptr, "%s%c", name, &appType );
		
		if( appType == 'C' || appType == 'c')
		{
			 count[0]++;
		}
		
			if( appType == 'T' || appType == 't')
		{
			 count[1]++;
		}
		
			if( appType == 'S' || appType == 's')
		{
			 count[2]++;
		}
		
	}
	
    printf( "Appointment Type\tNumber of Patients\n");
	printf( "Consulting\t\t%d\n", count[0] );
    printf( "Scanning\t\t%d\n", count[1] );
    printf( "Testing\t\t\t%d\n", count[2] );
    
	fclose( ptr ) ;
	
	return 0;
}

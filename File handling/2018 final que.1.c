#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[100], telNo[100];
	
	FILE * ptr;
	
	ptr = fopen( "Mahinda.txt", "w" );
	
	if( ptr == NULL )
	{
	    printf("File did not created");
	    return -1;
	}
	
	for(i = 1; i <= 5; i++)
	{
	  printf("Enter the name: ");
	  scanf("%s", name );
	  printf("Enter the name: ");
	  scanf("%s", telNo );
	  
	  fprintf(ptr, "%s\t%s", name, telNo);
	}
	
	fclose(ptr);
	
    return 0;
	
}

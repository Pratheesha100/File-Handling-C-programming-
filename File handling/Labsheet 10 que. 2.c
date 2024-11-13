#include<stdio.h>
int main(void)
{
   char itemId[100] = {0}, name[100] = {0};
   float price, totPrice;
   int qty, count;
   
   FILE * cfPtr;
  
   cfPtr = fopen( "purchase.txt", "w");
  
   if(cfPtr == NULL )
    {
    	printf("File did not created");
    	return -1;
    }	
   for(count = 1; count <= 4 ; count++ )
	{
		printf( "Enter the item ID: " );
		scanf( "%s", itemId );
		printf( "Enter the name: ");
		scanf( "%s", name );
		printf( "Enter the quantity: ");
		scanf( "%d", &qty );
    	printf( "Enter the unit price: ");
		scanf( "%f", &price );
		fprintf( cfPtr, "%s\t%s\t%d\t%.1f\n", itemId, name, qty, price );
	}
	
   fclose(cfPtr);
    	
   cfPtr = fopen( "purchase.txt", "r");
   
   printf("Item\tQuantity\tUnit price\tPrice(Rs.)\n"); 
   
   fscanf( cfPtr, "%s %s %d %f ", itemId, name, &qty, &price );
 
  
  
   while( !feof(cfPtr) )
   {
  	    totPrice = price * qty; 
  	    printf("%s\t%s\t%d\t%.1f\t\t%.1f\n", itemId, name, qty, price, totPrice );
     	fscanf( cfPtr1, "%s%s%d%f ", itemId , name, &qty, &price );
   }
  
  
   fclose( cfPtr );	
   return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,f,supp;
   int vettore[10];
   time_t t;
   f=10;
   srand((unsigned) time(&t));
   for(i=0;i<f;i++) 
   {
      vettore[i]=rand()%100;
   }
   printf("Popolamento dell'array con numeri random.\n");
   printf("Contenuto:\t");
	   for(i=0;i<f;i++){
	   printf("%d\t",vettore[i]);
	}
	printf("\n\nVettore ordinato:\t");
	
		for(j=0;j<10;j++){
			for(i=j+1;i<10;i++){
				if(vettore[j]>vettore[i]){
					supp=vettore[j];
					vettore[j]=vettore[i];
					vettore[i]=supp;
				}
			}
		}
	   for(i=0;i<f;i++){
	   printf("%d\t",vettore[i]);
	}
   
   return(0);
   system("pause");
}


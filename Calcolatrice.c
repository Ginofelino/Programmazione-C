#include<stdio.h>

int main(){
	int scelta;
	float num1,num2,risultato;
	printf("Scegli che tipo di operazione vuoi fare\n");
	printf("1.Addizione\n");
	printf("2.Sottrazione\n");
	printf("3.Moltiplicazione\n");
	printf("4.Divisione\n");
	scanf("%d", &scelta); getchar();
	    if(scelta<1 || scelta>4){
	    	printf("Scelta non valida. Seleziona un'opzione fra quelle elencate");
		}
		else if(scelta==1){
			printf("Addizione\n");
			printf("Scrivi il primo numero:\t");
			scanf("%f",&num1); getchar();
			printf("Ora scrivi il secondo numero:\t");
			scanf("%f", &num2); getchar();
			risultato=num1+num2;
			printf("Il risultato e':\t%f",risultato);
	    }
	    else if(scelta==2){
	    	printf("Sottrazione\n");
			printf("Scrivi il primo numero:\t");
			scanf("%f",&num1);getchar();
			printf("Ora scrivi il secondo numero:\t");
			scanf("%f", &num2);getchar();
			risultato = num1 - num2 ;
			printf("Il risultato e':\t%f",risultato);
	    	
		}
		else if(scelta==3){
	    	printf("Moltiplicazione\n");
			printf("Scrivi il primo numero:\t");
			scanf("%f",&num1); getchar();
			printf("Ora scrivi il secondo numero:\t");
			scanf("%f", &num2); getchar();
			risultato=num1*num2;
			printf("Il risultato e':\t%f",risultato);
	    	
		}
		else if(scelta==4){
	    	printf("Divisione\n");
			printf("Scrivi il primo numero:\t");
			scanf("%f",&num1); getchar();
			printf("Ora scrivi il secondo numero:\t");
			scanf("%f", &num2); getchar();
			if(num1==0||num2==0){
				printf("Non puoi inserire il valore '0'\n\n");
				main();
			}
				else{
				
					risultato=num1/num2;
					printf("Il risultato e':\t%f",risultato);
			    }
		    
	    	
		}
	
}

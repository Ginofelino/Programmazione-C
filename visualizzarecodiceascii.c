#include <stdio.h>
#include <stdlib.h>

//Prototipo
menu(char p);
ascii(char p);

//Main
int main(){
	char p;
	menu(p);
	system("pause");
	return 0;
}

//Menu
int menu(char p){
	printf("Scegli l'operazione da eseguire\n\n");
	printf("1) Visualizza il codice ASCII.\n");
	printf("2) Esci.\n");
	scanf("%d",&p);
		if(p==1){
			ascii(p);
		}
		else if (p==2){
			exit(0);
		}
		else{
			menu(p);
		}
		return 0;
	}
	
//Visualizzazione tabella ASCII estesa
	ascii(char p){
		p=0;
		printf("Simbolo\t\t Decimale\t Esadecimale\n\n");
		do{
			printf("%c\t\t",p);
			printf("%d\t\t",p);
			printf("%x\n",p);
			p=p+1;
		}
		while(p!=0);
		return 0;
	}

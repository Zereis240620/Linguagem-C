#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a funçao strcmp
#include<windows.h>
#include<conio.h>
#define LONGITUD 80
main(){
 
       char c;
       char usuario[LONGITUD + 1];
       char senha[LONGITUD + 1];
       int i=0;
       int verifica_login=0;
	   char caracter;
      while(verifica_login==0){
      	
       printf("\n\t\tPizzaria\n\n login: ");
      
       gets(usuario);
       
       printf("\n senha: ");
       
		while (caracter = getch()) {
			if (caracter == 13) {
				senha[i] = '\0';
				break;
				
			} else if (caracter == 8) {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
				
			} else {
				if (i < LONGITUD) {
					printf("*");
					senha[i] = caracter;
					i++;
				}
			}
		}
       senha[i]='\0';
       i=0;
       system("cls");
       
       if(strcmp(usuario,"admin") == 0 && strcmp(senha,"123") == 0){
	    
		        printf("Logado");
	            system("color 0a");
				verifica_login =1;
	            Beep(1500,2000);}
        
		else{
		
		   printf(" Dados Informados Incorretamente \n");
		   system("color 0c");
		   Beep(1200,200);}
		   
       printf("\n");
 
       }
       
       system("pause");
       return 0;
}

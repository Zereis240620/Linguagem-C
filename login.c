#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a funçao strcmp
#include<windows.h>
#include<conio.h>
 
main(){
 
       char c;
       char login[20];
       char senha[20];
       int i=0;
       int verifica_login=0;
       
      while(verifica_login==0){
      	
       printf("\n\t\tPizzaria\n\n login: ");
      
       gets(login);
       
       printf("\n senha: ");
       
       while((c=getch())!=13){ //13 é o valor de ENTER na tabela ASCII
           
		   senha[i]=c;
           i++;
           printf("*");      //imprime o * Anterisco
    }
       senha[i]='\0';
       i=0;
       system("cls");
       
       if(strcmp(login,"admin") == 0 && strcmp(senha,"123") == 0){
	    
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

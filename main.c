
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<locale.h>


int main (){
    
    
setlocale(LC_ALL,"portuguese");    
    
 char nome  [5][50]; // vetor de string.
 int idade  [5];
 int notas  [3];
 int i;
 int j;
 int soma ;
 float media ;
 system("cls || clear");
 
 printf(" digite 5 nomes e 5 idades \n  : ");
    
 
  
for (i=0; i<5; i++){
	
	printf("  %dº nome :",i+1);
	gets ( nome[i]);
	
    printf ( "  %dº idade : ",i+1 );
    scanf(" %d",&idade[i] );
    
 for(j=0; j<3; j++){
   
   printf("digite a %d  nota: ", j+1);   
   
    scanf("%d",&notas[j]);
    
    soma += notas[j];
     

 }
 

    
    setbuf(stdin,0);
    
}

 
  printf( " ******************lista de pessoas ***************");
 
 
for ( i=0; i<5; i ++ ){
	
	
	printf("  %d º nome :  %s \n  ",i+1 ,nome[i]);
	printf("  %d º idade : %d \n  ", i+1,idade[i]);
	
	for ( j=0; j<3; j++){
	printf(" %d notas: :", notas[j]);
  }
  
    media = soma / j ;
    
	printf(" media dos alunos: %.1f", media) ;
	
	
	
	if ( media >=7 ){
	    printf("aprovado!!!");
	}
	else if  ( media >= 5 ){
	   
	   printf(" recuperação");
	   
	}
	else if  ( media < 5 ){
	   
	   printf("reprovado");
	}
}


return 0 ;	
	
}






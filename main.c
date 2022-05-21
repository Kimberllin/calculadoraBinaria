#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


//Univali - How

//Acad�micos: Daniel Augusto Linhares, Roges Ramos de Ramos, Kimberllin Rodrigues Martins, Fabricio Mello e Maria Eduarda Dutra Ramos

//Curso de Gradua��o em An�lise e Desenvolvimento de Sistemas - Universidade do Vale do Itaja�

// Decimal para bin�rio

void binario(int n) {
 if(n == 0)
   printf ("%d", n); //se o ultimo resultado for 0, ele ir� imprimir o n�mero 0.
   else {
    binario(n/2); //caso o 'n' for diferente de 0
    printf("%d", n % 2); //imprimir o resto da divis�o de n por 2
   }

}

int funcaoDecimal(){
 int n; //variavel n

 printf ("Digite um valor decimal: "); //Vamos imprimir a pergunta na tela
 scanf ("%d", &n);

 binario(n);
}


//Binario para decimal

int funcaoBinario(){
    int bin, dec = 0, i;
    printf("\nDigite um numero binário: \t");
    scanf("%d", &bin); //armazena o numero digitado
    for(i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);//faz a conversao para binario
        bin = bin / 10;
    }
    printf("\nO número em decimal é: %d\n", dec);
    return 0;
}


//Menu
int main(){
    int contador = 0;
    while(contador < 1000){
    int opcao;
    printf("Digite 1 para transformar decimal em binario; \nDigite 2 para transformar binario em decimal; \nDigite 3 para sair:  ");
    scanf("%d", &opcao); //salva a opcao digitada
    if(opcao == 1){
       funcaoDecimal(); //se digitado 1 chama a funcao para converter decimal para binario
    }
    else
    if(opcao == 2){
        funcaoBinario(); //se digitado 2 chama a funcao para converter binario para decimal
    }
    else
    if(opcao == 3){
         //se digitado 3 escreve ate a proxima e sai do sistema
        break;
    }
    else{
        setlocale(LC_ALL, "Portuguese");
        printf("Opção invalida, digite uma opção válida!\n"); //se digitado qualquer outra coisa dia que e invalido
        main();
    }

int loop; //pergunta se que fazer outra conversao, comeco do loop
    printf("Você quer fazer outra conversão? \nDigite 1 para sim e 2 para não: \n");
    scanf("%d", &loop);
    if(loop == 1){
        contador ++, "\n";
    }

    else{
        //se digitado diferente de 1 escreve ate a proxima e sai do sistema
        break;
    }
    }
}






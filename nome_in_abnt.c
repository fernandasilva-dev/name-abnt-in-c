#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    system("cls");
    char nome[100];
    int tam,i;
    if(nome != NULL){
        printf("\n ");
        printf("Digite o nome completo: ");
        gets(nome);

        tam = strlen(nome);
        for(i = 0; i < tam; i ++){
            nome[i] = toupper(nome[i]);
        }

        char *ultimo_nome = strrchr(nome, ' ');
        if (ultimo_nome != NULL){
            ultimo_nome++; 
        }
        
        printf("\nNOME: %s\n",nome);
        printf("Nome em ABNT: %s, ", ultimo_nome);

        char *inicial = strtok(nome," ");

        for(i = inicial; inicial != NULL; i++){
            if (inicial != ultimo_nome){ 
                printf("%c. ", inicial[0]);
            }
            inicial = strtok(NULL," ");
        }
        if(nome == NULL){
            return 1;
            system("pause");
        }
    return 0;
    }
}

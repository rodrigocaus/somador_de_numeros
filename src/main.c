/*  Somador de numeros
 *
 *  Rodrigo Oliveira Caus - 186807
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 30

//Calcula o fatorial de um inteiro
int fat(int i);
//Procura por calacteres alfabeticos (nao numericos) em uma string
int searchForAlpha(char *str, int len);

int main(int argc, char **argv) {
    //Variaveis utilizadas
    float sum = 0.0;
    char line[MAXLEN];
    char *token;
    token = (char *) calloc(MAXLEN, sizeof(char));

    //Leitura da linha inteira
    scanf(" %[^\n]", line);
    //Lê palavra por palavra e grava em 'token'
    for(int i = 0; sscanf(line+i, " %s", token) != EOF; ) {
        // Serão considerados tokens apenas com caracteres nao numericos
        //Análise do fatorial
        if(!searchForAlpha(token, strlen(token)-1) && token[strlen(token)-1] == '!') {
            int readInt;
            sscanf(token, " %d", &readInt);
            sum += (float) fat(readInt);
        }
        //Caso contrario será um numero
        else if(!searchForAlpha(token, strlen(token))){
            float readFloat = 0.0;
            sscanf(token, " %f", &readFloat);
            sum += readFloat;
        }
        //Atualizamos o indice de leitura da entrada
        i += strlen(token)+1;
        //Zeramos o 'token' para evitar alguns bugs
        memset(token, 0, MAXLEN);
    }
    //Imprime a saida
    printf("%.2f\n", sum);
    //Finaliza o programa
    free(token);
    return 0;
}

int fat(int i) {
    if(i == 1)
        return 1;
    else
        return (i*fat(i-1));
}

int searchForAlpha(char *str, int len){
    if(len < 0)
        return -1;
    for(int i = 0; i < len; i++){
        if(str[i] == '.')
            continue;
        else if(str[i] < '0' || str[i] > '9')
            return i+1;
    }
    return 0;
}

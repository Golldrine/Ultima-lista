#include<stdio.h>
#include<string.h>
#include<ctype.h>
char placa[9],dia[15];
int i;
int main(){
    scanf("%s",placa);

    scanf("%s",dia);
    int tamanho=strlen(placa);
    if(tamanho==8){
        if(!isalpha(placa[0])||!isalpha(placa[1])||!isalpha(placa[2])||placa[3]!='-'||!isdigit(placa[4])||!isdigit(placa[5])||!isdigit(placa[6])||!isdigit(placa[7])){
            printf("Placa invalida\n");
            return 0;
        }
    }else if(tamanho==7){
        if(!isalpha(placa[0])||!isalpha(placa[1])||!isalpha(placa[2])||!isdigit(placa[3])||!isalpha(placa[4])||!isdigit(placa[5])||!isdigit(placa[6])){
            printf("Placa invalida\n");
            return 0;
        }
    }else{
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
        return 0;
    }
    int ultimoDigito=placa[tamanho-1]-'0';
    for(i=0;i<strlen(dia);i++){
        dia[i]=toupper(dia[i]);
    }
    if(strcmp(dia,"SEGUNDA-FEIRA")==0){
        if(ultimoDigito==0||ultimoDigito==1){
            printf("%s nao pode circular segunda-feira\n",placa);
        }else{
            printf("%s pode circular segunda-feira\n",placa);
        }
    }else if(strcmp(dia,"TERCA-FEIRA")==0){
        if(ultimoDigito==2||ultimoDigito==3){
            printf("%s nao pode circular terca-feira\n",placa);
        }else{
            printf("%s pode circular terca-feira\n",placa);
        }
    }else if(strcmp(dia,"QUARTA-FEIRA")==0){
        if(ultimoDigito==4||ultimoDigito==5){
            printf("%s nao pode circular quarta-feira\n",placa);
        }else{
            printf("%s pode circular quarta-feira\n",placa);
        }
    }else if(strcmp(dia,"QUINTA-FEIRA")==0){
        if(ultimoDigito==6||ultimoDigito==7){
            printf("%s nao pode circular quinta-feira\n",placa);
        }else{
            printf("%s pode circular quinta-feira\n",placa);
        }
    }else if(strcmp(dia,"SEXTA-FEIRA")==0){
        if(ultimoDigito==8||ultimoDigito==9){
            printf("%s nao pode circular sexta-feira\n",placa);
        }else{
            printf("%s pode circular sexta-feira\n",placa);
        }
    }else if(strcmp(dia,"SABADO")==0||strcmp(dia,"DOMINGO")==0){
        printf("Nao ha proibicao no fim de semana\n");
    }else{
        printf("Dia da semana invalido\n");
        return 0;
    }
    return 0;
}
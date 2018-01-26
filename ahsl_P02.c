#include<stdio.h>
#include<string.h>

int main() {
    char palabra[60],rep[100],temporal[100];
    char pal;
    int longitud=0,i,j=0,inicial=0,acert=0,temp=0,opor=5;
    int repeticion=0,ganador=0;
    printf("Introduzca la palabra a adivinar: ");
    scanf("%s",palabra);

    rep[0] = ' ';
    rep[1] = '\0';
    do {

        temp=0;
        if(inicial == 0) {
         for(i=0;i<strlen(palabra);i++) {
          if(palabra[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';
             longitud++;
          }
         }
        }
        inicial = 1;
        temporal[longitud] = '\0';
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repeticion = 1;
            break;
          }
          else {
           repeticion = 0;
         }
        }
        if(repeticion == 0) {
         for(i=0;i<strlen(palabra);i++) {
                    if(palabra[i] == pal) {
             temporal[i] = pal;
              acert++;
              temp=1;
            }
          }
        }
    if(repeticion == 0) {
         if(temp == 0) {
           opor = opor - 1;
         }
        }
        else {
         printf("Ya se ha introducido este caracter");
         printf("\n\n");
        }
        printf("\n");
        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }
        printf("\n");
        if(strcmp(palabra,temporal) == 0) {
            ganador = 1;
            break;
        }
        printf("\n");
        printf("Letras Acertadas: %d",acert);
        printf("\n");
        printf("Oportunidades Restantes: %d",opor);
        printf("\n");
        rep[j] = pal;
        j++;
        if (opor==0)
        {
           break;
        }
        printf("Introduzca una letra:");
        scanf("\n%c",&pal);
    }while(opor != 0);

    if(ganador) {
                printf("\n\n");
        printf("Yayy, ganaste");
    }
    else {
                printf("\n\n");
        printf("Eres un perdedor");
    }
    printf("\n\n");
    system("PAUSE");
    return 0;
}

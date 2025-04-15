#include <stdio.h>

int main(){
    char Estado[2];
    char Código[5], Nome_da_Cidade[20] ;
    int População, Número_de_pontos_turísticos;
    float Área, PIB, Densidade_populacional, PIB_per_Capita;

    printf("Carta 1 \n");

    printf("Digite o estado: \n");
    scanf("%s", Estado);

    printf("Digite o código: \n");
    scanf("%s", Código	);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome_da_Cidade);

    printf("Digite a população: \n");
    scanf("%d", &População );

    printf("Digite a área: \n");
    scanf("%f", &Área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Número_de_pontos_turísticos );

    Densidade_populacional = População / Área;
    PIB_per_Capita = (float) PIB / População;

    char Estado2[2];
    char Código2[5], Nome_da_Cidade2[20] ;
    int População2, Número_de_pontos_turísticos2;
    float Área2, PIB2, Densidade_populacional2, PIB_per_Capita2 ;

    printf("Carta 2 \n");

    printf("Digite o estado: \n");
    scanf("%s", Estado2);

    printf("Digite o código: \n");
    scanf("%s", Código2	);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome_da_Cidade2);

    printf("Digite a população: \n");
    scanf("%d", &População2 );

    printf("Digite a área: \n");
    scanf("%f", &Área2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Número_de_pontos_turísticos2 );
    
    Densidade_populacional2 = População2 / Área2;
    PIB_per_Capita2 = (float) PIB2 / População2;

    printf("Carta 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s%s \n", Estado , Código);
    printf("Nome da cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", População);
    printf("Área: %.2f km²\n", Área);   
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Número de pontos turísticos: %d \n", Número_de_pontos_turísticos);
    printf("Densidade Populacional: %.2f hab/km² \n" , Densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);


    printf("Carta 2 \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s%s \n", Estado2 , Código2);
    printf("Nome da cidade: %s \n", Nome_da_Cidade2);
    printf("População: %d \n", População2);
    printf("Área: %.2f km²\n", Área2);   
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d \n", Número_de_pontos_turísticos2);
    printf("Densidade Populacional: %.2f hab/km²\n" , Densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);





    return 0;
}


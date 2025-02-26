#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char codigo1[4], nomeCidade1[50], estado1[3];
    int pontosTuristicos1;
    float area1, pib1;
    long long int populacao1;  // Corrigido para evitar erro de precisão
    double pC, dP;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (A-H): ");
    scanf("%2s", estado1);
    getchar();

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; 

    printf("Digite a populacao: ");
    scanf("%lld", &populacao1);  // Corrigido para "%lld" compatível com long long int
    getchar();

    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);  
    getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // Cálculo correto da densidade populacional
    dP = populacao1 / area1; 

    // Cálculo correto do PIB per capita
    pC = (pib1 * 1000000000) / populacao1;  

        // Declaração de variáveis para a Segunda carta
        char codigo2[4], nomeCidade2[50], estado2[3];
        int pontosTuristicos2;
        float area2, pib2;
        long long int populacao2;  // Corrigido para evitar erro de precisão
        double pC2, dP2;
    
        // Entrada de dados da Segunda carta
        printf("Cadastro da Carta 2\n");
    
        printf("Digite o estado (A-H): ");
        scanf("%2s", estado2);
        getchar();
    
        printf("Digite o codigo da carta (ex:  B02): ");
        scanf("%3s", codigo2);
        getchar();
    
        printf("Digite o nome da cidade: ");
        fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
        nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; 
    
        printf("Digite a populacao: ");
        scanf("%lld", &populacao2);  // Corrigido para "%lld" compatível com long long int
        getchar();
    
        printf("Digite a area em km²: ");
        scanf("%f", &area2);
        getchar();
    
        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &pib2);  
        getchar();
    
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos2);
        getchar();
    
        // Cálculo correto da densidade populacional
        dP2 = populacao2 / area2; 
    
        // Cálculo correto do PIB per capita
        pC2 = (pib2 * 1000000000) / populacao2;  
    
    
 
    // Exibição dos resultados Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);  
    printf("Codigo: %s\n", codigo1); 
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("Populacao: %lld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dP);
    printf("PIB per Capita: %.2f reais\n", pC);


    // Exibição dos resultados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);  
    printf("Codigo: %s\n", codigo2); 
    printf("Nome da Cidade: %s\n", nomeCidade2); 
    printf("Populacao: %lld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dP2);
    printf("PIB per Capita: %.2f reais\n", pC2);
   
   
   
    return 0;
}

#include <stdio.h>
#define NUM_CARTAS 2

int main() {

    printf("Desafio Super Trunfo\n");

    char Carta;
    char Estado;
    char CodigoDaCarta[10];
    char NomeDaCidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Digite o número da Carta");
    scanf("%c", &Carta);

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados). ");
    scanf("%s", &Estado);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) .");
    scanf("%c", &CodigoDaCarta);

    printf("Digite o Nome da Cidade. ");
    scanf("%c", &NomeDaCidade);

    printf("Digite o número de habitantes. ");
    scanf("%d", &Populacao);

    printf("Área em quilômetros quadrados.");
    scanf("%.2f", &Area);

    printf("Produto Interno Bruto.");
    scanf("%.2f", &PIB);

    printf("Quantidade de Pontos Turísticos da cidade.");
    scanf("%d", &PontosTuristicos);

    printf("Carta: %c\n", Carta);
    printf("Estado:%c\n", Estado);
    printf("CódigoDaCarta: %s\n", CodigoDaCarta);
    printf("NomeDaCidade: %c\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("ProdutoInternoBruto: %d\n", PIB);
    printf("PontosTurísticos: %d\n", PontosTuristicos);

    return 0;
    
}
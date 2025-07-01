#include<stdio.h>

int main(){
    printf("Desafio Cartas Super Trunfo!\n");
    printf("commit\n");
    
    int cidade;
    int Estado;
    char codigo;
    int populaçao;
    double area;
    double pib;
    int pontos;

    saoPaulo.estado, 'A';
    saoPaulo.codigo, "A01";
    saoPaulo.nome, "São Paulo";
    saoPaulo.populacao = 12325000;
    saoPaulo.area = 1521.11;
    saoPaulo.pib = 699.28;
    saoPaulo.pontos_turisticos = 50;

    printf("Cidade: %s\n", saoPaulo.cidade);
    printf("Estado: %s\n", saoPaulo.estado);
    printf("Código: %s\n", saoPaulo.codigo);
    printf("População: %lld\n", saoPaulo.populacao);
    printf("Área: %.2f km²\n", saoPaulo.area);
    printf("PIB: %.2f bilhões de reais\n", saoPaulo.pib);
    printf("Pontos turísticos: %d\n", saoPaulo.pontos_turisticos);

    return 0;
    
}
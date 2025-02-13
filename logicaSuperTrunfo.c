#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
  // Definição das variáveis para armazenar as propriedades das cidades
  // Você pode utilizar o código do primeiro desafio
  // Cadastro das Cartas:
  // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
  // utilizando a função scanf para capturar as entradas.
  // utilize o código do primeiro desafio
  // Exemplo:
  // printf("Digite o código da cidade: ");
  // scanf("%s", codigo);
  // (Repita para cada propriedade)

  char codigo[4], codigo2[4];  // Declaração da variável código da cidade, que tem como base 4 caracteres
  char nome[20], nome2[20];    // Declaração da variável nome da cidade, que tem como base 20 caracteres
  int populacao, populacao2;   // Declaração da variável população, utilizando números inteiros
  int area, area2;             // Declaração da variável área, utilizando números inteiros
  int pib, pib2;               // Declaração da variável PIB, utilizando números inteiros
  int turismo, turismo2;       // Declaração da variável turismo, utilizando números inteiros
  float densidade, densidade2; // Declaração da variável densidade, utilizando números flutuantes
  float PIB, PIB2;             // Declaração da variável PIB, utilizando números flutuantes
  float ResultadoDensidade;    // Declaração da variável ResultadoDensidade, utilizando números flutuantes
  float ResultadoPIB;          // Declaração da variável ResultadoPIB, utilizando números flutuantes
  int ponto1 = 0, ponto2 = 0;  // Declaração da variável ponto1 e ponto2, utilizando números inteiros
  int selecao;                 // Declaração da variável seleção, utilizando números inteiros

  printf("Você está no menu do Super Trunfo. por favor, selecione uma opção:\n"); //Introdução ao menu
  printf("1. Iniciar jogo\n2. Regras do jogo.\n3. Sair\n"); //Exibe as opções de escolha ao jogador
  scanf("%d", &selecao); //Jogador insere sua seleção
  switch (selecao) //Abre um switch utilizando umas das 3 opções
  {
  case 1: //Caso queira iniciar o jogo.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Bem-vindo ao Super Trunfo! Por favor, insira o código da primeira cidade: "); // Exibe a mensagem no terminal solicitando a inserção do dado "codigo"
    scanf("%s", &codigo);                                                                 // Permite a inserção do dado "código" no terminal

    printf("\nAgora, por favor, digite o nome: "); // Exibe a mensagem no terminal solicitando a inserção do dado "nome"
    scanf(" %s", &nome);                           // Permite a inserção do dado "nome" no terminal

    printf("\nDigite a população: "); // Exibe a mensagem no terminal solicitando a inserção do dado "populacao"
    scanf(" %d", &populacao);         // Permite a inserção do dado "populacao" no terminal

    printf("\nDigite a área: "); // Exibe a mensagem no terminal solicitando a inserção do dado "area"
    scanf(" %d", &area);         // Permite a inserção do dado "area" no terminal

    printf("\nDigite o PIB: "); // Exibe a mensagem no terminal solicitando a inserção do dado "PIB"
    scanf(" %d", &pib);         // Permite a inserção do dado "PIB" no terminal

    printf("\nPor fim, digite a quantidade de pontos turísticos disponíves em sua cidade: "); // Exibe a mensagem no terminal solicitando a inserção do dado "turismo"
    scanf(" %d", &turismo);                                                                   // Permite a inserção do dado "turismo" no terminal

    densidade = (float)populacao / area; // calcula a densidade populacional
    PIB = (float)pib / populacao;        // calcula o PIB per capita

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nConfira a sua seleção:\n");                // Exibe a mensagem no terminal confirmando os dados
    printf("Cidade: %s \n", codigo);                     // Exibe o dado "codigo" digitado anteriormente, no terminal
    printf("Nome: %s\n", nome);                          // Exibe o dado "nome" digitado anteriormente, no terminal
    printf("População: %d\n", populacao);                // Exibe o dado "populacao" digitado anteriormente, no terminal
    printf("Área: %d\n", area);                          // Exibe o dado "area" digitado anteriormente, no terminal
    printf("PIB: %d\n", pib);                            // Exibe o dado "pib" digitado anteriormente, no terminal
    printf("pontos turísticos: %d\n", turismo);          // Exibe o dado "turismo" digitado anteriormente, no terminal
    printf("Densidade populacional: %.2f\n", densidade); // Exibe o dado "densidade" calculado anteriormente
    printf("PIB per capita: %.2f \n", PIB);              // Exibe o dado "PIB" calculado anteriormente

    // ** INSERÇÃO DE DADOS DA SEGUNDA CARTA **

    printf("\nPor favor, insira o código da segunda cidade: "); // Exibe a mensagem no terminal solicitando a inserção do dado "codigo2"
    scanf("%s", &codigo2);                                      // Permite a inserção do dado "código2" no terminal

    printf("\nAgora, por favor, digite o nome: "); // Exibe a mensagem no terminal solicitando a inserção do dado "nome2"
    scanf(" %s", &nome2);                          // Permite a inserção do dado "nome2" no terminal

    printf("\nDigite a população: "); // Exibe a mensagem no terminal solicitando a inserção do dado "populacao2"
    scanf(" %d", &populacao2);        // Permite a inserção do dado "populacao2" no terminal

    printf("\nDigite a área: "); // Exibe a mensagem no terminal solicitando a inserção do dado "area2"
    scanf(" %d", &area2);        // Permite a inserção do dado "area2" no terminal

    printf("\nDigite o PIB: "); // Exibe a mensagem no terminal solicitando a inserção do dado "PIB2"
    scanf(" %d", &pib2);        // Permite a inserção do dado "PIB2" no terminal

    printf("\nPor fim, digite a quantidade de pontos turísticos disponíves em sua cidade: "); // Exibe a mensagem no terminal solicitando a inserção do dado "turismo2"
    scanf(" %d", &turismo2);                                                                  // Permite a inserção do dado "turismo2" no terminal

    densidade2 = (float)populacao2 / area2; // calcula a densidade populacional 2
    PIB2 = (float)pib2 / populacao2;        // calcula o PIB per capita 2

    printf("\nConfira a sua seleção:\n");                 // Exibe a mensagem no terminal confirmando os dados
    printf("Cidade: %s \n", codigo2);                     // Exibe o dado "codigo2" digitado anteriormente, no terminal
    printf("Nome: %s\n", nome2);                          // Exibe o dado "nome2" digitado anteriormente, no terminal
    printf("População: %d\n", populacao2);                // Exibe o dado "populacao2" digitado anteriormente, no terminal
    printf("Área: %d\n", area2);                          // Exibe o dado "area2" digitado anteriormente, no terminal
    printf("PIB: %d\n", pib2);                            // Exibe o dado "pib2" digitado anteriormente, no terminal
    printf("pontos turísticos: %d\n", turismo2);          // Exibe o dado "turismo2" digitado anteriormente, no terminal
    printf("Densidade populacional: %.2f\n", densidade2); // Exibe o dado "densidade2" calculado anteriormente
    printf("PIB per capita: %.2f \n", PIB2);              // Exibe o dado "PIB2" calculado anteriormente

    printf("\nA carta 1 - %s - possui os seguintes poderes: \n", codigo); //Exibe os poderes da carta 1
    printf("Densidade populacional: %.2f \n", densidade); //Exibe a densidade populacional da carta 1
    printf("PIB per capita: %.2f \n", PIB); //Exibe o PIB/capita da carta 1

    printf("\nA carta 2 - %s - possui os seguintes poderes: \n", codigo2); //Exibe os poderes da carta 2
    printf("Densidade populacional: %.2f \n", densidade2); //Exibe a densidade populacional da carta 2
    printf("PIB per capita: %.2f \n", PIB2); //Exibe o PIB/capita da carta 2

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("\n =POPULAÇÃO= Cidade 1: %d - Cidade 2: %d.\n", populacao, populacao2); //Exibe a população das cidades

    if (populacao > populacao2) // Se a população da cidade 1 for maior que a da cidade 2
    {
      printf("A cidade de %s possui uma população maior. +1 ponto. Total: %d\n", nome, ++ponto1); //Exibe a mensagem de que a cidade 1 possui uma população maior
    }
    else if (populacao == populacao2)
    { // Se a população da cidade 1 for igual a população da cidade 2{
      printf("Populações iguais. Ninguém pontua.\n"); //Exibe a mensagem de que as populações são iguais
    }
    else if (populacao < populacao2)
    { // Se a população da cidade 1 for menor que a população da cidade 2{
      printf("A cidade de %s possui uma população maior. +1 ponto. Total: %d\n", nome2, ++ponto2); //Exibe a mensagem de que a cidade 2 possui uma população maior
    }

    printf("\n =AREA= Cidade 1: %d - Cidade 2: %d.\n", area, area2); //Exibe a área das cidades

    if (area = area2) // Se a área da cidade 1 for igual a área da cidade 2
    {
      printf("Áreas iguais. Ninguém pontua.\n"); //Exibe a mensagem de que as áreas são iguais
    }
    else // Se a área da cidade 1 for diferente da área da cidade 2
    {
      if (area > area2) //Se a área da cidade 1 for maior que a área da cidade 2
      {
        printf("A área da cidade de %s é maior. +1 ponto. Total: %d\n", nome, ++ponto1); //Exibe a mensagem de que a cidade 1 possui uma área maior
      }
      else //Se a área da cidade 1 for menor que a área da cidade 2
      {
        printf("A área da cidade de %s é maior. +1 ponto. Total: %d\n", nome2, ++ponto2); //Exibe a mensagem de que a cidade 2 possui uma área maior
      }
    }

    printf("\n =DENSIDADE= Cidade 1: %.2f - Cidade 2: %.2f.\n", densidade, densidade2); //Exibe a densidade das cidades

    if (densidade = densidade2) // Se a densidade da cidade 1 for igual a densidade da cidade 2
    {
      printf("Densidades iguais. Ninguém pontua.\n"); //Exibe a mensagem de que as densidades são iguais
    }
    else // Se a densidade da cidade 1 for diferente da densidade da cidade 2
    {
      if (densidade < densidade2) // Se a densidade da cidade 1 for menor que a densidade da cidade 2
      {
        printf("\nA carta 1 (%s - %s) possui uma densidade menor. +1 ponto. Total: %d\n", codigo, nome, ++ponto1); //Exibe a mensagem de que a cidade 1 possui uma densidade menor
      }
      else // Se a densidade da cidade 1 for maior que a densidade da cidade 2
      {
        printf("\nA carta 2 (%s - %s) possui uma densidade menor. +1 ponto. Total: %d\n", codigo2, nome2, ++ponto2); //Exibe a mensagem de que a cidade 2 possui uma densidade menor
      }
    }

    printf("\n =PIB= Cidade 1: %d - Cidade 2: %d.\n", pib, pib2); //Exibe o PIB das cidades

    if (pib = pib2) // Se o PIB da cidade 1 for igual ao PIB da cidade 2
    {
      printf("PIB's iguais. Ninguém pontua.\n"); //Exibe a mensagem de que os PIB's são iguais
    }
    else // Se o PIB da cidade 1 for diferente do PIB da cidade 2
    {
      if (pib > pib2) // Se o PIB da cidade 1 for maior que o PIB da cidade 2
      {
        printf("O PIB da cidade de %s é maior. +1 ponto. Total: %d\n", nome, ++ponto1); //Exibe a mensagem de que a cidade 1 possui um PIB maior
      }
      else // Se o PIB da cidade 1 for menor que o PIB da cidade 2
      {
        printf("O PIB da cidade de %s é maior. +1 ponto. Total: %d\n", nome2, ++ponto2); //Exibe a mensagem de que a cidade 2 possui um PIB maior
      }
    }

    printf("\n =PIB PER CAPITA= Cidade 1: %.2f - Cidade 2: %.2f.\n", PIB, PIB2); //Exibe o PIB per capita das cidades

    if (PIB = PIB2) // Se o PIB per capita da cidade 1 for igual ao PIB per capita da cidade 2
    {
      printf("PIB per capita iguais. Ninguém pontua.\n"); //Exibe a mensagem de que os PIB's per capita são iguais
    }
    else  // Se o PIB per capita da cidade 1 for diferente do PIB per capita da cidade 2
    {
      if (PIB > PIB2)  //Se o PIB per capita da cidade 1 for maior que o PIB per capita da cidade 2
      {
        printf("O PIB per capita da cidade de %s é maior. +1 ponto. Total: %d\n", nome, ++ponto1); //Exibe a mensagem de que a cidade 1 possui um PIB per capita maior
      }
      else // Se o PIB per capita da cidade 1 for menor que o PIB per capita da cidade 2
      {
        printf("O PIB per capita da cidade de %s é maior. +1 ponto. Total: %d\n", nome2, ++ponto2); //Exibe a mensagem de que a cidade 2 possui um PIB per capita maior
      }
    }

    printf("\n =TURISMO= Cidade 1: %d - Cidade 2: %d.\n", turismo, turismo2); //Exibe a quantidade de pontos turísticos das cidades

    if (turismo = turismo2) // Se a quantidade de pontos turísticos da cidade 1 for igual a quantidade de pontos turísticos da cidade 2
    {
      printf("Quantidade de pontos turísticos iguais. Ninguém pontua.\n"); //Exibe a mensagem de que a quantidade de pontos turísticos são iguais
    }
    else // Se a quantidade de pontos turísticos da cidade 1 for diferente da quantidade de pontos turísticos da cidade 2
    {
      if (turismo > turismo2) // Se a quantidade de pontos turísticos da cidade 1 for maior que a quantidade de pontos turísticos da cidade 2
      {
        printf("A cidade de %s possui mais pontos turísticos. +1 ponto. Total: %d\n", nome, ++ponto1); //Exibe a mensagem de que a cidade 1 possui mais pontos turísticos
      }
      else // Se a quantidade de pontos turísticos da cidade 1 for menor que a quantidade de pontos turísticos da cidade 2
      {
        printf("A cidade de %s posui mais pontos turísticos. +1 ponto. Total: %d\n", nome2, ++ponto2); //Exibe a mensagem de que a cidade 2 possui mais pontos turísticos
      }
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n =PONTOS= Cidade 1: %d - Cidade 2: %d.\n", ponto1, ponto2); //Exibe a quantidade de pontos das cidades

    if (ponto1 = ponto2) // Se a quantidade de pontos da cidade 1 for igual a quantidade de pontos da cidade 2
    {
      printf("Houve um empate técnico. Ambos pontuaram: %d", ponto1); //Exibe a mensagem de que houve um empate técnico
    }
    else // Se a quantidade de pontos da cidade 1 for diferente da quantidade de pontos da cidade 2
    {
      if (ponto1 > ponto2) // Se a quantidade de pontos da cidade 1 for maior que a quantidade de pontos da cidade 2
      {
        printf("\n E o grande vencedor é:\n"); //Exibe a mensagem de que a cidade 1 é a vencedora
        printf("%s - %s com %d pontos! Parabéns!\n", codigo, nome, ponto1);  //Exibe o código, nome e quantidade de pontos da cidade 1
        printf("%s - %s perdeu pontuando apenas %d pontos.", codigo2, nome2, ponto2); //Exibe o código, nome e quantidade de pontos da cidade 2
      }
      else // Se a quantidade de pontos da cidade 1 for menor que a quantidade de pontos da cidade 2
      {
        printf("\n E o grande vencedor é:\n"); //Exibe a mensagem de que a cidade 2 é a vencedora
        printf("%s - %s com %d pontos! Parabéns!\n", codigo2, nome2, ponto2); //Exibe o código, nome e quantidade de pontos da cidade 2
        printf("%s - %s perdeu pontuando apenas %d pontos.", codigo, nome, ponto1); //Exibe o código, nome e quantidade de pontos da cidade 1
      }
    }
    break; //Finaliza o caso 1
  case 2: //Caso queira ver as regras do jogo
    printf("\n=== REGRAS - SUPER TRUNFO ===\n"); //Exibe as regras do jogo
    printf("\n1. Seu objetivo é pontuar mais.\n"); //Exibe a regra 1
    printf("\n2. Pontua quem: 2.1 - tiver maior população\n2.2 - Obtiver menor densidade populacional\n2.3 - Obtiver maior área\n2.4 - Obtiver maior PIB\n2.5 - Obtiver maior PIB per capita\n2.6 - Obtiver maior quantidade de pontos turísticos."); //Exibe a regra 2
    break; //Finaliza o caso 2
  case 3: //Caso queira sair
    printf("Você escolheu sair."); //Exibe a mensagem de que o jogador escolheu sair
    break; //Finaliza a opção 3
  default: //Caso escolha uma opção inválida
    printf("Opção inválida."); //Exibe a mensagem de que a opção escolhida é inválida
    break; //Finaliza a opção inválida
}
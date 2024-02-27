#include <stdio.h>

int main() {
    // 1. Velocidade em m/s para km/h
    float velocidadeEmMetrosPorSegundo;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velocidadeEmMetrosPorSegundo);
    float velocidadeEmKmPorHora = velocidadeEmMetrosPorSegundo * 3.6;
    printf("Velocidade em km/h: %.2f\n", velocidadeEmKmPorHora);

    // 2. Horas e minutos para minutos
    int horas, minutos;
    printf("Digite o valor em horas: ");
    scanf("%d", &horas);
    printf("Digite o valor em minutos: ");
    scanf("%d", &minutos);
    int totalMinutos = horas * 60 + minutos;
    printf("Equivalente em minutos: %d\n", totalMinutos);

    // 3. Minutos para horas e minutos
    int totalMinutos2;
    printf("Digite um valor em minutos: ");
    scanf("%d", &totalMinutos2);
    int horas2 = totalMinutos2 / 60;
    int minutosRestantes2 = totalMinutos2 % 60;
    printf("Equivalente em horas e minutos: %d horas e %d minutos\n", horas2, minutosRestantes2);

    // 4. Dólar para Real
    float taxaDolar, dolares;
    printf("Digite a taxa de câmbio do dólar para o real: ");
    scanf("%f", &taxaDolar);
    printf("Digite o valor em dólares: ");
    scanf("%f", &dolares);
    float valorEmReal = taxaDolar * dolares;
    printf("Valor em real: %.2f\n", valorEmReal);

    // 5. Soma dos dígitos de um número
    int numero;
    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);
    int unidades = numero % 10;
    int dezenas = (numero / 10) % 10;
    int centenas = numero / 100;
    int somaDigitos = unidades + dezenas + centenas;
    printf("Soma dos dígitos: %d\n", somaDigitos);

    // 6. Velocidade em km/h para m/s
    float velocidadeEmKmPorHora2;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeEmKmPorHora2);
    float velocidadeEmMetrosPorSegundo2 = velocidadeEmKmPorHora2 / 3.6;
    printf("Velocidade em m/s: %.2f\n", velocidadeEmMetrosPorSegundo2);

    // 7. Soma dos dois primeiros e diferença dos dois últimos números
    int num1, num2, num3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int soma2 = num1 + num2;
    int diferenca2 = num2 - num3;
    printf("Soma dos dois primeiros: %d\nDiferença dos dois últimos: %d\n", soma2, diferenca2);

    // 8. Divisão da soma pela subtração
    int num4, num5;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num4, &num5);
    float divisao = num4 / (float)(num4 - num5);
    printf("Resultado da divisão: %.2f\n", divisao);

    // 9. Números em ordem inversa
    int num6, num7;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num6, &num7);
    printf("Ordem inversa: %d, %d\n", num7, num6);

    // 10. Quociente e resto da divisão
    int num8, num9;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num8, &num9);
    int quociente2 = num8 / num9;
    int resto2 = num8 % num9;
    printf("Quociente: %d\nResto: %d\n", quociente2, resto2);

    // 11. Inverso de um número de 3 dígitos
    int numero2;
    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero2);
    int inverso = unidades * 100 + dezenas * 10 + centenas;
    printf("Inverso do número: %d\n", inverso);

    // 12. Novo salário com aumento
    float salarioAtual;
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);
    float novoSalario = salarioAtual * 1.25;
    printf("Novo salário com aumento de 25%%: %.2f\n", novoSalario);

    // 13. 70% do valor em real
    float valorEmReal2;
    printf("Digite um valor em reais: ");
    scanf("%f", &valorEmReal2);
    float setentaPorCento = 0.7 * valorEmReal2;
    printf("70%% do valor em real: %.2f\n", setentaPorCento);

    // 14. Média ponderada de notas
    float nota1, peso1, nota2, peso2, nota3, peso3;
    printf("Digite as três notas e seus respectivos pesos: ");
    scanf("%f %f %f %f %f %f", &nota1, &peso1, &nota2, &peso2, &nota3, &peso3);
    float mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("Média ponderada: %.2f\n", mediaPonderada);

    // 15. Área de um triângulo
    float baseTriangulo, alturaTriangulo;
    printf("Digite a base e altura do triângulo: ");
    scanf("%f %f", &baseTriangulo, &alturaTriangulo);
    float areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
    printf("Área do triângulo: %.2f\n", areaTriangulo);

    // 16. Área de um quadrado
    float ladoQuadrado;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &ladoQuadrado);
    float areaQuadrado = ladoQuadrado * ladoQuadrado;
    printf("Área do quadrado 2f/n , areaQuadrado);

  // 17. Área de um retângulo
    float baseRetangulo, alturaRetangulo;
    printf("Digite a base e altura do retângulo: ");
    scanf("%f %f", &baseRetangulo, &alturaRetangulo);
    float areaRetangulo = baseRetangulo * alturaRetangulo;
    printf("Área do retângulo: %.2f\n", areaRetangulo);
    
    // 18. Comprimento de uma circunferência
    float raioCircunferencia;
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raioCircunferencia);
    float comprimentoCircunferencia = 2 * 3.14 * raioCircunferencia;
    printf("Comprimento da circunferência: %.2f\n", comprimentoCircunferencia);
    
    // 19. Volume de uma esfera
    float raioEsfera;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raioEsfera);
    float volumeEsfera = (4 * 3.14 * raioEsfera * raioEsfera * raioEsfera) / 3;
    printf("Volume da esfera: %.2f\n", volumeEsfera);
    
    // 20. °C para °F
    float temperaturaCelsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);
    float temperaturaFahrenheit = (9 * temperaturaCelsius + 160) / 5;
    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaFahrenheit);
    
    // 21. °F para °C
    float temperaturaFahrenheit2;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit2);
    float temperaturaCelsius2 = (5 * temperaturaFahrenheit2 - 160) / 9;
    printf("Temperatura em Celsius: %.2f\n", temperaturaCelsius2);
    
    // 22. km para m
    float distanciaKm;
    printf("Digite a distância em quilômetros: ");
    scanf("%f", &distanciaKm);
    float distanciaMetros = distanciaKm * 1000;
    printf("Distância em metros: %.2f\n", distanciaMetros);
    
    // 23. kg para g
    float pesoKg;
    printf("Digite o peso em quilogramas: ");
    scanf("%f", &pesoKg);
    float pesoGramas = pesoKg * 1000;
    printf("Peso em gramas: %.2f\n", pesoGramas);

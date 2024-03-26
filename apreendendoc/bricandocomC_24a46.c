#include <stdio.h>
int main() {
    // Exercício 24
    float metros, centimetros;
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("%.2f metros equivalem a %.2f centímetros\n\n", metros, centimetros);

    // Exercício 25
    int metrosInt, km, metrosRestantes;
    printf("Digite um número inteiro de metros: ");
    scanf("%d", &metrosInt);
    km = metrosInt / 1000;
    metrosRestantes = metrosInt % 1000;
    printf("%d metros correspondem a %d km e %d metros\n\n", metrosInt, km, metrosRestantes);

    // Exercício 26
    int dias, semanas, diasRestantes;
    printf("Digite um número inteiro de dias: ");
    scanf("%d", &dias);
    semanas = dias / 7;
    diasRestantes = dias % 7;
    printf("%d dias correspondem a %d semanas e %d dias\n\n", dias, semanas, diasRestantes);

    // Exercício 27
    int segundos, horas, minutos, segundosRestantes;
    printf("Digite um número inteiro de segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;
    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos\n\n", segundos, horas, minutos, segundosRestantes);

    // Exercício 28
    int horasInt, semanas2, dias2, horasRestantes;
    printf("Digite um número inteiro de horas: ");
    scanf("%d", &horasInt);
    semanas2 = horasInt / 168;
    dias2 = (horasInt % 168) / 24;
    horasRestantes = horasInt % 24;
    printf("%d horas correspondem a %d semanas, %d dias e %d horas\n\n", horasInt, semanas2, dias2, horasRestantes);

    // Exercício 29
    int meses, anos, mesesRestantes;
    printf("Digite um número inteiro de meses: ");
    scanf("%d", &meses);
    anos = meses / 12;
    mesesRestantes = meses % 12;
    printf("%d meses correspondem a %d anos e %d meses\n\n", meses, anos, mesesRestantes);

    // Exercício 30
    int minutosInt, dias3, horas3, minutosRestantes;
    printf("Digite um número inteiro de minutos: ");
    scanf("%d", &minutosInt);
    dias3 = minutosInt / 1440;
    horas3 = (minutosInt % 1440) / 60;
    minutosRestantes = minutosInt % 60;
    printf("%d minutos correspondem a %d dias, %d horas e %d minutos\n\n", minutosInt, dias3, horas3, minutosRestantes);

    // Exercício 31
    int binario, decimal = 0, base = 1, resto;
    printf("Digite um número binário (4 dígitos): ");
    scanf("%d", &binario);
    while (binario > 0) {
        resto = binario % 10;
        decimal += resto * base;
        binario /= 10;
        base *= 2;
    }
    printf("O equivalente em decimal é: %d\n\n", decimal);

    // Exercício 32
    int numero, inverso, diferenca;
    printf("Digite um número inteiro (3 dígitos): ");
    scanf("%d", &numero);
    inverso = 0;
    inverso = inverso * 10 + numero % 10;
    numero = numero / 10;
    inverso = inverso * 10 + numero % 10;
    numero = numero / 10;
    inverso = inverso * 10 + numero % 10;
    diferenca = numero - inverso;
    printf("A diferença entre o número e seu inverso é: %d\n\n", diferenca);

    // Exercício 33
    int soma = numero + inverso;
    printf("A soma do número e seu inverso é: %d\n\n", soma);

    // Exercício 34
    float num1, num2, num3, media;
    printf("Digite três números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    media = (num1 + num2 + num3) / 3;
    printf("A média dos números é: %.2f\n\n", media);

    // Exercício 35
    int num4, somaDigitos = 0;
    printf("Digite um número inteiro (4 dígitos): ");
    scanf("%d", &num4);
    somaDigitos = (num4 % 10) + ((num4 / 10) % 10) + ((num4 / 100) % 10) + (num4 / 1000);
    printf("A soma dos elementos do número é: %d\n\n", somaDigitos);

    // Exercício 36
    int anos2, meses2, dias4;
    printf("Digite a idade em anos, meses e dias (formato: anos meses dias): ");
    scanf("%d %d %d", &anos2, &meses2, &dias4);
    int idadeEmDias = anos2 * 365 + meses2 * 30 + dias4;
    printf("A idade expressa apenas em dias é: %d dias\n\n", idadeEmDias);

    // Exercício 37
    int idadeEmDias2;
    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias2);
    anos2 = idadeEmDias2 / 365;
    meses2 = (idadeEmDias2 % 365) / 30;
    dias4 = (idadeEmDias2 % 365) % 30;
    printf("A idade expressa em anos, meses e dias é: %d anos, %d meses e %d dias\n\n", anos2, meses2, dias4);

    // Exercício 38
    //////////////////////////////////

    // Calcula a soma das frações
    //int somaNumerador = numerador1 * denominador2 + numerador2 * denominador1;
    ///int somaDenominador = denominador1 * denominador2;

    // Exibe o resultado em forma de fração
    //printf("A soma das frações é: %d/%d\n\n", somaNumerador, somaDenominador);

    // Exercício 39
    float a, b, c, d, e, f, x, y;
    printf("Digite os coeficientes a, b, c, d, e e f separados por espaço: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    
    // Calcula os valores de x e y
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    // Exibe os resultados
    printf("Os valores de x e y são: %.2f e %.2f\n\n", x, y);

    // Exercício 40
    int anosFumando, cigarrosPorDia;
    float precoCarteira, totalGasto;
    printf("Digite o número de anos que você fuma, o número de cigarros por dia e o preço de uma carteira: ");
    scanf("%d %d %f", &anosFumando, &cigarrosPorDia, &precoCarteira);

    // Calcula a quantidade de dinheiro gasta
    totalGasto = (anosFumando * 365 * cigarrosPorDia * precoCarteira) / 20.0;

    // Exibe o resultado
    printf("O total gasto em cigarros é: R$ %.2f\n\n", totalGasto);

    // Exercício 41
    float custoFabrica, percentDistribuidor = 0.28, percentImpostos = 0.45, custoConsumidor;

    // Lê o custo de fábrica do carro
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    // Calcula o custo ao consumidor
    custoConsumidor = custoFabrica + (custoFabrica * percentDistribuidor) + (custoFabrica * percentImpostos);

    // Exibe o resultado
    printf("O custo ao consumidor é: R$ %.2f\n\n", custoConsumidor);

    // Exercício 42
    float x1, y1, x2, y2;
    printf("Digite as coordenadas dos pontos (x1 y1 x2 y2): ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    // Calcula a distância entre os pontos
    float distancia = calcularDistancia(x1, y1, x2, y2);

    // Exibe o resultado
    printf("A distância entre os pontos é: %.2f\n\n", distancia);

    // Exercício 43
    float a2, b2, c2, d2, e2, f2, x2, y2;
    printf("Digite os coeficientes a, b, c, d, e e f separados por espaço: ");
    scanf("%f %f %f %f %f %f", &a2, &b2, &c2, &d2, &e2, &f2);

    // Calcula os valores de x e y
    x2 = (c2 * e2 - b2 * f2) / (a2 * e2 - b2 * d2);
    y2 = (a2 * f2 - c2 * d2) / (a2 * e2 - b2 * d2);

    // Exibe os resultados
    printf("Os valores de x e y são: %.2f e %.2f\n\n", x2, y2);

    // Exercício 44
    float quantidadeLatao, quantidadeCobre, quantidadeZinco;
    printf("Digite a quantidade de latão em kg: ");
    scanf("%f", &quantidadeLatao);

    // Calcula a quantidade de cobre e zinco
    quantidadeCobre = 0.7 * quantidadeLatao;
    quantidadeZinco = 0.3 * quantidadeLatao;

    // Exibe o resultado
    printf("Para obter %.2f kg de latão, são necessários %.2f kg de cobre e %.2f kg de zinco\n\n", quantidadeLatao, quantidadeCobre, quantidadeZinco);

    // Exercício 45
    int valorSolicitado, notas50, notas10, notas5, notas1;
    printf("Digite o valor solicitado em reais: ");
    scanf("%d", &valorSolicitado);

    // Calcula a distribuição ótima de notas
    notas50 = valorSolicitado / 50;
    notas10 = (valorSolicitado % 50) / 10;
    notas5 = ((valorSolicitado % 50) % 10) / 5;
    notas1 = ((valorSolicitado % 50) % 10) % 5;

    // Exibe o resultado
    printf("Distribuição ótima de notas: %d notas de R$ 50, %d notas de R$ 10, %d notas de R$ 5 e %d notas de R$ 1\n\n", notas50, notas10, notas5, notas1);

    // Exercício 46
    float valorMercadoria, entrada, prestacoes;
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valorMercadoria);

    // Calcula o valor da entrada e das prestações
    entrada = (valorMercadoria >= 300) ? valorMercadoria * 0.36 : valorMercadoria * 0.3;
    prestacoes = (valorMercadoria - entrada) / 2;

    // Exibe o resultado
    printf("Para uma mercadoria de R$ %.2f, a entrada é de R$ %.2f e as duas prestações são de R$ %.2f\n", valorMercadoria, entrada, prestacoes);

    return

}
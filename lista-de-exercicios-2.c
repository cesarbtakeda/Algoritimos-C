#include<stdio.h>
int main (void) {
/*
//Ex1 Lista 2
	int a=0;
	printf("\n Digite um numero para saber eh ou nao negativo: ");
	scanf("%i",&a);
	
	if (a<0)
	{
		printf("\n Seu numero eh negativo: [%d] ",a);
	}
	
	else {
		printf("\n Seu numero eh positivo: [%d] ", a);
	}
*/
/*
	//Ex2 Lista 2
	
	int a=0;
	printf("\n Digite um numero para saber seu meio: ");
	scanf("%i",&a);
	if (a >= 0 && a <= 9) {
		printf("\n O seu valor esta etre 0 e 9, [%d] ",a);
	}
else {
	printf("\n O seu valor nao esta etre 0 e 9, [%d] ",a);
}
*/

/*	
	//ex3 lista 2
	int a=0,b=0;float c=0;
	printf("\n Digite um numero (numerador) para ser calculado sua divisao; Digite um numero (denominador) para ser calculado sua divisao: ");
	scanf("%i%i",&a,&b);
	c=(a/b); 
	if (a==0) {
		printf("\n Seu denominador e igual a zero [%.2f], nao eh mais possivel dividir",a);
	}else{
		printf("\n Seu denomiador e maior que zero [%.2f] porem nao da mais para dividir",a);}


*/	


/*
//ex4 lista 2
int i=0;
float v[2],m=0,s=0;
do{
	printf("\n Digite as duas notas do aluno [%d]: ",i);scanf("%f",&v[i]);
	s+=v[i];
	i++;
}while(2>i);
m=(s/2);
printf("\n A media do aluno foi: [%.2f] ", m); 
if(m >= 5) {
	printf("\n O aluno foi aprovado ");
}
else { printf("\n O aluno foi reprovado. ");
}
*/
/*
//Ex5 lista 2

float a=0,b=0;
printf("\n Digite dois valores: ");scanf("%f%f",&a,&b);
if (a>b) {printf("\n O valor 1 [%.2f] eh maior que o valor 2 [%.2f] ", a,b);}
else {printf("\n O valor 2 [%.2f] eh maior que o valor 1 [%.2f] ",b,a);
}

*/
/*
//ex6 lista 2
float a=0,b=0;
printf("\n Digite os dois valores para deixar em ordem crecente: "); scanf("%f%f",&a,&b);
if (a>b) {printf("\n Os valores em ordem crecente eh [%.2f], [%.2f]", b,a);
} else{
	printf("\n Os valores em ordem crecente eh [%.2f], [%.2f]",a,b);
}

*/
/*
//ex7 lista 2, aumento de 50 e 70

float s=0;
printf("\n Digite seu salario para calcular o aumento do novo salario: ");scanf("%f",&s);
if (s<=1000.00) {
	s=(s+50);printf("\n Seu novo salario eh de: [%.2f]", s);
}
else if (s>=1000.0) {s=(s+70);printf("\n Seu salario novo eh de: [%.2f]", s);
}
*/

/*
//ex8 lista 2
int minutos_usados;float valor_conta;
printf("\n Digite a quantidade de minutos utilizados no mes: ");scanf("%d", &minutos_usados);
if (minutos_usados <= 50) {valor_conta = 50.0;   } else {int minutos_excedentes = minutos_usados - 50;valor_conta = 50.0 + (minutos_excedentes * 1.5);}printf("\n Valor da conta: R$ %.2f\n", valor_conta);
*/

//ex9 lista 2
int a=0;printf("Digite um ano: ");scanf("%d", &a);if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {printf("Ano Bissexto\n");} else {printf("Ano Nao-Bissexto\n");}




	return 0;
}

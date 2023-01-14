#include <stdio.h>
#include <locale.h>

struct endereco{
char rua[50];
int numero;
char cidade[30];
};
struct cadastro{
char nome[50];
int idade;
struct endereco ender; //Declara variável ender do tipo endereco
};
int main(void){
setlocale(LC_ALL, "Portuguese");
struct cadastro c[3]; //Cria o cadastro c (cliente), de 3 posições
int i;
for(i=0; i<3; i++){ //Laço de coleta de dados
printf("Nome do cliente %d: ", i);
fflush(stdin); //Limpa buffer teclado
scanf("%49[^\n]", c[i].nome);
printf("Idade do cliente %d: ", i);
scanf("%d", &c[i].idade);
printf("Endereço do cliente %d\n", i);
printf("Rua: ");
fflush(stdin);
scanf("%49[^\n]", c[i].ender.rua);
printf("Número: ");
scanf("%d", &c[i].ender.numero);
printf("Cidade: ");
fflush(stdin);
scanf("%29[^\n]", c[i].ender.cidade);
}
char repetir;
do{
repetir = 'n';
printf("Consultar dados do cliente [0, 1 ou 2]: ");
scanf("%d", &i);
printf("Nome: %s \n Idade: %d \n", c[i].nome, c[i].idade);
printf("Endereço: Rua %s, %d, %s.", c[i].ender.rua, c[i].ender.numero, c[i].ender.cidade);
printf("Deseja fazer outra consulta? [s/n]");
fflush(stdin);
scanf("%c", &repetir);
} while(repetir == 's');
return 0;
}

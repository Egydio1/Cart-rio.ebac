#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int registrar()
{
	 char arquivo[45];
     char cpf[45];
     char nome[45];
     char sobrenome[45];
     char cargo[45];
     
     printf("Digite o CPF a ser registrado: \n\n");
     scanf("%s", cpf);
     
     strcpy(arquivo, cpf);
     
     FILE *file;
     file = fopen(arquivo, "w");
     fprintf(file, cpf);
     fclose(file);
     file= fopen(arquivo, "a");
     fprintf(file, ",");
     fclose(file);
     
     printf("Digite o nome a ser registrado: \n\n");
     scanf("%s", nome);
     file = fopen(arquivo,"a");
     fprintf(file, nome);
     fclose(file);
     
     printf("Digite o sobrenome a ser cadastrado: \n\n");
     scanf("%s", sobrenome);
     file = fopen(arquivo, "a");
     fprintf(file, sobrenome);
     fclose(file);
     
     printf("Digite o cargo a ser registrado: \n\n");
     scanf("%s", cargo);
     file = fopen(arquivo, "a");
     fprintf(file, cargo);
     fclose(file); 
     
     system("pause");
     
     
     
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");
	
     char cpf[45];
     char conteudo[225];
     printf("Digite o cpf a ser consultado: \n\n");
     scanf("%s", cpf);
     
     FILE *file;
     file = fopen(cpf, "r");
     
     if(file == NULL)
     {
     	printf("Arquivo não localizado\n");
	 }
	 
	 while(fgets(conteudo,225, file) != NULL)
	 {
	 	printf("Informações do usuário consultado: \n\n");
	 	printf ("%s", conteudo);
	 	printf("\n\n");
	 }
	 system("pause");
	 
}
int deletar()
{
	printf("Você escolheu o Deletar Nomes\n\n");
	system("pause");
}




		


int main()
{
	
	int opcao=0;
	
    int laco=1;
	for (laco=1;laco=1;)
	
	{
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("### Cartório da EBAC ### \n\n");
	printf("Escolha opção desejada do menu: \n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - Sair\n\n");
	printf("Opção: ");
	
	
	
	scanf("%d", &opcao);
	
	
	
	system("cls");

	
	if(opcao==1)
	{
		printf("Você escolheu a opção de Registrar Nomes\n");
		system("pause");
	}
	switch (opcao)
	{
	
	case 1:
		     registrar();
		     break;
case 2:
			consultar();
			break;
case 3:
			deletar();
			break;
case 4: 
        printf("Obrigado!");
        return 0;
        break;
default:
			printf("Esta opção não está disponível");
			system("pause");
				break;
			}
			
}


}

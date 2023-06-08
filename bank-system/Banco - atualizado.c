#include <stdio.h>
#include <stdlib.h>
#include <locale.h>  
#include <string.h> 
#include "Saque.h" // estudar bb externa
#include "transf.h"
#include "dep.h"
#include "pagamento.h"
#include "saldo.h"

//fgets(nome, 100, stdin);
//float saldo;


#define MAX 50

int insere_senha, verifica_senha;
char empresa [50], nome [50];



cadastrof()

          { 	   
          
          int cpf, tel, cep, datanasc, sexo, cnpj, conta, i;
          char senha[4];
			          
          
          printf("Ol�! Bem vindo ao cadastro. N�s precisaremos de algumas informa��es pessoais.\n\n");
          printf("AVISO: Pode utilizar caracteres especiais nos campos correspondentes a n�meros.");
          
          printf("\n\n\n\nDigite o seu nome: ");
          scanf ("%s", &nome);
          fgets(nome,MAX,stdin);  // estudar fgets
		  printf("\nDigite o seu CPF: ");
          scanf ("%d", &cpf);
          printf("\nDigite um telefone para contato: ");
          scanf ("%d", &tel);
          printf("\nDigite o seu CEP: ");
          scanf ("%d", &cep);
          printf("\nDigite a sua data de nascimento (EX: DD/MM/AAAA): "); 
          scanf ("%d", &datanasc);
          printf("\nEscolha o tipo de conta deseja abrir:\n");
          printf("(1) Conta poupan�a ou (2) Conta corrente ou (3) Conta sal�rio:\n "); 
          scanf ("%d", &conta);
          
         
          if(conta==1)
           {
                       
           printf("\nSua op��o � CONTA POUPAN�A\n\n");
      }
          else if(conta==2)
      
      {
          printf("\nSua op��o � CONTA CORRENTE\n\n");
          }
       
         else if (conta==3)
       { 
          printf("\nSua op��o � CONTA SAL�RIO\n\n");
          } 
          
          
          printf("\nDigite uma senha de 4 digitos: ");
          // scanf ("%d", &senha);
          for (i=0; i<4; i++) {
          	senha[i] = getch();
          	putchar ('*');
		  }
		  	senha[i]= ' ';
          
          printf("\nDigite o n�mero correspondente ao sexo:\n");
          printf("(1) Masculino  ou  (2) Feminino:\n ");
          scanf ("%d", &sexo);
          
          if(sexo==1) 
      
      {
           printf("O sexo � MASCULINO\n");
           printf ("\n\n\tCliente cadastrado com sucesso!\n\n"); 
           getch();
           main();
      }
      
          else if(sexo==2)
      
      {
          printf("O sexo � FEMININO\n");
          printf ("\n\n\tCliente cadastrada com sucesso!\n\n");
          getch();
          main();
          } 
       }
       
       
contaf()

        {

		  
   		int menu;
		
       printf("\n\n");
       printf("\t\t\t\tSeja bem-vindo,%s!", nome);
       printf("\n\n");  
       printf("\n\n");  
       printf("\t\t\t/-------( CAIXA ELETR�NICO )-------\\\n");
       printf("\t\t\t|                                  |\n");
       printf("\t\t\t| 1 - DEP�SITO                     |\n");
       printf("\t\t\t| 2 - PAGAMENTO                    |\n");
       printf("\t\t\t| 3 - TRANSFER�NCIA                |\n");
       printf("\t\t\t| 4 - SAQUE                        |\n");
       printf("\t\t\t| 5 - SALDO ATUAL                  |\n");
       printf("\t\t\t| 0 - SAIR DA CONTA                |\n");
       printf("\t\t\t|                                  |\n");
       printf("\t\t\t");
       printf("\\----------------------------------/\n\n");
       
       printf("\n\t\t\t\tDIGITE UMA OP��O: ");
       scanf("%d", &menu);
       
       switch (menu)
       {
                   case 1:
                   deposito();
                   break;
                   
                   case 2:
                   pag();
                   break;
                   
                   case 3:
                   transferencia();
                   break;
                   
                   case 4:
                   sacar();
                   break;
                
                   case 5:
                   saldo();
                   break; 
                   
                   case 0:
                   return main();
                   break;
                        
                   default:
                   getch(); }
}	


cadastroj ()

          {
		  		 
          int cnpj, cep, datafund, senha[4], conta, tel, i;
          char nome[15];
          
          printf("Ol�! Bem vindo ao cadastro. N�s precisaremos de algumas informa��es pessoais.\n\n");
          printf("AVISO: N�O utilizar caracteres especiais nos campos correspondentes a n�meros.");
          
          printf("\n\n\n\nDigite o nome da empresa: ");
          scanf ("%s", &empresa);
          fgets(empresa, 40, stdin);
          printf("\nDigite o CNPJ da sua empresa: ");
          scanf ("%d", &cnpj);
          printf("\nDigite um telefone para contato: ");
          scanf ("%d", &tel);
          printf("\nDigite o CEP da sua empresa: ");
          scanf ("%d", &cep);
          printf("\nDigite a data de funda��o (EX: DD/MM/AAAA): ");
          scanf ("%d", &datafund);
          printf("\nEscolha o tipo de conta deseja abrir: ");
          printf("(1) Conta poupan�a ou (2) Conta corrente ou (3) Conta sal�rio:\n ");
          scanf ("%d", &conta);
               
          if(conta==1)
      
      {
           printf("\nSua op��o � CONTA POUPAN�A\n\n");
           
      }
      
          else if(conta==2)
      
      {
          printf("\nSua op��o � CONTA CORRENTE\n\n");
          
       }
         else if (conta==3)
       { 
          printf("\nSua op��o � CONTA SAL�RIO\n\n");
          
          }    
	
           printf("\nDigite uma senha de 4 digitos:\n");
          // scanf ("%d", &senha);
          for (i=0; i<4; i++) {
          	senha[i] = getch();
          	putchar ('*');
		  }
		  	senha[i]= ' ';
          printf("\n\n\tEmpresa cadastrada com sucesso!\n");
          getch();
          main();
          }
	 
contaj ()
       
       {
           int menu;
	   	 	 
	   	 
       printf("\n\n");  
	   printf("\t\t\t\tSeja bem-vindo %s",empresa); 
	   printf("\n\n"); 
       printf("\n\n");   
       printf("\t\t\t/-------( CAIXA ELETR�NICO )-------\\\n");
       printf("\t\t\t|                                  |\n");
       printf("\t\t\t| 1 - DEP�SITO                     |\n");
       printf("\t\t\t| 2 - PAGAMENTO                    |\n");
       printf("\t\t\t| 3 - TRANSFER�NCIA                |\n");
       printf("\t\t\t| 4 - SAQUE                        |\n");
       printf("\t\t\t| 5 - SALDO ATUAL                  |\n");
       printf("\t\t\t| 0 - SAIR DA CONTA                |\n");
       printf("\t\t\t|                                  |\n");
       printf("\t\t\t");
       printf("\\----------------------------------/\n\n");
       
       printf("\n\t\t\t\tDIGITE UMA OP��O: ");
       scanf("%d", &menu);
	 

switch (menu)
       {
                   case 1:
                   deposito();
                   break;
                   
                   case 2:
                   pag();
                   break;
                   
                   case 3:
                   transferencia();
                   break;
                   
                   case 4:
                   sacar();
                   break;
                
                   case 5:
                   saldo();
                   break; 
                   
                   case 0:
                   return main();
                   break;
                        
                   default:
                   getch(); }
}	
ajuda()
{ 
       
        printf("1.0 CONTA F�SICA\n\n");
  		printf("�-Para abrir uma conta f�sica, s�o fulcrais os seguintes requisitos e documentos:\n\n\n");
  		printf("1.1 � necess�rio ser brasileiro nato;\n\n");
  		printf("1.2 O titular da conta ou respons�vel pelo titular N�O devem estar com nomes \nassociados � fichas criminais;\n\n");
        printf("1.3 Carteira de identidade/Carteira de trabalho(se obter) e CPF (original). \nMenor de 18 anos deve apresentar carteira de identidade e CPF do respons�vel;\n\n");
		printf("1.4 Comprovante de resid�ncia (emitido nos �ltimos 90 dias);\n\n");
        printf("1.5 Se o titular for maior de 16 e menor de 18 anos, ele deve assinar o contrato de abertura da conta junto com o respons�vel legal;\n\n");
        printf("1.6 Se menor de 16 anos, apenas o respons�vel legal deve assinar o contrato\t de abertura de conta e demais documentos.\n\n\n\n");	 
		
		
		printf("2.0 CONTA JUR�DICA\n\n"); 
		printf("�-Para abrir uma conta jur�dica, s�o fulcrais os seguintes requisitos e\ndocumentos: \n\n\n");
        printf("2.1 De acordo com a Constitui��o Federal Brasileira de 1988, as empresas, \nacima de tudo, devem estar DEVIDAMENTE registradas em cart�rio;\n\n");
        printf("2.2 CPF e RG do empreeendor principal;\n\n");
        printf("2.3 Principais dados da empresa: CNPJ, tipo de empresa (EX: MEI, LTDA) e \ncomprovante de endere�o;\n\n");
        printf("2.4 N�o estar em d�ficit com nenhum outro banco em territ�rio nacional;\n\n");
        printf("2.5 Os s�cios da empresa/ind�stria/firma ou qualquer outro tipo de representa��o N�O devem estar com nomes associados � fichas criminais;\n\n");
        printf("\n\n\n\nPara maiores informa��es, entre em contato com os gerentes de nossa unidade:\n\n\n");
        printf("Gerentes na parte da manh�: ");
        printf("Ighor (21) 965784398 e ");
        printf("Roger (21) 935257132\n");
        printf("\nHor�rio: 8h00 �s 13h00\n\n\n\n");
        printf("Gerentes na parte da tarde: ");
        printf("Matheus (21) 968654241 e ");
        printf("Claudio (21) 977896457\n\n");
        printf("\nHor�rio: 13h00 �s 16h00\n\n");
        
        getch();
        main();
}

main()
       
      {
                    
     
       system ("color 1e"); 
       int menu;
       setlocale(LC_ALL, "Portuguese"); 

//-----------------------------------MENUINICIAL----------------------
      
       printf("\n\n");
       printf ("\t\t\t   $�  BANCO SALGADO DE OLIVEIRA  �$    ");
       printf ("\n\n\t\t\t            Bem vindo!      \n\n");

       printf("\n\n");
       printf("\t\t\t/----------- MENU PRINCIPAL -----------\\\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t|  1 - CADASTRO DE PESSOA F�SICA       |\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t|  2 - CADASTRO DE PESSOA JUR�DICA     |\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t|  3 - ACESSO A CONTA F�SICA           |\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t|  4 - ACESSO A CONTA JUR�DICA         |\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t|  5 - AJUDA                           |\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t|  0 - SAIR DO SISTEMA                 |\n");
       printf("\t\t\t|                                      |\n");
       printf("\t\t\t");
       printf("\\--------------------------------------/\n\n");
       
       printf("\n\t\t\t\tDIGITE UMA OP��O: ");
       scanf("%d", &menu);
       

system("cls");

//------------------------------ Escolha de menus utilizando o SWITCH--
          switch (menu)
          {
             case 1:
                  cadastrof
				  ();
                  break;
             case 2:
			 	  cadastroj();
			 	  break;
             case 3:
                  printf("\n\t\t\t\tDigite sua senha: ");
                  scanf("%i", &verifica_senha);
                  if(insere_senha != verifica_senha)
                  {
                                  printf("\n\t\t\t\tSenha incorreta!");
                                  getch();
                                  main();
                  }
			 	  contaf();
			 	  break;
             case 4:
                  printf("\n\t\t\t\tDigite sua senha: ");
                  scanf("%i", &verifica_senha);
                  if(insere_senha != verifica_senha)
                  {
                                  printf("\n\t\t\t\tSenha incorreta!");
                                  getch();
                                  main();
                  }
			 	  contaj();
			 	  break;
			 case 5:
                  ajuda ();
                  break;	  
             case 0:
                  exit(0); 
                default:
                    printf("Op��o inv�lida! Digite uma op��o existente.\n"); 
                    sleep();
                	return main();           
                      }

return 0;           
          
}

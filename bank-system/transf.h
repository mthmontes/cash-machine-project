transferencia()
{

float saldo_atual, transf;
int opcao;
if (transf<saldo_atual)

{ printf("\n\n");
 printf ("\t\t\t\tSaldo insuficiente\n\n\t\t\t"); 
     return contaf();
	 }
else if (transf>=saldo_atual)
{ printf("\n\n");
   printf ("\t\t\t\tTransfer�ncia conclu�da com sucesso!\n\n\t\t\t"); 
     return contaf();
	 
}
printf("\n\n");
printf("Digite uma op��o\n1 se deseja realizar outra transfer�ncia\n 2 se deseja voltar ao menu inicial");
scanf("%d",&opcao);

if(opcao==1){
return contaf();
}
else if(opcao==2){
     return main();
     }
}

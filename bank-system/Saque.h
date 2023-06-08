sacar()
{
       float dinheiro_sq, saldo;
     printf("\n\n");
 	 printf ("Digite o valor que deseja retirar R$:  ");
 	 scanf ("%f", &dinheiro_sq);
 	 
if(saldo>dinheiro_sq)
{
 	printf("\n\n");		 printf("\t\t\t\tSaque autorizado\n\n\t\t\t");
					 }
else if(saldo<dinheiro_sq)
{
 	printf("\n\n");		 printf("\t\t\t\tSaque Negado\n\n\t\t\t"); 
					 }
}

// float saldo,deposito,transferencia,pagamento,saque;

//if(saldo<0) {
	//		printf ("Você está com saldo negativo. Portanto, é incapaz de realizar operações bancárias.");
	//		}		 
 //if (saldo=0) {
	 //		printf ("Sua conta está zerada");
	//		}
 //if (saldo>0) {
	   //  printf ("Voce está com saldo positivo em sua conta." ,saldo);
		//   }printf("Digite seu saldo");
//scanf("%f",&saldo);			

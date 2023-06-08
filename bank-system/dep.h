void deposito() {
         int menucadastro;
         float cod, saldo;
         
         FILE*arquivoP;
          arquivoP = fopen("arquivo.txt", "a+");
         printf("\n\n");
         printf("Digite a quantidade do depósito: R$  ");
         scanf("%f", &cod);
        cod=saldo;
           fprintf(arquivoP, "%f20.20\n\n%f\n",cod, saldo);
      fclose(arquivoP);
                CHECKPOINT: //associado com o goto, após o erro no menu, retorna para esse ponto.
       printf("\n\n");
       printf("\t 1 - Fazer novo deposito \n");
       printf("\t 2 - MENU INICIAL \n"); 
       printf("\t 0 - FECHAR O PROGRAMA\n");
       printf("\t \n \n DIGITE UMA OPÇÃO:\n");
       scanf("%d", &menucadastro);
       system("cls");
//------------------------------ escolha de menus utilizando o SWITCH
         switch (menucadastro)
          {
             case 1:
                  deposito();
                  break;    
             case 2:
                  main();
                  break;
             case 0: 
                  exit(0);
             
             default:
                    printf("Opção inválida, digite uma opção existente\n");
                    sleep(700); //tempo de espera até a ação
                    goto CHECKPOINT;
                    }

     


}

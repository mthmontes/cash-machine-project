void deposito() {
         int menucadastro;
         float cod, saldo;
         
         FILE*arquivoP;
          arquivoP = fopen("arquivo.txt", "a+");
         printf("\n\n");
         printf("Digite a quantidade do dep�sito: R$  ");
         scanf("%f", &cod);
        cod=saldo;
           fprintf(arquivoP, "%f20.20\n\n%f\n",cod, saldo);
      fclose(arquivoP);
                CHECKPOINT: //associado com o goto, ap�s o erro no menu, retorna para esse ponto.
       printf("\n\n");
       printf("\t 1 - Fazer novo deposito \n");
       printf("\t 2 - MENU INICIAL \n"); 
       printf("\t 0 - FECHAR O PROGRAMA\n");
       printf("\t \n \n DIGITE UMA OP��O:\n");
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
                    printf("Op��o inv�lida, digite uma op��o existente\n");
                    sleep(700); //tempo de espera at� a a��o
                    goto CHECKPOINT;
                    }

     


}

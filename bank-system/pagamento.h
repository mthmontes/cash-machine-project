pag() {

          float pag, saldo_atual;
          printf("\n\n");
          printf("Digite o valor do pagamento: R$  ");
          scanf("%f", &pag);
          
                      if(pag>=saldo_atual) { printf("\n\n");
                      printf("\t\t\t\tSaldo insuficiente!\n\n\t\t\t"); /*system ("color 14");*/
                              }
                      
                      else if(pag)
                       {printf("\n\n");
                           printf("\t\t\t\tPagamento efetuado.\n\n\t\t\t"); /*system ("color 12");*/
                           }
          
          }

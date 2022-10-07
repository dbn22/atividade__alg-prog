#include <stdio.h>
#include<math.h>

//Github: dbn22

int main(void)
{
   //declaração das variaveis usadas 
    float x, y, resultado;
    int op;

  //apresentação aluno
  printf("\n\t Nome: Davy Barbosa Neves\n\t Curso: Análise e Desenvolvimento de Sistemas\n\t Matricula: 202222465");

  //Serie de repetições até não haver opção de operação
  while(op != 7){
  /* Dentro de while ficando todas as opções de operações(op)*/
    
    printf(
        "\n\t1 - SOMA \n\t2 - SUBTRAÇÃO \n\t3 - MULTIPLICAÇÃO \n\t4 - DIVISÃO "
        "\n\t5 - POTENCIACAO \n\t6 - RAIZ QUADRADA \n\t7 - ENCERRAR\n\t");
    printf("\n\tDigite o valor da operação: ");  
    scanf("%d", &op); 

    //abaixo os switch com as case, sendo que as case vão ser usadas para ter as simulações de calculos//
    switch(op){
      case 1: //ADIÇÃO
        
      //Solita o primeiro valor ao user
      printf("\n\t Digite o primeiro valor: ");
        scanf("%f", &x);

      printf("\n\t Digite o segundo valor: ");
        scanf("%f", &y);

      // Formulas dos possiveis resultados

      resultado = x + y;
      printf("O resultado é: %2.f", resultado);

      break;
      
      case 2: //SUBTRAÇÃO
      
      //Pedido de dados:
      printf("\n\t Digite o primeiro valor:");
        scanf("%f", &x);
      printf("\n\t Digite o segundo valor:");
        scanf("%f", &y);

      // formula de resultado
      resultado = x - y;
      printf("O Resultado é: %2.f", resultado);

      break;
      
      case 3: //MULTIPLICAÇÃO
      
      //Pedido de dados:
      printf("\n\t Digite o primeiro valor:");
        scanf("%f", &x);
      printf("\n\t Digite o segundo valor:");
        scanf("%f", &y);

      // formula de resultado
      resultado = x * y;
      printf("O Resultado é: %2.f", resultado);

      break;

      case 4: //DIVISÃO
      
      //Pedido de dados:
      printf("\n\t Digite o primeiro valor:");
        scanf("%f", &x);
      printf("\n\t Digite o segundo valor:");
        scanf("%f", &y);

      if (x==0 || y==0){
        printf("Um dos valores é zero, tente de novo\n\t");
      }else{
        resultado = x / y;
        printf("O resultado é: %2.f", resultado);
      }

      break;

      case 5: //POTENCIAÇÃO
      
      //Pedido de dados:
      printf("\n\t Digite o primeiro valor:");
        scanf("%f", &x);
      printf("\n\t Digite o segundo valor:");
        scanf("%f", &y);

      // formula de resultado
      resultado = pow(x,y);
      printf("O Resultado é: %2.f", resultado);

      break;

       case 6:
      //Pedido de dados:
      printf("\nDigite o valor: ");
      scanf("%f", &x);

      //formula de resultado
      resultado = sqrt(x);
      printf("O Resultado é: %.2f", resultado);

      break;

      default:
      printf("Digite um valor válido");
      }  
      
    }
  }


  

  

    /*do
    {
        //printf("Digite seu nome: \n");
          //scanf("%d", &nome);
        //printf("Digite seu curso: \n");
          //scanf("%d", &curso);
        printf("\n\t1 - SOMA \n\t2 - SUBTRAÇÃO \n\t3 - MULTIPLICAÇÃO \n\t4 - DIVISÃO \n\t5 - POTENCIACAO \n\t6 - RAIZ QUADRADA \n");
            scanf("%i", &op);

        printf("\nDigite o primeiro valor: ");
     scanf("%f", &x);
          printf("\nDigite o segundo valor: "); 
     scanf("%f", &y);
     switch (op){
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:           
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;
            break;
       case 5 : resultado = pow(x, y);
            break;
        case 6:
            resultado = sqrt(x);
            break;
     }
    } while (op != 7);*/
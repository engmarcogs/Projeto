#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
   

 char email[1000][20],nome[1000][50],sexo[1000][11],vacinacao[1000][11],endereco[1000][50],emailbackup[1000][20],sexobackup[1000][11],vacinacaobackup[1000][11],nomebackup[1000][50],enderecobackup[1000][50];

float altura[1000];

int id[1000],escolhamenu[1000],qtdausuarios;

double alturabackup[1000];


        void coletadedados (){
            int i,idd;
         
          printf("Quantos usu�rios deseja incluir? Obs:m�ximo 1.000! ");
          scanf("%d",&qtdausuarios);
            
            for ( i = 0; i < qtdausuarios; i++)
        {   fflush(stdin);
            printf("Informe o nome completo do %d� usu�rios: ",i+1);
            fgets(nome[i], 50, stdin);
            fflush(stdin);
            system("cls");
        do
        {
            printf("Agora informe o E-mail do %d� usu�rios: ",i+1);
            fgets(email[i],20,stdin);
            fflush(stdin);
            
        }while (strchr(email[i], '@') == 0);
            
            system("cls");
            printf("Agora informe o Endere�o do %d� usu�rio: ",i+1);
            fgets(endereco[i],30,stdin);
            fflush(stdin);
            system("cls");
           do
           {
            printf("Informe a altura do %d� usu�rios: ",i+1);
            scanf("%f",&altura[i]);
            system("cls");
           } while (altura[i]<1 || altura[i] >2);
            
        do
        {    fflush(stdin);
             printf("informe o sexo do %d� usu�rios: Feminino Masculino ou Indiferente:  ",i+1);
             scanf("%s",sexo[i]);
             system("cls");
             
        } while (strcmp(sexo[i], "masculino") !=0 && strcmp(sexo[i], "feminino")!=0&& strcmp(sexo[i], "indiferente")!=0);
        do
        {
             printf("o usu�rios %d� foi vacinado ? Sim ou N�o ",i+1);
             scanf("%s",vacinacao[i]);
             system("cls");
             fflush(stdin);
          
        } while (strcmp(vacinacao[i], "Sim") !=0 && strcmp(vacinacao[i], "sim")!=0 && strcmp(vacinacao[i], "Nao")!=0 && strcmp(vacinacao[i], "nao")!=0);
        
             srand(time(NULL));
             idd=1000+rand()%5000;
             id[i]=idd;
             printf("o id do %d� usu�rios e: %d\n\n",i+1,id[i]);
        }  printf("Para retornar ao menu inicial digite 1!");
            scanf("%d",&escolhamenu); 
            switch (escolhamenu[i])
            {
            case 1:
                main();
                break;
           
               
            default:
                break;
            }
        }
        
        void buscarusuario(){
                
             int i,busca,iddd;
             char emailp[50];
        do
        {
             printf("Digite 1 para busca pelo ID ou qualquer valor para buscar por E-mail; ");
             scanf("%d",&busca);
                    
            switch (busca)
            {
            case 1:
                printf("Digite o id :");
                scanf("%d",&iddd);
             
             for ( i = 0; i < qtdausuarios; i++)
             {  if (iddd==id[i])
                { 
                printf("\nnome: %s\ne-mail: %s\nSexo: %s\nEndereco %s\naltura %.2lf\nvacina: %s\n",nome[i],email[i],sexo[i],endereco[i],altura[i],vacinacao[i]);
                }
                else printf("erro");
             }
                break;
                    
            case 2:
                printf("Digite o E-mail:");
                fgets(emailp,50,stdin);
             
             for ( i = 0; i < qtdausuarios; i++)
             {  if (strcmp(email[i],emailp)==0)
                {
                 printf("\nNome:%s \nE-mail: %s\nSexo: %s\nEndere�o %s\nAltura %.2lf\nVacina: %s\n",nome[i],email[i],sexo[i],endereco[i],altura[i],vacinacao[i]);
                }else printf("erro");
             }
              break;
            }
        } while (busca==1 && busca == 2);
            printf("Para retornar ao menu inicial digite 1!");
            scanf("%d",&escolhamenu); 
            switch (escolhamenu[i])
            {
            case 1:
                main();
                break;
            
            default:
                break;
            }
                           }
               
        void backup(){
            int i,idd;
        for ( i = 0; i < qtdausuarios; i++)
        {   fflush(stdin);
            printf("Informe o nome completo do %d usu�rios: ",i+1);
            fgets(nomebackup[i], 50, stdin);
            fflush(stdin);
            system("cls");
            do
            {
                printf("Agora informe o E-mail do %d usu�rios ",i+1);

            fgets(emailbackup[i],20,stdin);
            fflush(stdin);
            } while (strchr(email[i], '@') == 0);
            
            
            
            system("cls");
            printf("Agora informe o endere�o do usu�rios %d",i+1);
            fgets(enderecobackup[i],30,stdin);
            fflush(stdin);
            
            fflush(stdin);
            printf("Informe a altura do usu�rios %d",i+1);
                scanf("%lf",&alturabackup[i]);
            do
            {
             printf("informe o sexo do %d usu�rios: Feminino Masculino ou Iindiferente ",i+1);
             scanf("%s",sexobackup[i]);
             fflush(stdin);
            } while (strcmp(sexobackup[i], "masculino") !=0 && strcmp(sexobackup[i], "feminino")!=0&& strcmp(sexobackup[i], "indiferente")!=0);
             do
            {
             printf("o usuario %d foi vacinado ? 1-Sim ou 2-Nao",i+1);
             scanf("%s",vacinacaobackup[i]);
             fflush(stdin);
             srand(time(NULL));
        
           
           idd=1000+rand()%5000;
           id[i]=idd;
           printf("o id do %d usu�rios e: %d\n\n",i+1,id[i]);
            } while (strcmp(vacinacaobackup[i], "Sim") !=0 && strcmp(vacinacaobackup[i], "sim")!=0&& strcmp(vacinacaobackup[i], "Nao")!=0&& strcmp(vacinacaobackup[i], "nao")!=0);
        }
         printf("Para retornar ao menu inicial digite 1!");
            scanf("%d",&escolhamenu); 
            switch (escolhamenu[i])
            {
            case 1:
                main();
                break;
            
            default:
                break;
            }
        }

        void editarusuario(){
            
                int i,busca,iddd,op;
                char novonome[50];
                char emailp[50];
              
               do
               {     printf("Digite 1 para buscar o usu�rio pelo ID ou qualquer valor para busca por e-mail: ");
                     scanf("%d",&busca);
                    switch (busca)
                {
                case 1:
                    
                    printf("Digite o ID :");
                    scanf("%d",&iddd);
                    
                    for ( i = 0; i < qtdausuarios; i++){
                    
                    if (iddd==id[i])
                    {   printf("\nDados do usu�rio\n");
                        printf("nome:%s \ne-mail: %s\nSexo: %s\nEndere�o: %s\nAltura: %.2f\nVacina: %s",nome[i],email[i],sexo[i],endereco[i],altura[i],vacinacao[i]);
                        
                    }else printf("erro");
                    }
                    break;
                    case 2:
                    
                    fflush(stdin);
                    printf("Digite o E-mail:");
                    fgets(emailp,50,stdin);
                    
                    
                for ( i = 0; i < qtdausuarios; i++)
                {
                    if (strcmp(email,emailp)==0)
                    {   printf("\nDados do usu�rio\n");
                        printf("nome:%s \ne-mail: %s\nSexo: %s\nEndere�o: %s\nAltura: %.2lf\nVacina: %s",nome[i],email[i],sexo[i],endereco[i],altura[i],vacinacao[i]);
                    }else printf("erro");
                    
                }break;
               }
               }while (busca==1 && busca == 2);
            
           
            printf("\nQual dado deseja Editar! \n 1-Nome \n 2-E-mail \n 3-Sexo \n 4-Endere�o \n 5-Altura \n 6-Vacina \n");
            scanf("%d",&op);
            
            switch (op)
            {  
            case 1:
                getchar();
                printf("Insira o novo nome:");
                fgets(nome,50,stdin);
                printf("Novo nome inserido com sucesso!\n");
                
                printf("nome:%s\n", nome);
                printf("E-mail:%s\n", email);
                printf("Sexo:%s\n", sexo);
                printf("endereco:%s\n", endereco);
                printf("altura:%.2f\n", altura[i]);
                printf("vacina��o:%s\n", vacinacao);
                printf("nome:%s\n", nome);
                
                
                
                break;
            case 2:
               do
               {getchar();
                printf("Insira o novo E-mail\n");
                fgets(email,50,stdin);
               
                printf("Novo E-mail inserido com sucesso!\n");
                
                printf("Nome:%s\n", nome);
                printf("E-mail:%s\n", email);
                printf("Sexo:%s\n", sexo);
                printf("Endereco:%s\n", endereco);
                printf("Altura:%.2f\n", altura[i]);
                printf("Vacina��o:%s\n", vacinacao);          
               } while (strchr(email[i], '@') == 0);
             break;
             case 3:
                do
               {getchar();
                printf("Insira o novo Sexo\n");
                fgets(sexo,50,stdin);
               
                printf("Novo Sexo inserido com sucesso!\n");
                
                printf("Nome:%s\n", nome);
                printf("E-mail:%s\n", email);
                printf("Sexo:%s\n", sexo);
                printf("Endereco:%s\n", endereco);
                fflush(stdin);
                printf("Altura:%.2f\n", altura[i]);
                printf("Vacina��o:%s\n", vacinacao);
                
               } while (strcmp(sexo[i], "masculino") !=0 && strcmp(sexo[i], "feminino")!=0&& strcmp(sexo[i], "indiferente")!=0);
               break;
               case 4:
                getchar();
                printf("Insira o novo Endere�o\n");
                fgets(endereco,50,stdin);
               
                printf("Novo Endere�o inserido com sucesso!\n");
                
                printf("Nome:%s\n", nome);
                printf("E-mail:%s\n", email);
                printf("Sexo:%s\n", sexo);
                printf("Endereco:%s\n", endereco);
                printf("Altura:%.2f\n", altura[i]);
                printf("Vacina��o:%s\n", vacinacao);
                break;
               case 5:
                do
               {getchar();
                printf("Insira a nova Altura\n");
                scanf("%f",&altura);
               
                printf("Novo Sexo inserido com sucesso!\n");
                
                printf("nome:%s\n", nome);
                printf("E-mail:%s\n", email);
                printf("Sexo:%s\n", sexo);
                printf("endereco:%s\n", endereco);
                
                printf("altura:%.2f\n", altura[i]);
                printf("vacina��o:%s\n", vacinacao);
                printf("nome:%s\n", nome);
                
               } while (strcmp(sexo[i], "masculino") !=0 && strcmp(sexo[i], "feminino")!=0&& strcmp(sexo[i], "indiferente")!=0);
               break;
               case 6:
                do
               {getchar();
                printf("Insira o nova vacina��o\n");
                fgets(vacinacao,50,stdin);
               
                printf("Novo Sexo inserido com sucesso!\n");
                
                printf("nome:%s\n", nome);
                printf("E-mail:%s\n", email);
                printf("Sexo:%s\n", sexo);
                printf("endereco:%s\n", endereco);
                
                printf("altura:%.2f\n", altura[i]);
                printf("vacina��o:%s\n", vacinacao);
                printf("nome:%s\n", nome);
                
               } while (strcmp(sexo[i], "masculino") !=0 && strcmp(sexo[i], "feminino")!=0&& strcmp(sexo[i], "indiferente")!=0);
               break;
               
            default:
                break;
            }
            
            printf("Para retornar ao menu inicial digite 1!");
            scanf("%d",&escolhamenu[i]); 
            switch (escolhamenu[i])
            {
            case 1:
                main();
                break;
            
            default:
                break;
            }
}
                
        void exibirusuarios(){
            int i;

            for ( i = 0; i < qtdausuarios; i++)
            {
                printf("usuario %d: ",i+1);
                
                printf("nome :%s\n ",nome[i] );
                
                printf("E-mail :%s\n ",email[i]);
                
                printf("Sexo :%s\n ",sexo[i]);
                printf("Endere�o :%s\n ",endereco[i]);
                printf("Altura :%0.2f\n ",altura[i]);
                
                printf("Vacina :%s\n ",vacinacao[i]);
                

            }
            printf("Para retornar ao menu inicial digite 1!");
            scanf("%d",&escolhamenu[i]); 
            switch (escolhamenu[i])
            {
            case 1:
                main();
                break;
            
            default:
                break;
            }
        }
    
        void excluirusuario() {
    int i, iddd, j;

    printf("Digite o ID do usu�rio que deseja excluir: ");
    scanf("%d", &iddd);

    for (i = 0; i < qtdausuarios; i++) {
        if (iddd == id[i]) {
            printf("\nUsu�rio exclu�do:\n");
            printf("ID: %d\n", id[i]);
            printf("Nome: %s", nome[i]);
            printf("Email: %s", email[i]);
            printf("Endere�o: %s", endereco[i]);
            printf("Altura: %.2f\n", altura[i]);
            printf("Sexo: %s\n", sexo[i]);
            printf("Vacinado: %s\n\n", vacinacao[i]);

            for (j = i; j < qtdausuarios - 1; j++) {
                strcpy(nome[j], nome[j + 1]);
                strcpy(email[j], email[j + 1]);
                strcpy(endereco[j], endereco[j + 1]);
                altura[j] = altura[j + 1];
                strcpy(sexo[j], sexo[j + 1]);
                strcpy(vacinacao[j], vacinacao[j + 1]);
                id[j] = id[j + 1];
            }

            qtdausuarios--;
            printf("Usu�rio exclu�do com sucesso!\n\n");
            break;
        }
    }

    if (i == qtdausuarios) {
        printf("\nUsu�rio n�o encontrado.\n\n");
    }

    printf("Para retornar ao menu inicial, digite 1: ");
    scanf("%d", &escolhamenu[i]);
    switch (escolhamenu[i]) {
        case 1:
            main();
            break;
    }
}
    
    int main()
    {   setlocale(LC_ALL,"");
        
        int escolha;
        do
        {printf("====== Ol� usu�rio seja bem vindo ========\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("   1. Incluir um usu�rio\n");
        printf("   2. Edite um usu�rio\n");
        printf("   3. Excluir usu�rio\n");
        printf("   4. Buscar usu�rio pelo E-mail do ID\n");
        printf("   5. Exibir todos os usu�rios cadastrados\n");
        printf("   6. Realizar restaura��o de dados\n");
        printf("   7. Encerrar Programa!\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Informe a op��o desejada: ");
        scanf("%d",&escolha);
            switch (escolha)
            {
            case 1:
                coletadedados();
                break;
            case 2: 
                editarusuario();
                break;
            case 3:
                excluirusuario();
                break;   
            case 4:
                buscarusuario();
                break;
            case 5:
                exibirusuarios();
                break;
            default:
                break;
            }
        } while (escolha==1);
        
        
               
        
        
    }
      
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void printSeparator() {
    printf("--------------------------------------------------------------------------------------------------------------------------------\n\n");
}

int main()
{
    setlocale(LC_ALL, "");

    system("clear");
    int jogadaPC, pontoPC = 0, pontoUser = 0, opcao;

    do
    {
        system("clear");
        printf("                                                                                                                               \n"
            "                                                                                                                               \n"
            "          JJJJJJJJJJJ               kkkkkkkk                                                                                   \n"
            "          J:::::::::J               k::::::k                                                                                   \n"
            "          J:::::::::J               k::::::k                                                                                   \n"
            "          JJ:::::::JJ               k::::::k                                                                                   \n"
            "            J:::::J   ooooooooooo    k:::::k    kkkkkkk eeeeeeeeeeee    nnnn  nnnnnnnn    ppppp   ppppppppp      ooooooooooo   \n"
            "            J:::::J oo:::::::::::oo  k:::::k   k:::::kee::::::::::::ee  n:::nn::::::::nn  p::::ppp:::::::::p   oo:::::::::::oo \n"
            "            J:::::Jo:::::::::::::::o k:::::k  k:::::ke::::::eeeee:::::een::::::::::::::nn p:::::::::::::::::p o:::::::::::::::o\n"
            "            J:::::jo:::::ooooo:::::o k:::::k k:::::ke::::::e     e:::::enn:::::::::::::::npp::::::ppppp::::::po:::::ooooo:::::o\n"
            "            J:::::Jo::::o     o::::o k::::::k:::::k e:::::::eeeee::::::e  n:::::nnnn:::::n p:::::p     p:::::po::::o     o::::o\n"
            "JJJJJJJ     J:::::Jo::::o     o::::o k:::::::::::k  e:::::::::::::::::e   n::::n    n::::n p:::::p     p:::::po::::o     o::::o\n"
            "J:::::J     J:::::Jo::::o     o::::o k:::::::::::k  e::::::eeeeeeeeeee    n::::n    n::::n p:::::p     p:::::po::::o     o::::o\n"
            "J::::::J   J::::::Jo::::o     o::::o k::::::k:::::k e:::::::e             n::::n    n::::n p:::::p    p::::::po::::o     o::::o\n"
            "J:::::::JJJ:::::::Jo:::::ooooo:::::ok::::::k k:::::ke::::::::e            n::::n    n::::n p:::::ppppp:::::::po:::::ooooo:::::o\n"
            " JJ:::::::::::::JJ o:::::::::::::::ok::::::k  k:::::ke::::::::eeeeeeee    n::::n    n::::n p::::::::::::::::p o:::::::::::::::o\n"
            "   JJ:::::::::JJ    oo:::::::::::oo k::::::k   k:::::kee:::::::::::::e    n::::n    n::::n p::::::::::::::pp   oo:::::::::::oo \n"
            "     JJJJJJJJJ        ooooooooooo   kkkkkkkk    kkkkkkk eeeeeeeeeeeeee    nnnnnn    nnnnnn p::::::pppppppp       ooooooooooo   \n"
            "                                                                                           p:::::p                             \n"
            "                                                                                           p:::::p                             \n"
            "                                                                                          p:::::::p                            \n"
            "                                                                                          p:::::::p                            \n"
            "                                                                                          p:::::::p                            \n"
            "                                                                                          ppppppppp                            \n");

        printSeparator();
        
        printf("PONTOS PC: %d\nPONTOS JOGADOR: %d\n\n", pontoPC, pontoUser);
        printf("Escolha qual opção gostaria de jogar:\n \n");
        printf("1 - PEDRA\n");
        printf("2 - PAPEL\n");
        printf("3 - TESOURA\n");
        printf("4 - SAIR DO JOGO\n\n");
        printSeparator();
        scanf("%d", &opcao);
        printf("\n");

        srand(time(NULL));
        jogadaPC = rand() % 3 + 1;
        switch (opcao)
        {
        case 1:
            if (jogadaPC == 1)
            {
                printf("Você escolheu: PEDRA \nPC escolheu: PEDRA \nVocês empataram!!!\n");
            } else if (jogadaPC == 2){
                printf("Você escolheu: PEDRA \nPC escolheu: PAPEL \nVocê perdeu!!!\n");
                pontoPC++;
            } else {
                printf("Você escolheu: PEDRA \nPC escolheu: TESOURA \nVocê ganhou!!!\n");
                pontoUser++;
            }

            break;
        case 2:
            if (jogadaPC == 1)
            {
                printf("Você escolheu: PAPEL \nPC escolheu: PEDRA \nVocê ganhou!!!\n");
                pontoUser++;
            } else if (jogadaPC == 2){
                printf("Você escolheu: PAPEL \nPC escolheu: PAPEL \nVocês empataram!!!\n");
            } else {
                printf("Você escolheu: PAPEL \nPC escolheu: TESOURA \nVocê perdeu!!!\n");
                pontoPC++;
            }
            break;
        case 3:
            if (jogadaPC == 1)
            {
                printf("Você escolheu: TESOURA \nPC escolheu: PEDRA \nVocê perdeu!!!\n");
                pontoPC++;
            } else if(jogadaPC == 2){
                printf("Você escolheu: TESOURA \nPC escolheu: PAPEL \nVocê ganhou!!!\n");
                pontoUser++;
            } else {
                printf("Você escolheu: TESOURA \nPC escolheu: TESOURA \nVocês empataram!!!\n");
            }
            break;
        case 4:
            printf("Encerrando o Jogo! \nOBRIGADO POR JOGAR!\n");
            break;
        
        default:
            printf("Opção invalida!");
            break;
        }
        printf("\nPressione Enter para continuar...");
        getchar(); // Limpa o buffer
        getchar();
    } while (opcao != 4);

    return 0;
}
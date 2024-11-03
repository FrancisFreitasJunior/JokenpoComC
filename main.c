#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "");

    system("clear");
    int jogadaPC, pontoPC, pontoUser, opcao;;

    do
    {
        
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

        printf("--------------------------------------------------------------------------------------------------------------------------------\n");

        printf("Escolha qual opção gostaria de jogar:\n \n");
        printf("1 - PEDRA\n");
        printf("2 - PAPEL\n");
        printf("3 - TESOURA\n");
        printf("4 - SAIR DO JOGO\n");
        scanf("%d", &opcao);
        system("clear");

        srand(time(NULL));
        jogadaPC = rand() % 3 + 1;
        switch (opcao)
        {
        case 1:
            if (jogadaPC == 1)
            {
                printf("Você escolheu: PEDRA \nPC escolheu: PEDRA \nVocês empataram!!!");
            }

            if (jogadaPC == 2)
            {
                printf("Você escolheu: PEDRA \nPC escolheu: PAPEL \nVocê perdeu!!!");
            }

            if (jogadaPC == 3)
            {
                printf("Você escolheu: PEDRA \nPC escolheu: TESOURA \nVocê ganhou!!!");
            }
            
            break;
        case 2:
            if (jogadaPC == 1)
            {
                printf("Você escolheu: PAPEL \nPC escolheu: PEDRA \nVocê ganhou!!!");
            }

            if (jogadaPC == 2)
            {
                printf("Você escolheu: PAPEL \nPC escolheu: PAPEL \nVocês empataram!!!");
            }

            if (jogadaPC == 3)
            {
                printf("Você escolheu: PAPEL \nPC escolheu: TESOURA \nVocê perdeu!!!");
            }
            break;
        case 3:
            if (jogadaPC == 1)
            {
                printf("Você escolheu: TESOURA \nPC escolheu: PEDRA \nVocê perdeu!!!");
            }

            if (jogadaPC == 2)
            {
                printf("Você escolheu: TESOURA \nPC escolheu: PAPEL \nVocê ganhou!!!");
            }

            if (jogadaPC == 3)
            {
                printf("Você escolheu: TESOURA \nPC escolheu: TESOURA \nVocês empataram!!!");
            }
            break;
        case 4:
        printf("Encerrando o Jogo! \nOBRIGADO POR JOGAR!");
            break;
        
        default:
        printf("Opção invalida!");
            break;
        }
    } while (opcao != 4);

    return 0;
}

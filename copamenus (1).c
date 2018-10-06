#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "time.h"
#include "jogo.h"

char menu_principal()
{
	printf("hora de chorar\n");
    printf("\n**************************\n");
    printf("*     Menu Principal     *\n");
    printf("**************************\n");
    printf("  1. Fase de grupos\n");
    printf("  2. Oitavas de Final\n");
    printf("  3. Quartas de Final\n");
    printf("  4. Semifinal\n");
    printf("  5. Disputa do 3%cLugar\n",248);
    printf("  6. Final\n");
    printf("  0. Sair do aplicativo\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}
char submenu()
{
    printf("\n\n**************************\n");
    printf("*        Grupos          *\n");
    printf("**************************\n");
    printf("Digite a letra do grupo: ");
    return getche();
}

char subsub_A()
{
	printf("\n\n**************************\n");
    printf("*        Grupo A         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_B()
{
	printf("\n\n**************************\n");
    printf("*        Grupo B         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_C()
{
	printf("\n\n**************************\n");
    printf("*        Grupo C         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_D()
{
	printf("\n\n**************************\n");
    printf("*        Grupo D         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_E()
{
	printf("\n\n**************************\n");
    printf("*        Grupo E         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_F()
{
	printf("\n\n**************************\n");
    printf("*        Grupo F         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_G()
{
	printf("\n\n**************************\n");
    printf("*        Grupo G         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char subsub_H()
{
	printf("\n\n**************************\n");
    printf("*        Grupo H         *\n");
    printf("**************************\n");
    printf("  1. Partidas\n");
    printf("  2. Classifica%c%co\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

int main()
{
    char w;
    int x,y;

    ///TData hoje;
    //hoje.dia = 16;
    //hoje.mes = 6;

    FILE *fp;
    Ttime times[32];
    Ttime2 times2[32];
    Ttime2 oitavas[16];
    Ttime2 quartas[8];
    Ttime2 semi[4];
    Ttime2 fin[2];
    Ttime2 terceiro[2];

    Tjogo jogos[48];
    Tjogo oitavasf[8];
    Tjogo quartasf[4];
    Tjogo semif[2];
    Tjogo finf[1];
    Tjogo terceirof[1];

    int alterado[48];
    int save;
    int chave ;
    int chave2;
    int chave3;
    int chave4;
    int chave5;

    fp=fopen("chave.arq","rb");
    fread(&chave,sizeof(int),1,fp);
    fclose(fp);
    fp=fopen("chave2.arq","rb");
    fread(&chave2,sizeof(int),1,fp);
    fclose(fp);
    fp=fopen("chave3.arq","rb");
    fread(&chave3,sizeof(int),1,fp);
    fclose(fp);
    fp=fopen("chave4.arq","rb");
    fread(&chave4,sizeof(int),1,fp);
    fclose(fp);
    fp=fopen("chave5.arq","rb");
    fread(&chave5,sizeof(int),1,fp);
    fclose(fp);

    int pao=0;
    int i=0;
    fp = fopen("times.arq","rb");
    fread(times,sizeof(Ttime),32,fp);
    fclose(fp);

    fp=fopen("jogos.arq","rb");
    fread(jogos,sizeof(Tjogo),48,fp);
    fclose(fp);

    fp = fopen("times2.arq","rb");
    fread(times2,sizeof(Ttime2),32,fp);
    fclose(fp);

    fp = fopen("alterado.arq","rb");
    fread(alterado,sizeof(int),48,fp);
    fclose(fp);

    char op, op2, op3,op4;
    while(1)
    {
       // system("cls");
        op = menu_principal();
        system("cls");
        if(op == '0')
            break;
        switch(op)
        {
            case '1':
                while(1)
                {
                    system("cls");
                    op2 = submenu();
                    system("cls");
                    if(op2 == '0')
                    {
                        break;
                    }
                    switch(op2)
                    {
                        case 'A':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_A();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									    while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'A');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[0] == 0)
                                            {
                                            jogo(&times2[2],&times2[0],&jogos[0]);
                                            system("cls");
                                            printf("Deseja salvar os resultados? (1-Sim / 0-N%co): ",198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                                alterado[0] = 1;
                                                fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);

                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);

                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                                }
                                            else{
                                                system("cls");
                                                mostre_jogo2(jogos[0],times);
                                                getche();
                                                system("cls");
                                                break;
                                                }
                                        case '2':
                                            if(alterado[1] == 0)
                                            {
                                            jogo(&times2[1],&times2[3],&jogos[1]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): ",198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[1]=1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[1],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[2] == 0){
                                            jogo(&times2[2],&times2[1],&jogos[16]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[2] =1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[16],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[3] == 0){
                                            jogo(&times2[3],&times2[0],&jogos[17]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[3] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[17],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[4] == 0){
                                            jogo(&times2[3],&times2[2],&jogos[32]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[4] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[32],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[5] == 0){
                                            jogo(&times2[0],&times2[1],&jogos[33]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[5] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[33],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
                                            break;
									case '2':
									    printf("\n");
                                        mostre_grupo_segundo(32,times2,'A');
                                        printf("\nPressione qualquer tecla para voltar\n");
                                        getche();
										break;
								}

							}
                            break;
                        case 'B':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_B();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									    while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'B');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[6] == 0){
                                            jogo(&times2[6],&times2[5],&jogos[2]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[6] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[2],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[7] == 0){
                                            jogo(&times2[7],&times2[4],&jogos[3]);
                                            system("cls");
                                            printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[7] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[3],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[8] == 0){
                                            jogo(&times2[7],&times2[6],&jogos[18]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[8] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[18],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[9] == 0){
                                            jogo(&times2[5],&times2[4],&jogos[19]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co): " ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[9] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[19],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[10] == 0){
                                            jogo(&times2[5],&times2[7],&jogos[34]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[10] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[34],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[11] == 0){
                                            jogo(&times2[4],&times2[6],&jogos[35]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[11] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[35],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
									    break;

									case '2':
									    printf("\n");
									   mostre_grupo_segundo(32,times2,'B');
									    printf("\nPressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                            break;
                        case 'C':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_C();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									    while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'C');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[12] == 0){
                                            jogo(&times2[10],&times2[8],&jogos[4]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[12] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                               mostre_jogo2(jogos[4],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[13] == 0){
                                            jogo(&times2[11],&times2[9],&jogos[5]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[13] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[5],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[14] == 0){
                                            jogo(&times2[9],&times2[8],&jogos[20]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[14] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[20],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[15] == 0){
                                            jogo(&times2[10],&times2[11],&jogos[21]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[15] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[21],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[16] == 0){
                                            jogo(&times2[9],&times2[10],&jogos[36]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[16] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[36],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[17] == 0){
                                            jogo(&times2[8],&times2[11],&jogos[37]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[17] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[37],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
									    break;

									case '2':
									    printf("\n");
									    mostre_grupo_segundo(32,times2,'C');
									    printf("\nPressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                            break;
                        case 'D':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_D();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									    while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'D');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[18] == 0){
                                            jogo(&times2[12],&times2[14],&jogos[6]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[18] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[6],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[19] == 0){
                                            jogo(&times2[13],&times2[15],&jogos[7]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[19] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[7],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[20] == 0){
                                            jogo(&times2[12],&times2[13],&jogos[22]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[20] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[22],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[21] == 0){
                                            jogo(&times2[15],&times2[14],&jogos[23]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[21] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[23],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[22] == 0){
                                            jogo(&times2[15],&times2[12],&jogos[38]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[22] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[38],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[23] == 0){
                                            jogo(&times2[14],&times2[13],&jogos[39]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[23] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[39],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
									    break;

									case '2':
									    printf("\n");
									    mostre_grupo_segundo(32,times2,'D');
									    printf("\npressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                            break;
                        case 'E':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_E();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									   while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'E');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[24] == 0){
                                            jogo(&times2[17],&times2[18],&jogos[8]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[24] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[8],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[25] == 0){
                                            jogo(&times2[16],&times2[19],&jogos[9]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[25] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[9],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[26] == 0){
                                            jogo(&times2[16],&times2[17],&jogos[24]);
                                            system("cls");
                                             printf("deseja salvar os resultados(1-S/0-N)");
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[26] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[24],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[27] == 0){
                                            jogo(&times2[18],&times2[19],&jogos[25]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[27] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[25],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[28] == 0){
                                            jogo(&times2[18],&times2[16],&jogos[40]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[28] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[40],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[29] == 0){
                                            jogo(&times2[19],&times2[17],&jogos[41]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[29] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[41],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
									    break;

									case '2':
									    printf("\n");
									    mostre_grupo_segundo(32,times2,'E');
									    printf("\nPressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                        	break;
                        case 'F':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_F();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									    while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'F');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[30] == 0){
                                            jogo(&times2[20],&times2[22],&jogos[10]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[30] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[10],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[31] == 0){
                                            jogo(&times2[23],&times2[21],&jogos[11]);
                                            system("cls");
                                            printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[31] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[11],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[32] == 0){
                                            jogo(&times2[21],&times2[22],&jogos[26]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[32] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[26],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[33] == 0){
                                            jogo(&times2[20],&times2[23],&jogos[27]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[33] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[27],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[34] == 0){
                                            jogo(&times2[21],&times2[20],&jogos[42]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[34] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[42],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[35] == 0){
                                            jogo(&times2[22],&times2[23],&jogos[43]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[35] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[43],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
										break;
									case '2':
									    printf("\n");
									    mostre_grupo_segundo(32,times2,'F');
									    printf("\nPressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                        	break;
                        case 'G':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_G();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									    while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'G');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[36] == 0){
                                            jogo(&times2[24],&times2[26],&jogos[12]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[36] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[12],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[37] == 0){
                                            jogo(&times2[27],&times2[25],&jogos[13]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[37] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[13],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[38] == 0){
                                            jogo(&times2[24],&times2[27],&jogos[28]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[38] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[28],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[39] == 0){
                                            jogo(&times2[25],&times2[26],&jogos[29]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[39] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[29],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[40] == 0){
                                            jogo(&times2[25],&times2[24],&jogos[44]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[40] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[44],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[41] == 0){
                                            jogo(&times2[26],&times2[27],&jogos[45]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[41] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[45],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
									    break;

									case '2':
									    printf("\n");
									    mostre_grupo_segundo(32,times2,'G');
									    printf("\nPressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                        	break;
                        case 'H':
                        	while(1)
                        	{
                        	    system("cls");
                        		op3 = subsub_H();
                        		system("cls");
                        		if(op3 == '0')
								{
								    break;
								}
								switch(op3)
								{
									case '1':
									  while(1){
									    printf("\n");
									    mostre_jogos_grupo(times,jogos,'H');
									    printf("Escolha qual jogo deseja visualisar / editar: \n");

									    op4 = getche();
									     if(op4 == '0')
                                                break;
                                        system("cls");
									    switch(op4)
									    {

                                        case '1':
                                            if(alterado[42] == 0){
                                            jogo(&times2[28],&times2[29],&jogos[14]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[42] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[14],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '2':
                                            if(alterado[43] == 0){
                                            jogo(&times2[30],&times2[31],&jogos[15]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[43] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[15],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '3':
                                            if(alterado[44] == 0){
                                            jogo(&times2[29],&times2[31],&jogos[30]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[44] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[30],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '4':
                                            if(alterado[45] == 0){
                                            jogo(&times2[30],&times2[28],&jogos[31]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[45] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[31],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '5':
                                            if(alterado[46] == 0){
                                            jogo(&times2[29],&times2[30],&jogos[46]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[46] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[46],times);
                                                getche();
                                                system("cls");
                                                break;
                                        case '6':
                                            if(alterado[47] == 0){
                                            jogo(&times2[31],&times2[28],&jogos[47]);
                                            system("cls");
                                             printf("Deseja salvar os resultados? (1-Sim / 0-N%co):" ,198);
                                            scanf("%d",&save);
                                                if (save == 1){
                                            alterado[47] = 1;
                                            fp = fopen("times2.arq","wb");
                                                fwrite(times2,sizeof(Ttime2),32,fp);
                                                fclose(fp);
                                                fp = fopen("alterado.arq","wb");
                                                fwrite(alterado,sizeof(int),48,fp);
                                                fclose(fp);
                                                fp = fopen("jogos.arq","wb");
                                                fwrite(jogos,sizeof(Tjogo),48,fp);
                                                fclose(fp);
                                                break;
                                                }
                                                else
                                                    break;
                                            }
                                            else
                                                system("cls");
                                                mostre_jogo2(jogos[47],times);
                                                getche();
                                                system("cls");
                                                break;

                                        default:
                                            system("cls");
                                            printf("Entrada invalida");
									    }
									    }
									    break;

									case '2':
									    printf("\n");
									    mostre_grupo_segundo(32,times2,'H');
									    printf("\nPressione qualquer tecla para voltar\n");
									    getche();
										break;
								}

							}
                        	break;
                        default:
                            printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                             printf("\nPressione qualquer tecla para voltar\n");
                            getche();
                    }
                }
                break;
            case '2':
                while(i <48)
                {
                    pao =pao + alterado[i];
                    i++;
                }
                i= 0;
                if(pao == 48)
                {
                    if(chave == 0)
                    {
                    mostre_grupo(32,times);
                    printf("Digite o codigo dos classificados em ordem de posiçao e alfabetica dos grupos");
                    classificatoria(16,oitavas,times2);
                    chave = 1;
                    fp = fopen("oitavas.arq","wb");
                    fwrite(oitavas,sizeof(Ttime2),16,fp);
                    fclose(fp);
                    fp=fopen("chave.arq","wb");
                    fwrite(&chave,sizeof(int),1,fp);
                    fclose(fp);
                    }
                    else
                    {
                    fp = fopen("oitavas.arq","rb");
                    fread(oitavas,sizeof(Ttime2),16,fp);
                    fclose(fp);
                    }
                }
                else
                printf("\n Dados insuficientes \n");
                getche();
                break;
            case '3':
                while(i <48)
                {
                    pao =pao + alterado[i];
                    i++;
                }
                i= 0;
                if(pao == 48)
                {
                    if(chave2 == 0)
                    {
                    mostre_grupo(32,times);
                    printf("Digite o codigo dos classificados em ordem de posiçao e alfabetica dos grupos");
                    classificatoria(8,quartas,times2);
                    chave2 = 1;
                    fp = fopen("quartas.arq","wb");
                    fwrite(quartas,sizeof(Ttime2),8,fp);
                    fclose(fp);
                    fp=fopen("chave2.arq","wb");
                    fwrite(&chave2,sizeof(int),1,fp);
                    fclose(fp);
                    }
                    else
                    {
                    fp = fopen("quartas.arq","rb");
                    fread(quartas,sizeof(Ttime2),8,fp);
                    fclose(fp);
                    }
                }
                else
                printf("\n Dados insuficientes \n");
                getche();
                break;
            case '4':
                while(i <48)
                {
                    pao =pao + alterado[i];
                    i++;
                }
                i= 0;
                if(pao == 48)
                {
                    if(chave3 == 0)
                    {
                    mostre_grupo(32,times);
                    printf("Digite o codigo dos classificados em ordem de posiçao e alfabetica dos grupos");
                    classificatoria(4,semi,times2);
                    chave3 = 1;
                    fp = fopen("semi.arq","wb");
                    fwrite(semi,sizeof(Ttime2),4,fp);
                    fclose(fp);
                    fp=fopen("chave3.arq","wb");
                    fwrite(&chave3,sizeof(int),1,fp);
                    fclose(fp);
                    }
                }
                else
                printf("\n Dados insuficientes \n");
                getche();
                break;
            case '5':
                while(i <48)
                {
                    pao =pao + alterado[i];
                    i++;
                }
                i= 0;
                if(pao == 48)
                {
                    if(chave4 == 0)
                    {
                    mostre_grupo(32,times);
                    printf("Digite o codigo dos classificados em ordem de posiçao e alfabetica dos grupos");
                    classificatoria(2,terceiro,times2);
                    chave4 = 1;
                    fp = fopen("terceiro.arq","wb");
                    fwrite(terceiro,sizeof(Ttime2),2,fp);
                    fclose(fp);
                    fp=fopen("chave4.arq","wb");
                    fwrite(&chave4,sizeof(int),1,fp);
                    fclose(fp);
                    }
                    else
                    {
                    fp = fopen("terceiro.arq","rb");
                    fread(terceiro,sizeof(Ttime2),2,fp);
                    fclose(fp);
                    }
                }
               else
                printf("\n Dados insuficientes \n");
                getche();
                break;
            case '6':
                while(i <48)
                {
                    pao =pao + alterado[i];
                    i++;
                }
                i= 0;
                if(pao == 48)
                {
                    if(chave5 == 0)
                    {
                    mostre_grupo(32,times);
                    printf("Digite o codigo dos classificados em ordem de posiçao e alfabetica dos grupos");
                    classificatoria(2,fin,times2);
                    chave5 = 1;
                    fp = fopen("final.arq","wb");
                    fwrite(fin,sizeof(Ttime2),2,fp);
                    fclose(fp);
                    fp=fopen("chave5.arq","wb");
                    fwrite(&chave5,sizeof(int),1,fp);
                    fclose(fp);
                    }
                    else
                    {
                    fp = fopen("final.arq","rb");
                    fread(fin,sizeof(Ttime2),2,fp);
                    fclose(fp);
                    }
                }
                else
            	printf("\n Dados insuficientes \n");
                getche();
            	break;
            default:
                printf("\n\n  Op%c%co inv%clida\n\n",135,198,160);
                printf("\nPressione qualquer tecla para voltar\n");
                getche();
        }
    }
    return 0;
}







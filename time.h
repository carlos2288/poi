#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time
{
    int cod;
    char nome[30];
    char grupo;
};typedef struct time Ttime;

void mostre_time(Ttime time)
{
    printf("%-20s %-2c codigo: %d\n",time.nome,time.grupo,time.cod);
}

void mostre_grupo(int num_times,Ttime times [num_times])
{
    int i;
    for(i=0;i<num_times;i++)
    {
        mostre_time(times[i]);
    }
}
void mostre_grupo2(int num_times,Ttime times[num_times],char grupo)
{
    int i;
    for(i=0;i<num_times;i++)
    {
        if(times[i].grupo == grupo)
        {
            mostre_time(times[i]);
        }
    }
}
struct time2
{
    Ttime time;
    int pontos;
    int gols_marcados;
    int gols_sofridos;
    int saldo_de_gols;
    int jogos;
};typedef struct time2 Ttime2;


void mostre_time_segundo(Ttime2 time)
{
        printf("%-20s %-03d  %-03d  %-3d  %-03d  %-03d  \n",time.time.nome,time.pontos,time.jogos,time.gols_marcados,time.gols_sofridos,time.saldo_de_gols);
}

void mostre_todos_times_segundo(int n,Ttime2 times[32])
{
    int i;
    for (i=0;i<n;i++)
    {
        mostre_time_segundo(times[i]);
    }
}

void mostre_grupo_segundo(int num_times,Ttime2 times2[32],char grupo)
{
    int i;
    for(i=0;i<48;i++)
    {
        printf("*");
    }
    printf("\n*  SEL               P    J   GM   GS   SG     *\n");
     for(i=0;i<48;i++)
    {
        printf("*");
    }
    printf("\n");
    for (i=0;i<num_times;i++)
    {
        if(times2[i].time.grupo == grupo)
        {
           mostre_time_segundo(times2[i]);
        }

    }
}

void classificatoria(int num_times,Ttime2 etapa[num_times],Ttime2 times[32])
{
    int i;
    int cod;
    for(i=0;i<num_times;i++)
    {
        scanf("%d",&cod);
        etapa[i] = times[cod];
    }
}
 void mostre_classificados(int num_times,Ttime2 times[num_times])
 {
        int i;
        for(i=0;i<num_times;i++)
        {
            mostre_time_segundo(times[i]);
        }
 }


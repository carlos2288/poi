struct jogo
{
    char data[5];
    int gols_a;
    char hora[5];
    int gols_b;
    int codigo_pais_1;
    int codigo_pais_2;
    char grupo;
    int cod;

};typedef struct jogo Tjogo ;


void get_nome_time(Ttime times[32],int cod,char *ns)
{
    int i;
    strcpy(ns,"");
    for (i=0;i<32;i++)
    {
        if(cod == times[i].cod)
        {
            strcpy(ns,times[i].nome);
            break;
        }
    }
}

void mostre_jogo(Tjogo jogo,Ttime times[32])
{
    char np1[20];
    char np2[20];
    get_nome_time(times,jogo.codigo_pais_1,np1);
    get_nome_time(times,jogo.codigo_pais_2,np2);
    printf("%s  %s   %15s   x   %-15s  \n", jogo.data,jogo.hora,np1,np2);
}

void mostre_todos_jogos(Tjogo lista_jogos[48],Ttime times[32])
{
    int i;
    int num_jogos = 1;
    for (i=0;i<48;i++)
    {
        mostre_jogo(lista_jogos[i],times);
        printf("\n");
        num_jogos++;
    }
}


void mostre_jogos_grupo(Ttime lista_times[32],Tjogo lista_jogos[48],char grupo)
{
    int i  = 0;
    int p;
    p = i+1;
    for(i=0;i<48;i++)
    {
        if(lista_jogos[i].grupo == grupo)
        {
            printf("  %d.      ",p);
            mostre_jogo(lista_jogos[i],lista_times);
            p++;
        }

    }
}
void mostre_data_jogo(int cod,Tjogo lista_jogos[48])
{
    printf("%s %s \n",lista_jogos[cod].data,lista_jogos[cod].hora);
}

void jogo(Ttime2 *time_a,Ttime2 *time_b,Tjogo *jogo)
{
    int gols_a;
    int gols_b;
    int saldo_a;
    int saldo_b;
    printf("quantos gols %s fez:",time_a->time.nome);
    scanf("%d",&gols_a);
    printf("quantos gols %s fez:",time_b->time.nome);
    scanf("%d",&gols_b);
    jogo->gols_a = gols_a;
    jogo ->gols_b = gols_b;
    time_a->jogos++;
    time_b->jogos++;
    time_a->gols_marcados = time_a->gols_marcados + gols_a;
    time_b->gols_marcados = time_b->gols_marcados + gols_b;
    time_a->gols_sofridos = time_a ->gols_sofridos + gols_b;
    time_b ->gols_sofridos = time_b ->gols_sofridos + gols_a;
    saldo_a = gols_a - gols_b;
    saldo_b = gols_b - gols_a;
    time_a ->saldo_de_gols = time_a ->saldo_de_gols + saldo_a;
    time_b ->saldo_de_gols = time_b ->saldo_de_gols + saldo_b;
    if(gols_a > gols_b)
    {
        time_a->pontos = time_a ->pontos + 3;
    }
    if(gols_b>gols_a)
    {
        time_b ->pontos = time_b ->pontos +3;
    }
    if (gols_a == gols_b)
    {
        time_a ->pontos = time_a ->pontos +1;
        time_b->pontos = time_b ->pontos + 1;
    }

}


void mostre_jogo2(Tjogo jogo,Ttime times[32])
{
    char np1[20];
    char np2[20];
    get_nome_time(times,jogo.codigo_pais_1,np1);
    get_nome_time(times,jogo.codigo_pais_2,np2);
     printf("%s  %s   %15s   %d x %d   %-15s  \n", jogo.data,jogo.hora,np1,jogo.gols_a,jogo.gols_b,np2);
}

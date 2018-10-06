struct lista_times
{
    Ttime lista_tiemes [32];
};typedef struct lista_times Tlista_times



 void mostre_lista_times(Tlista_times *lista)
 {
     int i;
     for (i=0;i<32;i++)
     {
      mostre_time(lista->lista_times[i]);
      }
 }

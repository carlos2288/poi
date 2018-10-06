#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "time.h"
int main()
{
    FILE *fp;
    Ttime times[32];
    fp = fopen("times.arq","rb");
    fread(times,sizeof(Ttime),32,fp);

    mostre_grupo(32,times);

    }






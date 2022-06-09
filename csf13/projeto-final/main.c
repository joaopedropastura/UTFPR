#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <windows.h>

#include <time.h>
#define ORG 'X'
#define VAZ '.'
#define TAM 101

void limpaMatriz(char **m, int nL, int nC)
{
    int i,j;
    for(i=0;i<nL;i++)
     for(j=0;j<nC;j++)
        m[i][j]= VAZ;
}

void inicBlinker(char **m, int nL, int nC)
{
  char padrao[1][3]={{ORG,ORG,ORG}};
  int i,j, xInic=nL/2, yInic=nC/2;

  limpaMatriz(m,nL,nC);

 for(i=0;i<1;i++)
    for(j=0;j<3;j++)
      m[xInic+i][yInic+j]=padrao[i][j];
}

void inicBloco(char **m, int nL, int nC)
{
 char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
  int i,j,xInic=nL/2, yInic=nC/2;


 limpaMatriz(m,nL,nC);


 for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      m[xInic+i][yInic+j]=padrao[i][j];
}


void inicSapo(char **m, int nL, int nC)
{

 char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
  int i,j,xInic=nL/2, yInic=nC/2;

  limpaMatriz(m,nL,nC);


   for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      m[xInic+i][yInic+j]=padrao[i][j];

}


void inicGlider(char **m, int nL, int nC)
{
char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
 int i,j,xInic,yInic;

 limpaMatriz(m,nL,nC);

 xInic=nL-4;
 yInic=nC-4;

 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      m[xInic+i][yInic+j]=padrao[i][j];
}


void inicLWSS(char **m, int nL, int nC)
{
char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
 int i,j,xInic,yInic;

 limpaMatriz(m,nL,nC);

 xInic=nL-5;
 yInic=nC-6;

 for(i=0;i<4;i++)
    for(j=0;j<5;j++)
      m[xInic+i][yInic+j]=padrao[i][j];

}

void menuInicJogo(char **mat, int nL, int nC)
{
    int opcao;

   printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\nEntre com a opcao: ");
   scanf("%d",&opcao);
   switch(opcao)
   {
     case 1:   inicBloco(mat,nL,nC); break;
     case 2:   inicBlinker(mat,nL,nC); break;
     case 3:   inicSapo(mat,nL,nC); break;
     case 4:   inicGlider(mat,nL,nC); break;
     case 5:   inicLWSS(mat,nL,nC); break;
   }
    imprimi_matrizes(mat,nL,nC);// TO DO

    printf("Se inicializacao correta digite qualquer tecla para iniciar o jogo..."); while(getchar()!='\n'); getchar();

}

char** AlocacaoMatriz (int tam){
    char **m;
    m = (char*) malloc (sizeof (char) * tam);
     for (int i = 0 ; i < tam; i++){
        m[i] = (char *) malloc (sizeof (char) * tam);
     }
    return m;
}
//imprimeMatriz(char **m, int nL, int nC);
void imprimi_matrizes(char **matriz , int nL , int nC ){
     for (int i = 0 ; i < nL; i ++){
            for(int j = 0 ; j < nC; j ++){
                    printf("%c", matriz[i][j]);
            }
            printf("\n");
        }
}
int main()
{
    int tam = 20 ;
    char **matriz;
    matriz = AlocacaoMatriz(tam);
    for(int j = 0 ; j < tam; j ++){
        for (int m = 0 ; m < tam ; m++){
            matriz[j][m] = 'O';
        }
    }
    //imprimi_matrizes(matriz, tam , tam);
    menuInicJogo(matriz , tam , tam);
    return 0;
}
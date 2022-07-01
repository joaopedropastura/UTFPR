#include <stdio.h>
#include <stdlib.h>
// #include <windows.h>
#define ORG 'X'
#define VAZ '.'
#define TAM 101

void limpaMatriz(char **mat, int nl, int nc);
char** alocaMatriz(int nl, int nc);
void desalocaMatriz(char **mat, int nl);
void imprimeMatriz(char **mat, int nl, int nc);
void copiaMatriz(char **mAnt, char **mAtual, int nl, int nc);
void atualizaMat(char **mAtual, char **mAnt, int nl, int nc);

void inicBloco(char **m, int nl, int nc);
void inicBlinker(char **m, int nl, int nc);
void inicSapo(char **m, int nl, int nc);
void inicGlider(char **m, int nl, int nc);
void inicLWSS(char **m, int nl, int nc);

void menuInicJogo(char **mat, int nl, int nc);
void jogaJogoVida(char **mAtual, int nl, int nc, int nCiclos);

int main()
{
    char **mat;
    int nl=20, nc=20, nCiclos=5;
    mat = alocaMatriz(nl,nc);

    do{
        menuInicJogo(mat,nl,nc);
        jogaJogoVida(mat,nl,nc,nCiclos);
        printf("\nJogar Novamente? Pressione enter\nEncerrar Programa(S)\n");
    }while(getchar()!= 'S');

    desalocaMatriz(mat,nl);
}

void limpaMatriz(char **m, int nl, int nc)
{
    int i,j;
    for(i=0;i<nl;i++)
        for(j=0;j<nc;j++)
            m[i][j]=VAZ;
}
char** alocaMatriz(int nl, int nc)
{
    char **m;
    int i, j;
    m = (char**)malloc(nl*sizeof(char*));
    if(m == NULL) {printf ("Erro de alocacao da matriz!!");exit (1);}
    for(i=0; i<nc; i++){
        m[i]=(char*)malloc(nc*sizeof(char));
        if(m[j] == NULL){printf(" Erro de alocacao das linhas da matriz!");exit (1);}
    }

    return m;
}
void desalocaMatriz(char **mat, int nl)
{
    int i;
    for(i=0; i<nl; i++)
        free(mat[i]);

    free(mat);
}
void imprimeMatriz(char **m, int nl, int nc)
{
    int i, j;
    for(i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            printf(" %c ", m[i][j]);
        }
        printf("\n");
    }
}
void copiaMatriz(char **mAnt, char **mAtual, int nl, int nc)
{
    int i, j;
    for(i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            mAnt[i][j] = mAtual[i][j];
        }
    }
}
void atualizaMat(char **mAtual, char **mAnt, int nl, int nc)
{
    int i, j, vivos;

    vivos=3;

    // contar n� de vizinhos vivos
    for(i=0; i<nl; i++){
        for(j=0; j<nc; j++){
            //vivos=0;
            if(mAnt[i][j]==ORG){
                if(vivos<2)
                    mAtual[i][j] = VAZ;
                if(vivos==2 || vivos==3)
                    mAtual[i][j] = ORG;
                if(vivos>3)
                    mAtual[i][j] = VAZ;
            }
            else{
                if(vivos == 3)
                    mAtual[i][j] = ORG;
            }
        }
    }
}

void inicBloco(char **m, int nl, int nc)
{
    char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
    int i, j, xInic=nl/2, yInic=nc/2;

    limpaMatriz(m,nl,nc);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}
void inicBlinker(char **m, int nl, int nc)
{
    char padrao[1][3]={{ORG,ORG,ORG}};
    int i,j, xInic=nl/2, yInic=nc/2;

    limpaMatriz(m,nl,nc);

    for(i=0;i<1;i++)
        for(j=0;j<3;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}
void inicSapo(char **m, int nl, int nc)
{
    char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
    int i,j,xInic=nl/2, yInic=nc/2;

    limpaMatriz(m,nl,nc);

    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}
void inicGlider(char **m, int nl, int nc)
{
    char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
    int i,j,xInic,yInic;

    limpaMatriz(m,nl,nc);

    xInic=nl-4;
    yInic=nc-4;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}
void inicLWSS(char **m, int nl, int nc)
{
    char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
    int i,j,xInic,yInic;

    limpaMatriz(m,nl,nc);

    xInic=nl-5;
    yInic=nc-6;

    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
        m[xInic+i][yInic+j]=padrao[i][j];
}

void menuInicJogo(char **mat, int nl, int nc)
{
    int opcao;

    printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\nEntre com a opcao: ");
    scanf("%d",&opcao);
    switch(opcao)
    {
         case 1:   inicBloco(mat,nl,nc); break;
         case 2:   inicBlinker(mat,nl,nc); break;
         case 3:   inicSapo(mat,nl,nc); break;
         case 4:   inicGlider(mat,nl,nc); break;
         case 5:   inicLWSS(mat,nl,nc); break;
    }

    imprimeMatriz(mat,nl,nc);
    printf("Se inicializacao correta digite qualquer tecla para iniciar o jogo..."); while(getchar()!='\n'); getchar();
}

void jogaJogoVida(char **mAtual, int nl, int nc, int nCiclos)
{
    char **mAnt;
    int c;

    //imprimindo na tela a matriz inicial
    system("cls");
    imprimeMatriz(mAtual,nl,nc);
    // getchar();
    Sleep(100);

    mAnt = alocaMatriz(nl,nc);

    for(c=1;c<=nCiclos;c++)
    {
        copiaMatriz(mAnt,mAtual,nl,nc);

        atualizaMat(mAtual,mAnt,nl,nc);

        system("cls");
        imprimeMatriz(mAtual,nl,nc);
        // getchar();
        Sleep(100);
    }
    desalocaMatriz(mAnt,nl);

}

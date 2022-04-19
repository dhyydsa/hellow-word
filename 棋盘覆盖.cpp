#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 8
int Board[MAXSIZE][MAXSIZE];
int title=1;
void ChessBoard(int tr,int tc,int dr,int dc,int size)
{
    if(size==1)
        return;
    int s = size/2;
    int t = title++;
    //¸²¸Ç×óÉÏ½Ç×ÓÆåÅÌ
    if(dr <tr+s && dc<tc+s) 
        ChessBoard(tr,tc,dr,dc,s);
    else
    {
        Board[tr+s-1][tc+s-1]=t;
        ChessBoard(tr,tc,tr+s-1,tc+s-1,s);
   }
    //¸²¸ÇÓÒÉÏ½Ç×ÓÆåÅÌ
    if(dr<tr+s && dc>=tc+s)
    {
        ChessBoard(tr,tc+s,dr,dc,s);
    }
    else
    {
        Board[tr+s-1][tc+s]=t;
        ChessBoard(tr,tc+s,tr+s-1,tc+s,s);
    }
    //¸²¸Ç×óÏÂ½Ç×ÓÆåÅÌ
    if(dr>=tr+s && dc<tc+s)
    {
        ChessBoard(tr+s,tc,dr,dc,s);
    }
    else
    {
        Board[tr+s][tc+s-1]=t;
        ChessBoard(tr+s,tc,tr+s,tc+s-1,s);
    }
    //¸²¸ÇÓÒÏÂ½Ç×ÓÆåÅÌ
    if(dr>=tr+s && dc>=tc+s)
    {
        ChessBoard(tr+s,tc+s,dr,dc,s);
    }
    else
    {
        Board[tr+s][tc+s] = t;
        ChessBoard(tr+s,tc+s,tr+s,tc+s,s);
    }

}
int main()
{
    int i ,j;
    Board[0][1]=0;
    ChessBoard(0,0,2,3,MAXSIZE);
    for (i = 0;i<MAXSIZE;i++)
    {
        for (j=0;j<MAXSIZE;j++)
            printf("%5d",Board[i][j]);
        printf("\n");
    }
    return 0;
}

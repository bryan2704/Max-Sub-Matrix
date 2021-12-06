#include <stdio.h>

int main()
{ 
    int n;
    int m;
    int r;
    int s;
    scanf("%d %d %d %d", &n, &m, &r, &s); /*entrada para as variaveis de dimensão das matrizes*/
    int x;
    int y;
    int a[n][m];
    for(x=0; x<n; ++x){
        for(y=0; y<m; ++y){
            scanf( "%d", &a[x][y]);  /*valores de dentro da matriz*/
        }
    }
    int i;
    int j;
    int c;
    int d;
    int e;
    int z;
    e=0;
    z=0;
    for(i=0; i<n; ++i){ /*laco que faz a soma de cada submatriz, armazenando sempre o maior valor */
        
        for(j=0; j<m; ++j){
            if(e>z){
                z=e;
            }
            e=0;
            for(c=0; c<r; ++c){
                
                for(d=0; d<s; ++d){
                    
                    if((j+d)<m && (i+c)<n){
                       e=a[i+c][j+d]+e;
                        
                    }
                }
            }
        }
        
    }
    printf("%d\n",z);
    return 0;
}






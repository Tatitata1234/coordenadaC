#include <stdio.h>>

int main(){

    float x, y;

    printf("Insira a coordenada x: \n");

    scanf("%f", &x);

    printf("Insira a coordenada y: \n");

    scanf("%f", &y);

    if(x==0 && y==0){
        printf("Origem\n");
    }else{
        if(x==0 && y!=0){
            printf("Eixo y\n");
        }else{
            if(x>0 && y>0){
                printf("Quadrante 1\n");
            }else{
                if(x>0 && y<0){
                    printf("Quadrante 2\n");
                }else{
                    if(x<0 && y<0){
                        printf("Quadrante 3\n");
                    }else{
                        if(x<0 && y>0){
                            printf("Quadrante 4\n");
                        }else{
                            if(x!=0 && y==0){
                                printf("Eixo x\n");
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%f,%f", x, y);

    return 0;

}

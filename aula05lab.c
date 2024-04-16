#include <stdio.h>

int main(){
    int vetor[10], i, j, opt;
    int num, pos, soma=0;
    int tmp=vetor[i];
    int alg = 0, e=1;
    int acc=0;
    int acc2=0;
    float media;
    int par[10], impar[10];
    int m;
    for(i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }
    while(opt!=0){
            scanf("%d", &opt);
        switch(opt){
            case 1:
                scanf("%d %d", &pos, &num);
                vetor[pos]=num;
            break;

            case 2:
                for(i=0; i<10; i++){
                    printf("%d ", vetor[i]);
                }
            break;
            case 3:
                for(i=9;i>=0;i--){
                    printf("%d ", vetor[i]);
                }
            break;
            case 4:
                for(i=0; i<10; i++){
                    soma = soma+vetor[i];
                }
                printf("%d ", soma);
            break;
            case 5:
                for(i=0; i<10; i++){
                    if (vetor[i]>9){
                        alg=(tmp/e)%10;
                        tmp=tmp-alg*e;
                    }
                    if(alg==tmp){
                            printf("%d ", alg+tmp);
                    }
                }
            break;

            case 6:
                for(i=0; i<10; i++){
                    for(j=0; j<10; j++){
                        if(i!=j){
                            if(i==j){
                                printf("%d", vetor[i]);
                            }
                        }
                    }
                }
            break;
            case 7:

            break;
            case 8:
                acc=vetor[0];//acho o valor maximo declarando um contador como o primeiro numero da sequencia, logo testo a sequencia em busca de um valor maior
                for(i=0; i<10; i++){
                        if(acc<vetor[i]){
                            acc=vetor[i];
                        }
                }
                printf("%d ", acc);
                acc2=vetor[0];//acho o valor minimo declarando um contador como o primeiro numero da sequencia, logo testo a sequencia em busca de um valor menor
                for(i=0; i<10; i++){
                        if(acc2>vetor[i]){
                            acc2=vetor[i];
                        }
                }
                printf("%d ", acc2);
                media=vetor[0];//acho o valor maximo declarando um contador como o primeiro numero da sequencia, logo testo a sequencia em busca de um valor maior
                for(i=0; i<10; i++){
                        media=media+vetor[i];
                        }
                media=media/10;
                printf("%2.f ", media);
            break;
            case 9:
                for(i=0; i<10; i++){
                    if((i/10)==2){
                        printf("%d ", vetor[i]);
                    }
                }
            break;
            case 10:
                acc=vetor[0];
                for(i=10; i<10;i++){
                    for(i=0; i<10; i++){
                        if(acc<vetor[i]){
                            acc=vetor[i];
                        }
                    }
                    printf("%d ", vetor[i]);
                }

            break;
            case 11:
                acc=vetor[0];
                for(i=10; i<10;i++){
                    for(i=0; i<10; i++){
                        if(acc>vetor[i]){
                            acc=vetor[i];
                        }
                    }
                    printf("%d ", vetor[i]);
                }

            break;
            case 12:
                for(i=10; i<10;i++){
                    if(vetor[i]%2==0){
                        vetor[i]=par[i];
                    }
                    else{
                        vetor[i]=impar[i];
                    }
                    printf("%d ", par[i]);
                    printf("%d ", impar[i]);
                }
            break;
            case 13:
                scanf("%d ", &m);
                for (i=0; i<m; i++){
                    vetor[i] = vetor[i-1];
                    vetor[i+1]=vetor[i];
                    printf("%d", vetor[i]);
                }
            break;
            case 14:
                scanf("%d ", &m);
                for (i=0; i<m; i++){
                    vetor[i] = vetor[i+1];
                    vetor[i-1]=vetor[i];
                    printf("%d", vetor[i]);
                }
            break;
            default:
                opt=0;
            break;
        }
        printf("\n");
    }

    return 0;
}

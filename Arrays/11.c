#include <stdio.h>
#define Max 10
#define Triplo 3*Max

int main(){
    int VetA[Max], VetB[Max], VetC[Max], VetTotal[Triplo];
    int i, j=0, k=0;

    for(i=0;i<Max;i++){
        printf("Digite o %i° valor de A: ",i+1);
        scanf("%i",&VetA[i]);
    }
    for(i=0;i<Max;i++){
        printf("Digite o %i° valor de B: ",i+1);
        scanf("%i",&VetB[i]);
    }
    for(i=0;i<Max;i++){
        printf("Digite o %i° valor de C: ",i+1);
        scanf("%i",&VetC[i]);
    }

    for(i=0;i<Triplo;i++){
        if(i%3==0){
            VetTotal[i]=VetA[j];
            j++;
        }
        else if(i%3==1){
            VetTotal[i]=VetB[k];
            k++;
        }
        else{
            VetTotal[i]=VetC[i/3];
        }
    }

    printf("\nImprimindo vetor\n");

    for(i=0;i<Triplo;i++){
        printf("[%i]",VetTotal[i]);
    }
    return 0;
}

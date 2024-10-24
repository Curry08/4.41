#include <stdio.h>

int main(){
    int lung;
    printf("Inserisci il numero degli asterischi della base del triangolo: ");
    scanf("%d",&lung);
    printf("\n");
    for(int i=0 ; i<lung ; i++){
        for(int j=0 ; j<lung; j++){
            if(i==lung-1 || j==0 || j==i){
                printf("*  ");
            }
            else{printf("   ");}

        }
        printf("\n");
    }
    return 0;
}

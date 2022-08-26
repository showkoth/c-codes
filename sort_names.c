#include<stdio.h>
#include<string.h>

int main(){
    const int items = 5;
    const int max_char = 50;
    char names[items][max_char], dummy[max_char];
    for(int i = 0; i < items; i++){
        printf("\n Please enter name %d : ", i + 1);
        scanf("%s", names[i]);
    }
    for(int i = 0; i < items; i++){
        for(int j = i + 1; j < items; j++){
            if(strcmp(names[i], names[j]) > 0){
                strcpy(dummy, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], dummy);
            }
        }
    }
    printf("The sorted names are as follows: \n");
    for(int i = 0; i < items; i++){
        printf("%s\n",names[i]);
    }

    return 0;
}
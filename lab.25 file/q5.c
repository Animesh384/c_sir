#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    FILE *fp;
    srand(time(0));
    fp=fopen("text.in", "w+");
    if(fp==NULL){
        printf("Could not open the file\n");
    }else{
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                fprintf(fp, "%d ", rand()%100);
            }
            fprintf(fp, "\n");
        }
        printf("Execution Complete");
    }

    fseek(fp, 0, SEEK_SET);
    int arr[10][10];
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            fscanf(fp, "%d", &arr[i][j]);
            if(j==9){
                sum+=arr[i][j];
            }
        }
    }

    printf("\nsum is %d", sum);
    fclose(fp);
    return 0;
}
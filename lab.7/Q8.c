#include<stdio.h>
 int main(){
     int c;
     printf("Enter 1 for concave lens\nEnter 2 for convex lens\nEnter 3 for cocave mirror\nEmter 4 for convex mirror\n---->");
     scanf("%d",&c);
     int c2;
            printf("Press 1, At infinity\n");
            printf("Press 2, Beyond the centre of curvature C\n");
            printf("Press 3, At the centre of curvature C\n");
            printf("Press 4, Between C and F\n");
            printf("Press 5, At focus F\n----->");

            scanf("%d",&c2);
    if (c==1)
    {
                printf("Position of image   : \n");
                printf("Size                : \n");
                printf("Type of image formed: \n");
           
    }
    else if (c==2)
    {
        if(c2==1){

                printf("Position of image   : At F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Diminished\n");

            }else if(c2==2){

                printf("Position of image   : Between 2F2 and F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Diminished\n");

            }else if(c2==3){

                printf("Position of image   : Beyond 2F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Enlarged\n");

            }else if(c2==4){

                printf("Position of image   : Beyond 2F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Enlarged\n");

            }else if(c2==5){

                printf("Position of image   : At 2F2\n");
                printf("Size                : Virtual and upright\n");
                printf("Type of image formed: highly Enlarged\n");

            }
            else printf("invalid entry");
    }
    else if (c==3)
    {
        if(c2==1){

                printf("Position of image   : At F\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Highly Diminished\n");

            }else if(c2==2){

                printf("Position of image   : Between 2F and F\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Diminished\n");

            }else if(c2==3){

                printf("Position of image   : At 2F\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Same size\n");

            }else if(c2==4){

                printf("Position of image   : Beyond 2F\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed:  Enlarged\n");

            }else if(c2==5){

                printf("Position of image   : At Infinity\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Highly Enlarged\n");

            }
            else printf("invalid entry");
    }
    else if (c==4)
    {
        printf("Position of image   : \n");
        printf("Size                : \n");
        printf("Type of image formed: \n");
        }
    else
    printf("\nworng input");
    
 }
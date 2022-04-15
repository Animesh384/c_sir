#include<stdio.h>

int main(){
    char user;
    int pass;
    printf("enter u user id:");
    scanf("%c",&user);
    printf("enter ur password:");
    scanf("%d",&pass);
    if(user=='a'&&pass==1234){
        printf("login is sucessfull\n");
        
    }
    else printf("login fail");          
return(0);
}

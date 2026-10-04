#include <stdio.h>

#define POOL_ACCESS                 1
#define SAUNA_ACCESS                2
#define PERSONAL_TRAINER_ACCESS     4
#define FULL_DAY_ACCESS             8

int main(){
    int n;
    int current_hour;

    while(1){
        printf("Enter member's stored access number(9999 to exit)\n");
        scanf("%d", &n);
        if( n == 9999){
            break;
        }
        printf("What is the current hour?\n");
        scanf("%d", &current_hour);
        
        printf("%s\n", (current_hour >= 22 || current_hour < 6) ? "LATE NIGHT MODE":"STANDARD MODE" ); 
        if(current_hour >= 22 || current_hour < 6){
            if(n & FULL_DAY_ACCESS){
                printf("ENTRY : ALLOWED\n");
            }else {
                printf("ENTRY : DENIED\n");
            }
        }else {
            if(n & (POOL_ACCESS | SAUNA_ACCESS | PERSONAL_TRAINER_ACCESS)){
                printf("ENTRY : ALLOWED\n");
            }else {
                printf("ENTRY : DENIED\n");
            }
        }   
        if(n & PERSONAL_TRAINER_ACCESS){
            printf("Member has Personal trainer access\n");
        }else {
            printf("Member does not has Personal trainer access\n");
        }
    }
    return 0;
}
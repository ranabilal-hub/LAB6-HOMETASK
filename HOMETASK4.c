#include <stdio.h>

int main(){
    int cargo_type , n , i ;
    int weight ;
    int tracking_code;

    printf("Enter the number of containers \n");
    scanf("%d", &n);

    for( i = 1 ; i <= n ; i++){
    printf("\n====Contaner %d====\n", i);

    printf("Select The Cargo Type\n");
    printf("1. General Goods\n");
    printf("2. Hazardous Materials\n");
    printf("3. Refrigerated Goods\n");
    printf("Enter Your Choice : \n");
    scanf("%d", &cargo_type);

    printf("Enter the weight(kg) of your cotainer\n");
    scanf("%d", &weight);

    switch(cargo_type){
        case 1:
        if (weight <= 20000){
            printf("This container can be loaded\n");
        }else {
            printf("This container cannot be loaded\n");
        }
        break;

        case 2:
        if(((i % 2) != 0) &&  (weight <= 15000)){
            printf("This container can be loaded\n");
        }else{
            printf("This container cannot be loaded\n");
        }
        break;

        case 3:
        if(weight <= 18000){
            printf("This container can be loaded\n");
        }else {
            printf("This container cannot be loaded\n");
        }
        break;

        default:
        printf("Invalid type entered\n");
        break;

    }
    tracking_code = (weight % 97) % 100 ;
    printf("Two digit code for your container is %02d",tracking_code);
    }
printf("No More containers to scan\n");
return 0;
}
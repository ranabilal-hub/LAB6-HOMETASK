#include <stdio.h>

int main(){
    printf("\n====Riverside Multiplex Ticketing Kiosk===\n");
    int age , day , choice  ;
    float discounted_price , price , final_price ;
    
    while (1){
        printf("Enter Your Age (0 to exit): \n");
    scanf("%d", &age);
    if (age == 0){
        break;
    }
    printf("Select Your Movie Choice\n");
    printf("1. Regular\n");
    printf("2. 3D\n");
    printf("3. Premeir\n");
    printf("Enter Your Choice :");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        price = 500;
        break;
        case 2:
        price = 800;
        break;
        case 3:
        price = 1200;
        break;
        default:
        printf("Invalid Choice Entered\n");
        continue;
    }

    if(age < 13 ){
        discounted_price =  price * 0.30 ;
        final_price = price - discounted_price;
    } else if (age >= 60){
        discounted_price = price * 0.20 ;
        final_price = price - discounted_price;
    }else{
        discounted_price = 0;
        final_price = price;
    }
    printf("Enter Current Day (1 to 31)\n");
    scanf("%d", &day);
    if (day % 5 == 0){
        printf("Bonus day!\n");
        final_price -= 50;
    }
    if(final_price < 100){
        final_price = 100;
    }
    printf("===RECEIPT===\n");
    printf("Age = %d\n", age);
    printf("Choice is %d\n",choice);
    printf("Day is %d\n", day);
    printf("Price is %.2f\n", price);
    printf("Discounted Price is %.2f\n", discounted_price);
    printf("Final Price is %.2f\n", final_price);
    printf("====================\n");
}
    printf("Line is empty for the day\n");
    printf("KIOSK IS CLOED\n");

return 0;
}
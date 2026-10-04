#include <stdio.h>

#define LIGHT_BIT           1
#define WATER_HEATER_BIT    2
#define AIR_COND_BIT        4
#define CAMERA_BIT          8    

int main(){

int panel_value , choice;

 while (1){
printf("Enter Residents Current Combind Applance Value (-1 to exit):\n");
scanf("%d" ,&panel_value);
if( panel_value == -1){
    break;
}
printf("\n====SMART UTILITY CONTROL PANEL====\n");
printf("1. Switch Water Heater  ON \n");
printf("2. Switch Air Conditioner OFF \n");
printf("3. Toggle Main Lights \n");
printf("4. Check Security Camera Status \n");
printf("Select Your Choice : \n");
scanf("%d", &choice);

switch(choice){
    case 1: 
    panel_value = panel_value | WATER_HEATER_BIT;
    break;

    case 2:
    panel_value = panel_value & (~AIR_COND_BIT);
    break;

    case 3:
    panel_value = panel_value ^ LIGHT_BIT;
    break;

    case 4:
    if(panel_value & CAMERA_BIT){
        printf("CAMERA is ACTIVE\n");
    } else {
        printf("CAMERA is NOT ACTIVE\n");
    }
    break;
    
    default:
    printf("Invalid Option Entered\n");
    break;
}
printf("UPDATED Panel Value is %d\n", panel_value);

if ( (panel_value & AIR_COND_BIT) && (panel_value & WATER_HEATER_BIT)){
    printf("WARNING: OVERLOAD RISK DETECTD , Both Air Conditioner and Water Heater are ON\n");
}
}
printf("Building Shift is done for the night\n");
return 0;
}
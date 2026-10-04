#include <stdio.h>
int main(){
    int m1 , i, m2 , m3 , n;
    char *Result;
    char Grade;
    float avg;
    printf("Enter the number of students\n");
    scanf("%d",&n);

    for ( i=1; i<=n; i++ ){
        printf("======  STUDENT %d =======\n", i);
printf("Enter the marks of 3 subjects (out of 100)\n");
scanf("%d %d %d", &m1, &m2, &m3);


avg = (m1 + m2 + m3)/3.0 ;

switch ((int)avg/10){
    case 10 :
    case 9 :
    Grade = 'A';
    break;

    case 8:
    Grade = 'B';
    break;

    case 7 :
    Grade = 'C';
    break;

    case 6 :
    Grade = 'D';
    break;

    default:
    Grade = 'F';

}
Result = (avg >= 60 && m1 >=40 && m2 >= 40 && m3 >= 40) ? "PASS" : "FAIL" ;
    printf("========REPORT CARD====\n");
    printf("Marks of subject 1 = %d\n", m1);
    printf("Marks of subject 2 = %d\n",m2);
    printf("Marks of subject 3 = %d\n" , m3);
    printf("Average is %.2f\n" , avg);
    printf("Grade is %c\n", Grade);
    printf("Result is %s\n", Result);


    }
printf("All stuents are Updated\n");
    return 0;
}
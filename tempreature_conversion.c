/* Write a program to convert temperature from Celsius to Fahrenheit. 
 F = (°C × 9/5) + 32

°C = (°F − 32) × 5/9 */

#include<stdio.h>

int main(){

    float f,c;
    int num;
    printf("choose the correct temprature unit you have\n");
    printf("type '1' if you have fahernheitas unit\n");
    printf("type '2'if you have celcius as your unit\n");
    scanf("%d",&num);

    if(num==1){
        printf("enter the value  in fahrenheit i will covert it into celcius\n");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("the value in celcius is %.3f\n",c);
    }
        else if(num==2){
            printf("enter the value in celcius and i will covert it into fahrenheit-\n");
            scanf("%f",&c);
            f=(c*9/5)+32;

            printf("the value in fahrenheit is %.3f\n",f);
        }

else {
    printf("oops! you typed something wrong ");
}
    return 0;

}
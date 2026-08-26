#include<stdio.h>
float add(float a,float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a,float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
int main(){
    float a,b;
    int ch;
    printf("enter two numbers");
    scanf("%f %f",&a,&b);
    printf("enter choice: \n1.add\n2.sub\n3.mul\n4.div\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("result = %.2f",add(a,b));
        /* code */
        break;
    case 2:
    printf("result = %.2f",sub(a,b));
        break;
    case 3:
    printf("result = %.2f",mul(a,b));
        break;
    case 4:
    printf("result = %.2f",div(a,b));
        break;
    }
    return 0;
}

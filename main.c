#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int calcRectangleArea(int a, int b); // done - example function
int calcTriangleCircumference(int a, int b, int c);
double calcRectangleDiagonal(int width, int height);
float average(float a, float b, float c, float d, float e);
int max(int x1, int x2, int x3, int x4);
float convertKmToMiles(float length);
float min (float y1, float y2, float y3, float y4);
float calcSquareArea(float a);
int existsTriangle(int a, int b, int c);
float calculateBMI(int weight, float height);
int calcRectangleCircumference(int a, int b);
int getRandomNumberBetween10and50();
float calcSum(float x1, float x2, int y1, int y2);
float convertEURtoHUF(float amount);
int isTriangleRectangular(int a, int b, int c); // 0 - no, 1 - yes
int existsTriangle(int a, int b, int c); //0 - no, 1 - yes
float convertKmphToMps(float speed); // convert km/h -> m/s
float calcSquareCircumference(float width);
float calcVat(float amount);
int isNumberPalindrom(int number); // input 4-digits number, return 0-no, 1-yes
int isPrimeNumber(int number); // 0 - no, 1 - yes
int calcDigitSum(int number); // 1256 => return 14
float calcThirdPower(float number); // 5 => 125
double absolute(double number); // 6=> 6 , -8 =>8


int main() {
/*
* Project White Mouse
* Author: Dominik Novický
* Date: 06-11-2017
*/
}

int calcRectangleArea(int a, int b){
    int result=a*b;
    return result;
}

int calcTriangleCircumference(int a, int b, int c) {
    if(a==0 || b==0 || c==0){
        return 0;
    }
    else {
        int result = a+b+c;
        return result;
    }
}

float average(float a, float b, float c, float d, float e){
    int average=(a+b+c+d+e)/5;
    return average;
}

double calcRectangleDiagonal(int width, int height){
    double diagonal;
    if(width<=0 || height<=0){
        return 0;
    }
    else {
        diagonal=(double)sqrt(width*width+height*height);
    }
    return diagonal;
}

int max(int x1, int x2, int x3, int x4) {
    if(x1>x2 && x1>x3 && x1>x4){
        return x1;
    }
    else if(x2>x1 && x2>x3 && x2>x4){
        return x2;
    }
    else if(x3>x1 && x3>x2 && x3>x4){
        return x3;
    }
    else {
        return x4;
    }
}

int max2(int a, int b, int c, int d){
    int size = 4;
    int max = 0;
    int array[size];
    for(int i=0; i<size; i++ ){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("%d",max);
}

float convertKmToMiles(float length) {
    float res=length*0.621371192;
    return res;
}

float min (float y1, float y2, float y3, float y4){
    if(y1<y2 && y1<y3 && y1<y4){
        return y1;
    }
    else if(y2<y1 && y2<y3 && y2<y4){
        return y2;
    }
    else if(y3<y1 && y3<y2 && y3<y4){
        return y3;
    }
    else {
        return y4;
    }
}

float min2 (float y1, float y2, float y3, float y4) {
    int size = 4;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    float min = arr[0];
    for (int i = 1; i < size; ++i) {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%1.2f",min);
}

float calcSquareArea(float a){
    if(a>0){
        float res=a*a;
        return res;
    }
    else {
        return 0;
    }
}

int existsTriangle(int a, int b, int c){
    /*if(a==0 || b==0 || c==0){
        printf("Cannot construct a triangle of given sides.");
    }
    else if(a+b<=c || b+c<=a || a+c<=b){
        printf("Cannot construct a triangle of given sides.");
    }
    else {
        printf("Can construct a triangle of given sides.");
    }*/
    if(a==0 || b==0 || c==0){
        return 0;
    }
    else if(a+b<=c || b+c<=a || a+c<=b){
        return 0;
    }
    else {
        return 1;
    }
}

float calculateBMI(int weight, float height){
    if(weight>0 && height>1){
        float bmi = weight/(height*height);
        return bmi;
    }
    else {
        return 0;
    }
}

int calcRectangleCircumference(int a, int b){
    if(a>0 && b>0){
        int res=2*(a+b);
        return res;
    }
    else {
        return 0;
    }
}

int getRandomNumberBetween10and50(){
    int size;
    scanf("%d",&size);
    int arr[size];
    srand(time(NULL));

    for (int i = 0; i < size; ++i) {
        arr[i]=rand()%41+10;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

}

float calcSum(float x1, float x2, int y1, int y2){
    float res=x1+x2+y1+y2;
    return res;
}

float convertEURtoHUF(float amount){
    float res=amount*310.906777;
    return res;
}

int isTriangleRectangular(int a, int b, int c){
    if(a==0 || b==0 || c==0){
        return 0;
    }
    else {
        if (c*c==a*a+b*b || a*a==c*c+b*b || b*b==c*c+a*a ){
            return 1;
        }
        else {
            return 0;
        }
    }
}

float convertKmphToMps(float speed){
    float res = speed*0.2777778;
    return res;
}

float calcSquareCircumference(float width){
    float res=4*width;
    return res;
}

float calcVat(float amount){
    if(amount>0){
        float res = (amount/100)*20;
        return res;
    }
    else {
        return 0;
    }
}

int isNumberPalindrom(int number){
    int a=number%10;
    int b=(number/10)%10;
    int c=(number/100)%10;
    int d=number/1000;

    if(number<0 || number>10000){
        return false;
    }
    else if(a==d && b==c){
        return true;
    }
    else {
        return false;
    }
}

int isPrimeNumber(int number) {
    int res = 0;
    scanf("%d", &number);
    if(number>0 && number!=1){
        for (int i = 2; i < number; ++i) {
            if(number%i==0){
                res++;
            }
        }

        if(res==0){
            return 1;
        }
        else {
            return 0;
        }

    }
    else {
        return 0;
    }
}

int calcDigitSum(int number){
    int res = 0;
    do{
        res=res+number%10;
        number=number/10;
    }while(number>0);
    return res;
}

float calcThirdPower(float number){
    if(number>0){
        float res=powf(number,3);
        return res;
    }
    else {
        return 0;
    }
}

double absolute(double number){
    if(number>=0){
        printf("%lf",number);
    }
    else{
        number=number*(-1);
        printf("%lf", number);
    }
}
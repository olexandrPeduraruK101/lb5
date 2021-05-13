#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){
   const int low = -10; const int High = 10;
int n=1; int minimum = 0; int minind;int kol =0; int ind1 = 0; int ind2 = 0;
int dob = 1;
while(1){ 
printf("\n\nVvedit kilkist masuviv: ");
scanf("%d",&n);
if(n<=0){printf("\n\nVu Velu ne korektne znachennya. Vedit chislo bilshe nullia...\n");continue;}

else{ 
int i = n;int colCount = n;
 int a[i];
srand(time(0));
for (int i=0; i<n; i++){ 
a[i]=low+rand()%High;
}
for(int i = 0; i < colCount; i++){
    if (abs(a[i]) < a[minimum])
        {
            a[minimum] = abs(a[i]);
            minind = i;
        }
}
for (int i=0; i<n; i++){ 
printf("a[%d]=%d\t", i, a[i]);}

printf("\nMinimal masiv: a[%d] = %d",minind, a[minimum]);
// 2 zadacha
for(int i = 0; i < colCount; i++){
    if(a[i]==0 && kol==0){
        kol++;
        ind1 = i;
    continue;}
    if(kol==0){printf("\nNulley netu");break;}
if(a[i]==0 && kol == 1){
    kol++;
        ind2 = i;
continue;}

if (a[i]==0 && kol == 2){
    kol = kol + 1;
continue;}
if(kol == 3){
    printf("\n3 nullia. dobutok = 0");break;
}
}
if((ind1 + 1) == ind2){
    printf("\nNuli stoyat duje bluzko i zadani masuvu ne mojut vidpovidatu vumogam zadachi");
    break;
}
if(kol == 2){
    
    for (int i = ind1 + 1; i < ind2; i++){ 
            dob = dob * a[i];
      }
      printf("\n dobutok mij nulliamu:  %d",dob);
break;}
if(kol==1){
    printf("\nVsiogo lush odun null. A ce ne vidpovidae vumogam zadachi");
    break;
}
}

break;}
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int n=1;int minimum = 0; int minind;int kol =0; int ind1 = 0; int ind2 = 0;
int dob = 1;
puts("\n_____##########________________________##########____");
puts("____############______________________############___");
puts("____________#############################___________");
puts("____________#############################___________");
puts("____________#############################___________");
puts("____############______________________############___");
puts("_____##########________________________##########____");
while(1){ 
printf("\n\nVvedit kilkist masuviv: ");
scanf("%d",&n);
if(n<=0){printf("\n\nVu Velu ne korektne znachennya. Vedit chislo bilshe nullia...\n");continue;}

else{ 
int i = n;int colCount = n;
 int a[i];
for(int i = 0; i < colCount; i++)
{ printf("a[%d]=", i);
scanf("%d", &a[i]);
}
for(int i = 0; i < colCount; i++){
    if (abs(a[i]) < a[minimum])
        {
            a[minimum] = abs(a[i]);
            minind = i;
        }
}
printf("Minimal masiv: a[%d] = %d",minind, a[minimum]);
// 2 zadacha
for(int i = 0; i < colCount; i++){
    if(a[i]==0 && kol==0){
        kol++;
        ind1 = i;
    continue;}
    if(kol==0){printf("Nulley netu");break;}
if(a[i]==0 && kol == 1){
    kol++;
        ind2 = i;
continue;}

if (a[i]==0 && kol == 2){
    kol = kol + 1;
continue;}
if(kol == 3){
    printf(" 3 nullia. dobutok = 0");break;
}
}
if((ind1 + 1) == ind2){
    printf("Nuli stoyat duje bluzko i zadani masuvu ne mojut vidpovidatu vumogam zadachi");
    break;
}
if(kol == 2){
    
    for (int i = ind1 + 1; i < ind2; i++){ 
            dob = dob * a[i];
      }
      printf("\n dobutok mij nulliamu:  %d",dob);
break;}
if(kol==1){
    printf("Vsiogo lush odun null. A ce ne vidpovidae vumogam zadachi");
    break;
}
}

break;}
}

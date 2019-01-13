#include<stdio.h>
#include<conio.h>

main(){
    int nilai;
    /*Membuat program konversi nilai ke huruf*/

    printf("Nilai : ");scanf("%d",&nilai);

    printf("\nNilai yang diperoleh : ");
    if(nilai>=95){
        printf("A+");
    }
    if(nilai>=80&&nilai<95){
        printf("A");
    }
    if(nilai>=65&&nilai<80){
        printf("B");
    }
    if(nilai>=50&&nilai<65){
        printf("C");
    }
    if(nilai>=35&&nilai<50){
        printf("D");
    }
    if(nilai<=34){
        printf("E");
    }
    getch();

}

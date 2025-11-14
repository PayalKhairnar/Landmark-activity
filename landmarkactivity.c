#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct landmark{
    char name[30];
    char city[30];
    int construction_year;
}lnk[100],t;
int n=0;
int main(){
    int i,j,c,flag=0;
    char s[30];
    while(1)
    {
        printf("\n menu\n1.Add records\n2.Display records\n3.Sort\n4.Search\n5.Exit\nEnter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:
            printf("Enter the number of landmarks to add-");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                printf("\nEnter name of landmark:");
                scanf("%s",lnk[i].name);
                printf("\nEnter name of city:");
                scanf("%s",lnk[i].city);
                printf("\nEnter construction year:");
                scanf("%d",&lnk[i].construction_year);
            }
        
    

break;
case 2:
for(i=0;i<n;i++){
    printf("\n**********************************************");
    printf("\nName of landmark:%s",lnk[i].name);
    printf("\nName of city:%s",lnk[i].city);
    printf("\nConstruction year:%d",&lnk[i].construction_year);
}
break;
case 4:
printf("\nEnter landmark number to search");
scanf("%s",&s);
for(i=0;i<n;i++){
    if(strcmp(lnk[i].name,s)==0){
        printf("\nName of landmark:%s",lnk[i].name);
        printf("\nName of city:%s",lnk[i].name);
        printf("\nConstruction year:%d",lnk[i].construction_year);
        flag=1;
        }
}
if(flag==0){
    printf("\nRecord not found!");
}
break;
case 3:
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(lnk[j].construction_year>lnk[j+1].construction_year){
            t=lnk[j];
            lnk[j]=lnk[j+1];
            lnk[j+1]=t;
        }
        
    }
}
printf("\nSorted the records,use the display option to check...");
break;
case 5:
exit(0);
}
}
return 0;
}

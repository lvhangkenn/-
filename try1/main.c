//
//  main.c
//  try1
//
//  Created by 吕航 on 2020/1/24.
//  Copyright © 2020 吕航. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int change(int wallet,char d[]){
      if(strcmp(d,"零")==0) return 0;
      else if(strcmp(d,"一")==0) return 1;
      else if(strcmp(d,"二")==0) return 2;
      else if(strcmp(d,"三")==0) return 3;
      else if(strcmp(d,"四")==0) return 4;
      else if(strcmp(d,"五")==0) return 5;
      else if(strcmp(d,"六")==0) return 6;
      else if(strcmp(d,"七")==0) return 7;
      else if(strcmp(d,"八")==0) return 8;
      else if(strcmp(d,"九")==0) return 9;
      else if(strcmp(d,"十")==0) return 10;
      else return -1;
}
void num(int i){
    if(i==0) printf("零");
    else if(i==1) printf("一");
    else if(i==2) printf("二");
    else if(i==3) printf("三");
    else if(i==4) printf("四");
    else if(i==5) printf("五");
    else if(i==6) printf("六");
    else if(i==7) printf("七");
    else if(i==8) printf("八");
    else if(i==9) printf("九");
    else if(i==10) printf("十");
}
void printf_sum(int wallet){
    int a,b;
    if(wallet<=10) num(wallet);
    else{
        a=wallet/10;
        b=wallet%10;
        if(a!=1) num(a);
        printf("十");
        if(b!=0) num(b);
    }
}
int main() {
    char a[100],b[100],c[100],d[100];
    int wallet=0,i,flag=0;
    scanf("%s %s %s %s",a,b,c,d);
    if(strcmp(a,"整数")!=0||strcmp(c,"等于")!=0) flag=1;
    for(i=1;flag==0;i++){
        if(i==1) wallet=change(wallet,d);
        else {
            scanf("%s",a);
            if(strcmp(a,b)!=0||strcmp(a,"看看")!=0) break;
            scanf("%s",c);
            if(strcmp(a,"看看")==0){
                printf_sum(wallet);
                break;}
            scanf("%s",d);
         if(strcmp(c,"增加")==0) wallet+=change(wallet,d);
         if(strcmp(c,"减少")==0) wallet-=change(wallet,d);
        }
    }
   return 0;
}


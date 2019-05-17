//
//  main.cpp
//  Home Work 16
//
//  Created by 何宗愷 on 2019/5/3.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc,const char * argv[])
{
    char num;
   
    printf("請輸入一個阿拉伯數字:");
    scanf("%d",&num);
    switch(num)
    {
case 0:
        printf("您輸入的數字轉換成國字為 零\n");
            break;
case 1:
        printf("您輸入的數字轉換成國字為 壹\n");
            break;
case 2:
        printf("您輸入的數字轉換成國字為 貳\n");
            break;
case 3:
        printf("您輸入的數字轉換成國字為 參\n");
            break;
case 4:
        printf("您輸入的數字轉換成國字為 肆\n");
            break;
case 5:
        printf("您輸入的數字轉換成國字為 伍\n");
            break;
case 6:
        printf("您輸入的數字轉換成國字為 陸\n");
            break;
case 7:
        printf("您輸入的數字轉換成國字為 柒\n");
            break;
case 8:
        printf("您輸入的數字轉換成國字為 捌\n");
            break;
case 9:
        printf("您輸入的數字轉換成國字為 玖\n");
            break;
case 10:
        printf("您輸入的數字轉換成國字為 拾\n");
            break;
default:
        printf("不好意思,您輸入的識字無法辨識\n");
    }
   
    return 0;
}

//
//  main.c
//  Bài thi trên giấy Practiacl: LBEP bai 1
//
//  Created by mac 2 on 09/10/2020.
//

#include <stdio.h>

void nhap(int &x, int &y)
{
    printf("Nhap 'x:");
    scanf("%",x);
    printf("Nhap y:");
    scanf("%",y);
    
}
int sum(int x, int y)
}
    return x+y
}
int tru(int x, int y)
{
    return x - y;
}
float chia(int x, int y)
{
    return x/y;
}
int main()
{
    int x, y;
    nhap(x,y);
    printf("tong la : %d", sum(x,y));
    printf("hieu la : %d", tru(x,y));
    printf("tich la : %d", nhan(x,y));
    printf("thuong la : %d", chia(x,y));
    
    
    
}

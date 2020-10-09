//
//  main.c
//  Bài thi trên giấy Practiacl: LBEP
//
//  Created by mac 2 on 09/10/2020.
//

#include <stdio.h>

int main()
{
    int n = 10;
    int a[10];
    for(int i=0;i<n;i++)
    {
        printf("Nhap so thu %d\n",i+1);
        scanf("%d",&a[i]);
    }
        printf("Day so la: \n");
        for(int i=n-1; i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}

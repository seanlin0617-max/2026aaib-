///week09-6.cpp 想要更了解大到小的排序
#include <stdio.h>
int main()
{
    ///陣列有十個數字
    int a[10] =  {11,22,33,44,55,66,77,88,99,97};

    for(int i=0; i<10; i++)
        printf("%d ", a[i]);///擠一行
    printf("\n");///跳行

for(int k=0;k<10-1;k++){///只加這一行
    for(int i=0; i<10; i++){///小心,i<10-1
        if(a[i]< a[i+1]){///希望左大右小 但現在反過來
          int temp = a[i];///就交換
          a[i] = a[i+1];
          a[i+1] = temp;
        }
    }
    ///再把陣列印一次, 發現最小的11移到最右邊
    for(int i=0; i<10; i++)
        printf("%d ", a[i]);///擠一行
    printf("\n");///跳行
  }
}

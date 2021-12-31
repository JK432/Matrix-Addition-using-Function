#include<stdio.h>


void read_arr(int a[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
        // printf("Enter Element %d %d :",i,j);
        scanf("%d",&a[i][j]);
            }
    }
}

void add_arr(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
    m3[i][j] =  (m1[i][j] + m2[i][j]);
    }
    }
}

void print_arr(int m[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
        {
        for(j=1;j<=col;j++)
        {
            printf("%d ",m[i][j]);
         }
        printf("\n");
        }
};

int main(void)
{
    int m1[10][10],m2[10][10],m3[10][10],row,col,row2,col2;
  
  
    scanf("%d",&row);
    scanf("%d",&col);
    read_arr(m1,row,col);
    scanf("%d",&row2);
    scanf("%d",&col2);
    read_arr(m2,row2,col2);

    if(row != row2 && col !=col2)
    {
    printf("\nAddition is not possible");
    return 0;
  
    }
    else{
    add_arr(m1,m2,m3,row,col);
    print_arr(m3,row,col);
    }
    
    
}
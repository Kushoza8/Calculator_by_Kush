#include <stdio.h>
#include <stdlib.h>
struct Matrix{
    int rows;
    int columns;
    int *arr_1;
    int *arr_2;
    int *arr_3;
};
void create(struct Matrix *m,int r,int c)
{
    m->rows=r;
    m->columns=c;
    m->arr_1=(int*)malloc(r*c*sizeof(int));
    m->arr_2=(int*)malloc(r*c*sizeof(int));
    m->arr_3=(int*)malloc(r*c*sizeof(int));
}
void insert(struct Matrix *m)
{
    printf("enter data for matrix 1\n");
    for(int i=0;i<m->rows;i++)
    {
        for(int j=0;j<m->columns;j++)
        {
            printf("enter ele: ");
            scanf("%d",&m->arr_1[i*m->columns+j]);
        }
    }
}
void print(struct Matrix *m)
{
    printf("required matrix hai\n");
    for(int i=0;i<m->rows;i++)
    {
        for(int j=0;j<m->columns;j++)
        {
            printf("%d\t",m->arr_1[i*m->columns+j]);
        } 
        printf("\n");
    }
}
void ghusa(struct Matrix *m)
{
    printf("enter data for matrix 2\n");
    for(int i=0;i<m->rows;i++)
    {
        for(int j=0;j<m->columns;j++)
        {
            printf("ente ele: ");
            scanf("%d",&m->arr_2[i*m->columns+j]);
        }
    }
}
void nikal(struct Matrix *m)
{
    printf("required matrix hai\n");
    for(int i=0;i<m->rows;i++)
    {
        for(int j=0;j<m->columns;j++)
        {
            printf("%d\t",m->arr_2[i*m->columns+j]);
        }
        printf("\n");
    }
}
void multiply(struct Matrix *m)
{
    for(int i=0;i<m->rows;i++)
    {
        for(int j=0;j<m->columns;j++)
        {
            m->arr_3[i*m->columns+j]=0;
            for(int k=0;k<m->columns;k++)
            {
                m->arr_3[i*m->columns+j]=m->arr_3[i*m->columns+j]+m->arr_1[i*m->columns+k]*m->arr_2[k*m->columns+j];
            }
        }
    }
}
void print_matrix(struct Matrix *m)
{
    printf("matrix after multiplication is \n");
    for(int i=0;i<m->rows;i++)
    {
        for(int j=0;j<m->columns;j++)
        {
            printf("%d\t",m->arr_3[i*m->columns+j]);
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix array;
    create(&array,2,2);
    insert(&array);
    print(&array);
    ghusa(&array);
    nikal(&array);
    multiply(&array);
    print_matrix(&array);
}
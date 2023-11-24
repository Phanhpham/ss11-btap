#include <stdio.h>
int main()
{
int row,col;
printf("nhap so dong va so cot cua mang hai chieu:");
scanf("%d%d",&row,&col);
int numbers[row][col];
for(int i=0;i<row;i++){
        for (int j=o;j<col;j++){
            printf("numbers[%d][%d]=",i,j);
            scanf("%d",&numbers[i][j]);
        }
}
int choice;
do{
       printf("\n***********************menu");
    printf("1. in gia tri mang theo ma tran\n");
    printf("2. sap xep mang co gia tri phan tu theo dong tang dan");
    printf("3. sap cep mang co gia tri cac phan tu theo cot giam dan");
    printf("4. thoat");
    printf("nhap lua chon cua ban");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            for(int i = 0 ; i < row ; i++){
                for(int j = 0 ; j < col ; j++){
                    printf("%d\t",numbers[i][j]);
                }
                printf("\n");
            }
                break;
        case 2:
            for ( int i =0 ; i < row ; i++){
                for(int j = 0 ; j < col-1 ; j++){
                    for(int k = j+1;k<col;k++){
                        if (numbers[i][j]>numbers[i][k]){
                            int temp = numbers[i][j];
                            numbers[i][j]=numbers[i][k];
                            numbers[i][k] = temp;

                        }

                    }
                }
            }
            for (int i = 0;i<row;i++){
                for(int j=0;j<col;j++){
                    printf("%d\t",numbers[row][col]);
                }
                printf("\n")
            }
                break;
            case 3:
                    
}



    
    

















}
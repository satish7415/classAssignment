// #include<stdio.h>
// int main(){
//     int i,j,k;
//     for(i=5;i>=1;i--){
//             for( j=i-4;j<=1;j++){
//                 printf(" ");
//             }
//             for( k=1;k<=i;k++){
//                  printf("* ");
//             }
//              printf("\n");
//         }
//     printf("\n");
// }
 #include<stdio.h>
int main(){
    int i,j;
    for(i=2;i<=20;i++){
        for(j=1;j<=i;j++){
            if(i%j==0)
            break;
        }
        if(i==j){
            printf(" hello%d\t",i);
        }
    }
}
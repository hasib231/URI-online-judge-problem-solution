#include<stdio.h>
int main()
{
    double M[12][12],sum=0;
    int i,j,k=0;
    char ch[2];
    scanf("%s",&ch);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);

    }
    }

    for(i=1;i<=10;i++){
        for(j=0;j<=4;j++){
            if(j<=k){

                sum=sum+M[i][j];

            }

        }
        if(i<5){
            k++;
        }
        else if(i>=6){
            k--;
        }
        }


    if(ch[0]=='S'){
         printf("%.1lf\n",sum);
    }
    else if(ch[0]=='M'){
        printf("%.1lf\n",sum/30.0);

    }
    return 0;
}



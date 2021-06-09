#include<stdio.h>
int main()
{
    double M[12][12],sum=0;
    int i,j,k=5,l=6;
    char ch[2];
    scanf("%s",&ch);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);

        }
    }
    for(i=7;i<=11;i++){
        for(j=k;j<=l;j++){
            sum=sum+M[i][j];
        }
        k--;
        l++;
    }

    if(ch[0]=='S'){
         printf("%.1lf\n",sum);
    }
    else if(ch[0]=='M'){
        printf("%.1lf\n",sum/30.0);

    }
    return 0;
}



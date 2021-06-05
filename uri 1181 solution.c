#include<stdio.h>
int main()
{
    double M[12][12],sum=0;
    int i,j,n;
    char ch[2];
    scanf("%d",&n);
    scanf("%s",&ch);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
            if(i==n){
                sum=sum+M[i][j];
            }
        }
    }

    if(ch[0]=='S'){
         printf("%.1lf\n",sum);
    }
    else if(ch[0]=='M'){
        printf("%.1lf\n",sum/12.0);

    }
    return 0;
}

#include<stdio.h>
int main()
{
    double M[3][3],sum=0;
    int i,j,k=0;
    char ch[2];
    scanf("%s",&ch);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%lf",&M[i][j]);
            if(j<i){

                sum=sum+M[i][j];
                //k++;
            }

        }
        //k=0;
    }

    if(ch[0]=='S'){
         printf("%.1lf\n",sum);
    }
    else if(ch[0]=='M'){
        printf("%.1lf\n",sum/66.0);

    }
    return 0;
}


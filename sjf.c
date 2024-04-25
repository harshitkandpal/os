#include<stdio.h>

void main(){
    int bt[3]={10,5,8},wt[3],tat[3],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    n=3;
    for(i=0;i<n;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(bt[j]<bt[pos]){
                pos=j;
            }
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i]+=bt[j];
        }
        total+=wt[i];
    }
    avg_wt=(float)total/n;
    total=0;
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
    }
    avg_tat=(float)total/n;
    printf("\nAverage Waiting Time: %f",avg_wt);
    printf("\nAverage TAT: %f",avg_tat);
}

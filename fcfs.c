#include<stdio.h>
#define n 3
int i;
void findWaitingTime(int bt[],int wt[]){
	wt[0]=0;
	for(i=1;i<n;i++)
		wt[i]=bt[i-1]+wt[i-1];
}

void findTurnAroundTime(int bt[],int wt[],int tat[]){
	for(i=0;i<n;i++)
		tat[i]=bt[i]+wt[i];
}

void findAvgTime(int bt[]){
	int wt[n],tat[n],total_wt=0,total_tat=0;
	float s,t;
	findWaitingTime(bt,wt);
	findTurnAroundTime(bt,wt,tat);
	for(i=0;i<n;i++){
		total_wt=total_wt+wt[i];
		total_tat=total_tat+tat[i];
	}
	s=(float)total_wt/(float)n;
	t=(float)total_tat/(float)n;
	printf("Average waiting time: %f\n",s);
	printf("Average turn around time: %f\n",t);
}

void main(){
	int burst_time[]={10,5,8};
	findAvgTime(burst_time);
}

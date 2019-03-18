#include<stdio.h>

void main(){

int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;


printf("\n\n************* Coded By - Deepesh Kr. Pandey *****************\n");
printf("\n\n");
printf("We assume the arrival time to be zero(0). For all process\n\nHow Many Process Do You Have ?  \n");
scanf("%d",&n);
printf("\nEnter Burst Time For : \n");
for(i=0;i<n;i++){
printf("Process P%d : ",i+1);
scanf("%d",&bt[i]);
p[i]=i+1;
}

printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\np%d\t\t %d ",p[i],bt[i]);
    }
 printf("\n");
 }

//first fit c program//
#include<stdio.h>

void main(){
int processes ,blocks;
printf("enter the number of blocks");
scanf("%d",&blocks);
printf("enter the number of processes");
scanf("%d",&processes);
int blocksize[blocks],processsize[processes];
printf("enter the block sizes in order");
for(int i=0;i<blocks;i++){
scanf("%d",&blocksize[i]);
}
printf("enter the size of the processes one by one");
for(int i=0 ; i<processes;i++){
scanf("%d",&processsize[i]);
}

int i , j;
int allocate[processes],allocatedsize[processes];
for(i=0;i<processes;i++){
for(j= 0;j <blocks;j++){

if(processsize[i]<=blocksize[j]){
allocate[i]=j;
allocatedsize[i]=blocksize[j];
break;//beacause after the current process being stored in the memory block no more traversing through the blocks are required as it is the firstfitallocation here//
}
else 
printf(" not allocated");
}
}

printf(" process No. \t processsize\t blockNo.\tblocksize in which it gets stored");
for(i=0;i<processes;i++){
printf("%d\t%d\t%d\t%d",i+1,processsize[i],allocate[i+1],allocatedsize[i]);

printf("\n");
}

}




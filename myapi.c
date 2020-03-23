#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX_PID 1000
#define MIN_PID 100

int  allocate[900];
int allocate_map(){
int a;
for(a=MIN_PID;a<MAX_PID;a++){      //initializing  pid's
allocate[a]==0;}
return 1;  //1 if successfull -1 if unsuccessfull
}
int allocate_pid(){
int a;
for(a=MIN_PID;a<MAX_PID;a++){
if(allocate[a]==0){
allocate[a]=1;
return a;    // pid min =100 so everything will be above 100
}
}
return (-1);   //-1 if wrong and 1 if all is right
}
void release_pid(int pid){
allocate[pid]=0;
}






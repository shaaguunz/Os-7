#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX_PID 1000
#define MIN_PID 100
#define limit MAX_PID-MIN_PID
int  allocate[limit];
int allocate_map(void){
int a;
for(a=0;a<limit;a++){      //initializing  pid's
allocate[a]==0;}
return 0;
}
int allocate_pid(void){
int a;
for(a=0;a<limit;a++){
if(allocate[a]==0){
allocate[a]=1;
return a+100;    // pid min =100 so everything will be above 100
}
}
return 1;   //-1 if wrong and 1 if all is right
}
void release_pid(int pid){
int pid_n = pid-100;
allocate[pid]=0;                                                                                                                                                                                                                             }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         







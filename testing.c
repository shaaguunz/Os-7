#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>
#include "myapi.h"
void *multithread(void *i){
pthread_t pid;
int tid = *((int* )i);  // thread id
allocate_map();
pid = allocate_pid();
if(pid==-1){
pid= allocate_pid(); // if pid is not aviable check again

}
else{
printf("thread  %d  allocated pid is %ld\n",tid,pid);
int random = rand()%30;   //random has random count now
sleep(random);      //uncomment to make it sleep for random time
printf("thread %d having pid %ld released after %d sec  \n",tid,pid,random);
release_pid(pid);
}
}
int main(){
int i,no_of_thread;
printf("enter number of threads \n");
scanf("%d",&no_of_thread);
printf("running now \n");
pthread_t process[no_of_thread];
for(i = 0;i<no_of_thread;i++){

printf("%d",i);
pthread_create(&process[i],NULL,multithread,(void*)&i);
}
for(i=0;i<no_of_thread;i++){
pthread_join(process[i],NULL);
}
printf("successfull ");
return 0;
}









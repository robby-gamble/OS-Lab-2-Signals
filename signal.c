/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>
#include "timer.h"

bool exe = true;
void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  exe = false;
  count++;
  //exit(1); //exit after printing
  alarm(1);

}

int main(int argc, char * argv[])
{
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  signal(SIGINT, handle_sigint);
  count++;
  alarm(1); //Schedule a SIGALRM for 1 second
  while(1){
    while(exe == true){
      
    }
    printf("Turing was right!\n");
    exe = true;
  
  } //busy wait for signal to be delivered
  printf("Turing was right!\n");
  return 0; //never reached
}
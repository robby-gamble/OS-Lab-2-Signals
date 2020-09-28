#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>
#include "timer.h"

void handle_sigint(int sig)
{
 //signal handler
 
  printf("\n Number of Alarms: %d \n", count);
  exit(0);
}


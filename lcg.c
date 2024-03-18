/*  Author: Elin
  Date: 2024-03-18 15:10:40
  Last Modified by:   Elin
  Last Modified time: 2024-03-18 15:10:40
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[])
{
  char *prefix = "echo 'from typing import *\nclass Solution: \n    def ";
  char *function_name = argv[1];
  char *suffix = "(self) -> None: \n        pass' > ";
  char *filename = argv[1];
  char *extension = ".py";
  char *command = malloc(500);
  strcpy(command, prefix);
  strcat(command, function_name);
  strcat(command, suffix);
  strcat(command, "$PWD/");
  strcat(command, filename);
  strcat(command, extension);
  strcat(command, " && code ");
  strcat(command, filename);
  strcat(command, extension);
  system(command);
}
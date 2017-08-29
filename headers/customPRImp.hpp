#include<stdio.h>
#include<stdlib.h>


void siteList(char* filename)
{
  
  int c;
  FILE* dataset;
  dataset = fopen(filename, "r+");
  if(dataset){
    while((c = getc(dataset)) != EOF)
      putchar(c);
    fclose(dataset);
  }


}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_SIZE 1000 // Line Max Lenght

void nodeList(char* filename) //site List for a classical pageRank
{
  char dimLine[MAX_LINE_SIZE]; // Dimenstion Line Tab
  int dim[2]; // Dimension Integer Tab
  int it, i; // iterators
  char line[MAX_LINE_SIZE];//
  char* token;
  char delim[2] = " ";

  FILE* dataset;
  dataset = fopen(filename, "r+");
  /*
    if(dataset)
    {
      while((c = getc(dataset)) != EOF)
        putchar(c);
      fclose(dataset);
   }
  */

  //recovering the dimension
  it = 0;
  fgets(dimLine, 100, dataset);

  token = strtok(dimLine, delim);
  while (token != NULL)
  {
    dim[it] = atoi(token);
    printf("-->Dimension : %s\n", token);
    token = strtok(NULL, delim);
    it++;
  }
  printf("x : %d, y : %d\n", dim[0], dim[1]);
  char nodeName[dim[0]][MAX_LINE_SIZE];

  printf("-->Datasets :\n");
  //while(1){
  for(i = 0; i < dim[0]; i++)
  {
    if (fgets(nodeName[i], 500, dataset) == NULL) break;
    printf("%s",nodeName[i]);
  }
  //it++;
  //}
  fclose(dataset);


}

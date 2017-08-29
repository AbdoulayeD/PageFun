#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_SIZE 1000 // Line Max Lenght

int getMatVal(int x, int y, int** n, int size) // Have to review need a better way to store ajacency matrix
{
  for (int i = 0; i < size; i++)
    if (n[i][0] == x &&  n[i][1] == y)
      return 1;
return 0;
}
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

  fgets(dimLine, 100, dataset);
  token = strtok(dimLine, delim);
  it = 0;
  while (token != NULL)
  {
    dim[it] = atoi(token);
    printf("-->Dimension : %s\n", token);
    token = strtok(NULL, delim);
    it++;
  }
  printf("x : %d, y : %d\n", dim[0], dim[1]);
  char nodeName[dim[0]][MAX_LINE_SIZE];
  char idLC[dim[1]][2];

  printf("-->Datasets :\n");
  //while(1){
  for(i = 0; i < dim[0]; i++)
  {
    if (fgets(nodeName[i], 500, dataset) == NULL) break;
    printf("%s",nodeName[i]);
  }

  for(i = 0; i < dim[1]; i++)
  {
    fgets(line, 100, dataset);
    token = strtok(line, delim);
    it = 0;
    while (token != NULL)
    {
      idLC[i][it] = atoi(token);
      printf("-->Values Line:s %s\n", token);
      token = strtok(NULL, delim);
      it++;
    }
}
}

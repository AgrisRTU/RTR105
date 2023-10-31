
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","w");
  if (pFile!=NULL)
  {
    fputs ("Fails atvērts, \n",pFile);
    fclose (pFile);
  }

 else
 {
 printf("Faila nav, \n");
 }

  return 0;
}

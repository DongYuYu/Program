/* FEOF example */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *fp = fopen("c:/Users/owner/Desktop/Program/in.txt", "a");
  // for (int i=0; i<23; i++)
 //fprintf(stdout,"%d\n",i);
  // printf("%d", fp);
   int a[23]={95};
  // gets(a);
  //a= fgets(1,1,fp);
  char s[] ="HELLOWORLD";
  
  if (feof(fp)) printf("end\n");
  else printf ("no\n");
  printf("%d\n", ftell(fp));
  
  // fwrite(s,1,strlen(s),fp);
  // printf("%s",  fputs("Hello",fp));
  // printf("%s", a);
  
  
  
 printf ("know : %s\n", fp->_tmpfname);
 fseek(fp, -5, SEEK_END);
 printf("%d\n",ftell(fp));
   printf ("know : %d\n", (fp->_file));
 //   printf ("know : %d\n", *(fp->_base));

   //printf("HI: %d\n", ftell(fp));
   
 // fseek (fp, -5, SEEK_CUR);
   
 // printf("Hey: %d\n", ftell(fp));
  // printf("WHY: %d\n", SEEK_END);
   
   fclose(fp);
  // getchar();
  system("pause");
   
   return 0;
}

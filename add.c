#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv []){
  FILE *fp1,*fp2;
  char  buf[100];
  char  buf2[100];
  char name[20];
  char name2[20];
  int a1=atoi(argv[1]);
  int a2=atoi(argv[2]);
  int i;
  int length1;
  int length2;
  sprintf(name,"stage%d.json",a2);
  fp1=fopen(name,"r");
  if(fp1==NULL) return 0;

  while(fscanf(fp1,"%s",buf)!=EOF)
   
  fclose(fp1);

  for(i=a2-1;i>a1;i--){
     
    length1=strlen(name);
    length2=strlen(name2);
    memset(name, '\0' , length1 );
    memset(name2, '\0' , length2 );
   
    sprintf(name,"stage%d.json",i);
    sprintf(name2,"stage%d.json",i+1);
    fp1=fopen(name,"r");
    fp2=fopen(name2,"w");
    while(fscanf(fp1,"%s",buf2)!=EOF)
      fprintf(fp2,"%s\n",buf2);
    length1=strlen(buf2);
    memset(buf2, '\0' , length1 );
    fclose(fp1);
    fclose(fp2);
  
   
  }
   length1=strlen(name);
  memset(name, '\0' , length1 );
  sprintf(name,"stage%d.json",a1+1);
  fp1=fopen(name,"w");
  fprintf(fp1,"%s\n",buf);
  fclose(fp1);
  
}

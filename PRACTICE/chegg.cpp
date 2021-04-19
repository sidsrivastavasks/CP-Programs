#include<stdio.h>

int main()
{
    FILE *fp;
   int value=1000;   
   int buffer;   
    fp=fopen("bin_file.bin","wb");  
    if (fwrite(&value,sizeof(int),1,fp)==1)   
    {
        printf("Data Write Success!!!!");
        }
        else{
            printf("Error Writing File Contents !!!!");
            }
    fclose(fp);
    fp=fopen("bin_file.bin","rb"); 
    fread(&buffer,sizeof(int),1,fp);
    printf("\nBinary File Content :::: %d",buffer);
    fclose(fp);
    return 0;
}

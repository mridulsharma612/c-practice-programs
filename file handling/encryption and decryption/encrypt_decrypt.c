#include<stdio.h>
#include<stdlib.h>
void decrypt(char*);
void encrypt(char*);


void main()
{
    char file_location[1000];
    int option;
  // while(1)
    {
    printf("Enter the path of the file with extension\n");
    fflush(stdin);
    gets(file_location);
    printf("Do you want to (1)encrypt or (2)decrypt?");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
    {
        encrypt(file_location);
        break;
    }
    case 2:
    {
        decrypt(file_location);
        break;
    }
    default:printf("Invalid selection\n");
   }

   }
}

void encrypt(char file_location[])
{

    FILE *file, *temp;
    int key;
    int bin;
    printf("Enter the key\n");
    scanf("%d",&key);
    file = fopen(file_location,"rb");
    temp = fopen("temp.txt","wb");
    if(file == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    if(temp == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    bin = fgetc(file);
    while(!feof(file))
    {
        bin += key;
        fputc(bin,temp);
        bin = fgetc(file);
    }
    fclose(file);
    fclose(temp);
    file = fopen(file_location,"wb");
    temp = fopen("temp.txt","rb");
     if(file == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    if(temp == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    while (fread(&bin,sizeof(bin),1,temp))
    {
        fwrite(&bin,sizeof(bin),1,file);
    }
    printf("Encrypted successfully\n");
    fclose(file);
    fclose(temp);
    remove("temp.txt");

}


void decrypt(char file_location[])
{

    FILE *file, *temp;
    int key;
    int bin;
    printf("Enter the key\n");
    scanf("%d",&key);
    file = fopen(file_location,"rb");
    temp = fopen("temp.txt","wb");
    if(file == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    if(temp == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
     bin = fgetc(file);
    while(!feof(file))
    {
        bin -= key;
        fputc(bin,temp);
        bin = fgetc(file);
    }
    fclose(file);
    fclose(temp);
    file = fopen(file_location,"wb");
    temp = fopen("temp.txt","rb");
     if(file == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    if(temp == NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    while (fread(&bin,sizeof(bin),1,temp))
    {
        fwrite(&bin,sizeof(bin),1,file);
    }
    printf("Decrypted successfully\n");
    fclose(file);
    fclose(temp);
    remove("temp.txt");

}

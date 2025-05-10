#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define MAX 5

int main(int argc, char *argv[])
{

    //Example 1 (Worksheet 21-d) - Copy data from one file to another - character by character
    //--------------------------------------------------------------------------------------------
    FILE *inStream;
    FILE *outStream;
    char fileOpen[80],fileDuplicate[80];


    printf("Enter a file name:");
    scanf("%s",fileOpen);
    printf("Enter the duplicate file name:");
    scanf("%s",fileDuplicate);

    inStream = fopen(fileOpen,"r");
    if(inStream==NULL){
        printf("Cannot open file!");
        exit(1);
    }
    outStream = fopen(fileDuplicate,"w");
    if(outStream==NULL){
        printf("Cannot open file!");
        exit(1);
    }
    char ch;
    while(fscanf(inStream,"%c",&ch)!=EOF){
            fprintf(outStream,"%c",ch);
    }
    fclose(inStream);
    fclose(outStream);

    //--------------------------------------------------------------------------------------------


    //Example 2  (Worksheet 21-f)-- Add structured data to a file
    //------------------------------------------------------------
    //Store data internally
    /*char *employee_names[]={"Ahmet", "Mehmet", "Ali", "Veli", "Huseyin"};
    int employee_salary[]={10031,10067,10083,10095,10105};
    float employee_bonus[]={7.82,9.14,8.79,10.57,8.50};

    //Ask user to enter the file name
    char fileName[80];
    printf("Enter File name:");
    scanf("%s",fileName);

    //Step 1: Declera and open file
    FILE *outFile;
    outFile = fopen(fileName,"w"); //WRITING
    if(outFile==NULL){
        printf("File cannot be opened!");
        exit(1);
    }

    //Step3: Write data to the file
    int i;
    for(i=0;i<MAX;i++){
        fprintf(outFile,"%s %d %f\n",employee_names[i], employee_salary[i], employee_bonus[i]);
    }

    //Step3: Close the file
    fclose(outFile);*/

    //--------------------------------------------------------------------------------------------


    //Example 3 (Worksheet 21-f) - Copy structured data from one file to another
    //---------------------------------------------------------------------------------------
    /*FILE *inStream;
    FILE *outStream;
    char fileOpen[80],fileDuplicate[80];
    char ch;

    printf("Enter a file name:");
    scanf("%s",fileOpen);
    printf("Enter the duplicate file name:");
    scanf("%s",fileDuplicate);

    inStream = fopen(fileOpen,"r");
    if(inStream==NULL){
        printf("Cannot open file!");
        exit(1);
    }
    outStream = fopen(fileDuplicate,"w");
    if(outStream==NULL){
        printf("Cannot open file!");
        exit(1);
    }

    char employee_name[80];
    int employee_salary;
    float employee_bonus;

    //Reading structured and writing structured
    while(fscanf(inStream,"%s %d %f",employee_name, &employee_salary, &employee_bonus)!=EOF){
            fprintf(outStream,"%s %d %f\n",employee_name, employee_salary, employee_bonus);
    }
    rewind(inStream);
    while(fscanf(inStream,"%s %d %f",employee_name, &employee_salary, &employee_bonus)!=EOF){
            printf("%s %d %f\n",employee_name, employee_salary, employee_bonus);
    }
    fclose(inStream);
    fclose(outStream);*/

    return 0;
}

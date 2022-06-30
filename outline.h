/******************************************************************************
STEM Second Brain (SSB)
By @cheynolds
Version 0.001
A tool to speed analysis, and a reference for common STEM equations.
*******************************************************************************/

#include <stdio.h>


int main()
{
    
   splash();
   menuSTEM();
   

    return 0;
}

int splash(void)
{

    printf(".\n"); 
    printf("..\n"); 
    printf("...\n"); 
    printf("....\n"); 
    printf("Welcome to SSB\n");
    printf("....\n"); 
    printf("...\n"); 

}

menuSTEM()
{
    int selection_menuSTEM = 0;
    printf("Select your STEM calculation category: \n");
    printf(".........Science.........1\n");
    printf(".........Technology......2\n");
    printf(".........Engineering.....3\n");
    printf(".........Mathematics.....4\n");
    scanf("%d",&selection_menuSTEM);
    switch(selection_menuSTEM)
    case 1:
        printf("SCIENCE!\n");
        menuScience();
    return 0;
}

menuEngineering()
{
    printf("Select your engineering discipline: \n");
    printf("....Mechanical....1\n");
    printf("....Electrical....2\n");
    printf("....Circuits......3\n");
    
    
}
menuScience()
{
    int selection_menuScience = 0;
    printf("Select your scientific discipline: \n");
    printf(".........Biology........1\n");
    printf(".........Science........2\n");
    printf(".........Chemistry......3\n");
    scanf("%d",&selection_menuScience);
    switch(selection_menuScience)
    case 1:
        printf("BIOLOGY!\n");
        menuBIO();
    return 0;

}

menuBIO()
{
    ;
}

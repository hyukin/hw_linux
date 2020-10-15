#include <search.h>
#include <stdio.h>
#include <string.h>

struct student{
    char *name; 
    int midsocore;
    int finscore; 
};

int compare (const void *cp1 , const void *cp2 )
{
    return strcmp (((struct student *)cp1)->name , ((struct student *)cp2)->name );
}

void structs (const void *nodeptr , VISIT order , int level )
{
    if (order == preorder || order == leaf)
        printf ("name = %-5s, mid test score = %d, final test score = %d \n ", 
            (*(struct student **)nodeptr)->name , 
            (*(struct student **)nodeptr)->midsocore ,
            (*(struct student **)nodeptr)->finscore );
}

int main (void )
{
    int num;
    int i;
    
    printf ("class members: ");
    scanf ("%d", &num);
    char nametable [num *20 ]; 
    struct student nodetable [num]; 
    struct student *root = NULL ; 
    char *nameptr = nametable;
    struct student *nodeptr = nodetable;
    struct student **ret;
    
    while (i ++ < num) {
        printf ("name , mid test score, final test score : ");
        scanf ("%s %d %d", nameptr, &nodeptr ->midsocore , 
        &nodeptr ->finscore ) != EOF;
        nodeptr ->name = nameptr;
        ret = (struct node **) tsearch ((void *) nodeptr,(void **) &root, compare);
        printf ("\"%s \" 's is", (*ret)->name );
        if (*ret == nodeptr)
        printf (" tree input\n ");
        else
        printf (" exist\n ");
        nameptr += strlen (nameptr) + 1 ;
        nodeptr ++;
        }printf ("\n ");
        twalk ((void *) root, structs);
    return 0 ;
}

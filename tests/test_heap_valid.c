#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define ALLOC_SIZE 48

#define CHUNK_SIZE (1<<12)
/* This test checks to ensure that the program break does not move
  between two allocations of the same size.  Note that this test WILL
 * PASS with the given allocator, but that the given allocator does NOT
 * meet the requirements of this assignment.  This test should, however,
 * help you debug your own allocator and think of ways to write your own
 * tests for your allocator. */
 int heap_validator();
size_t test(void *ptr);
int main(int argc, char *argv[])
{
    

    
    int* value = malloc( 10 * sizeof(int ) );
    value[0] = 2;
    int* value2 = malloc( 1 * sizeof(int ) );
//    fprintf(stderr,"%i\n", value[127] );
    
    value2[0] = 1; 
 //   fprintf(stderr,"%i\n", value[30] );
    
    free(value);
    free(value2);
 //   fprintf(stderr,"%i\n", value[19] );
 //   int* list = malloc(80); 
    

//    list[19] =10;

//    fprintf(stderr,"%iafter freeing\n", list[19]); 

//    prt = calloc(sizeof(char),32);

//    prt = calloc(sizeof(char),16);

//    prt =malloc(48);
//    prt =malloc(48);
//    prt =malloc(48);
//
//    prt =malloc(1);
//
//    prt =malloc(48);
//    prt =malloc(8);
//
//    prt =calloc(sizeof(char), 40);
//    prt =calloc(sizeof(char) ,4);
//    prt =calloc(sizeof(char), 4 );
//
//    prt = malloc(64);

    
//   printf("%s\n",(char*)ptr);
 
//    void *ptr2 = malloc(10 );
 //  ptr = realloc((void*)ptr,100 );
//    printf("%i",CHUNK_SIZE );
    
    
 //  fprintf(stderr, "%i\n",heap_validator()); 
    
    
 //  free(ptr2);
    

   
   return 0; 
    }
   

#include<stdio.h>
#include<stdlib.h>

int cmp( void * a, void * b){
    return (*(int*)a - *(int*)b);
}
void Q_sort(){
    int c[10]={9,8,7,6,5,4,3,2,1};
    print_array(c);
    int item_size = sizeof(c)/sizeof(int);
    qsort(c,item_size,sizeof(int),cmp);
    print_array(c);
}


int print_array(int arr[]){
    int i;
    printf("The array is : \n");
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    printf("The array is printed \n");
}

void B_search(){
    int arr[9]={1,2.3,4,5,6,7,8,9};
    print_array(arr);
    int * result;
    int key = 5;
    result = (int*)bsearch(&key,arr,9,sizeof(int),cmp);//here the address should be given in the first argunment
    printf("The index of the searched element is %d\n",*result);
    
    
}


int main(){
    char a[10] = "10";

    float b = atof(a);
    printf("atof: %f\n",b);

    printf("atoi : %d\n",atoi(a));

    printf("atol : %li\n",atol(a));

    printf("strtod  : %lf\n",strtod(a,NULL));//the second argunment can be null or some pointer 

    printf("strtol : %lf\n",strtod(a,NULL));

    char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtoul(str, &ptr, 10);
   printf("The number(unsigned long integer) is %lu\n", ret);
   printf("String part is |%s|\n", ptr);

   

    int * ptr2;
    ptr2 = (int*)malloc(10*sizeof(int));
    int i;
    for(i=0;i<10;i++){
        ptr2[i]=i;

    }
    printf("malloc : \n");
    for(i=0;i<10;i++){
        printf("%d",ptr2[i]);
    }
    printf("\n");


    float * ptr3;
    ptr3 = (float*)calloc(10,sizeof(float));
    for(i=0;i<10;i++){
        ptr3[i]=i;
    }
    printf("malloc : ");
    for(i=0;i<10;i++){
        printf("%f\n",ptr3[i]);
    }
    printf("\n");

    ptr2 = (int*)realloc(ptr2,20);
    for(i=0;i<20;i++){
        ptr2[i]=i;
    }
    printf("relloc : \n");
    for(i=0;i<20;i++){
        printf("%d ",ptr2[i]);
    }
    printf("\n");

    free(ptr2);//free() releasing the dynamic memory
    free(ptr3);

    //exit() closes all the files and exit the program safely
    //abort() exit the program without closing buffers and other files 
    //atexit() can be declared anywhere in the program and will be executed during the termination of the program
    //atexit(helloworld(),termiateObject()) the functions defined inside the argument list will be called at terminatino

    char * path ;
    path = getenv("PATH");//returns a pointer variable of the path
    printf("The path with getenv is : %s\n",path);

    int exitcode = system("echo hello world");//used to invoke OS commands
    printf("%d\n",exitcode);

    Q_sort();
    B_search();

    //bsearch(key,array,nitems,size_of_EachItem,comparison_function)
    //key is a pointer that points the search element
    //array is a pointer to the first elemnt of the array
    //nitems is the size of the array
    //size_of_eachItems is the size data in each array
    //comparison(funcitons) is the function calling statenmen that should return a value to execute binary search


    //qsort(base,nitems,itemSize,comparisiion_function)
    //base is the address of the first element of the array
    //nitems is the size of the array
    //itemSize is the size of the element in the array
    //comparision_function is a function that compare and induce swap

    float test = 10.5;
    printf("abs : %d",abs(test));
    // similarly labs is used for long absolute value


    #include <stdlib.h>
#include <stdio.h>
 

   int nums[4] = {6,56,-34,-45};
   int den[4] = {5,7,3,-7};
   div_t ans;   /* div_t is a struct type contain two ints:
                'quot' stores quotient; 'rem' stores remainder*/
   short i2,j2;
 
   printf("Results of division:\n");
   for (i2 = 0; i2 < 4; i2++)
      for (j2 = 0; j2 < 4; j2++)
      {
         ans = div(nums[i2],den[j2]);
         printf("Dividend: %6d  Divisor: %6d", nums[i2], den[j2]);
         printf("  Quotient: %6d  Remainder: %6d\n", ans.quot, ans.rem);
      }

    //similarly ldiv() is used for long and long long integer division
    srand(55);//srand is used to contol the subsequent rand 
    //the subsequennt rand followed by the srand will generate seed based on the rand
    printf("random with rand : %d\n",rand()%10 + 1);//rand()%max + min

    //int mblen(const char *str, size_t n)//where n is the maximum number of bytes to be checked

    int size2 = mblen(ptr2,10);

    int * ptr4 = (int *)malloc(10*sizeof(int)); 
    printf("mblen for char ptr2 : %d\n",size2);
    printf("mblen for int ptr 4 : %d\n",mblen(ptr4,10));
    /*mblen()function	Get number of bytes in a character.
mbstowcs()function	Convert a character string to a wide-character string.
mbtowc()function	Convert a character to a wide-character code.
wcstombs()function	Convert a wide-character string to a character string.
wctomb()function	Convert a wide-character code to a character.*/
//can't understand the above functios









}

#include <stdio.h>
#include <stdlib.h>

void add_ele();
void remove_ele();
void update_ele();
int *arr;

int main()
{
    int arr_size;
    int arr_element;
    printf("enter the size of array: ");
    scanf("%i",&arr_size);

    arr=calloc(arr_size,sizeof(int));

    for(int k=0; k<arr_size; k++)
    {
        arr[k]=-1;
    }

    int arr_up;
    
    printf("do you want to update your array?\nenter 1 if yes and 2 if no\ninput: ");
    scanf("%i",&arr_up);

    if(arr_up==1){
        
        update_ele();
        int up_more;
        printf("\n\ndo you want to edit more? \nenter 1 if yes and 2 if no\n Input: ");
        scanf("%i",&up_more);

        while(up_more==1){
            update_ele();
            printf("enter 1 to continue\nInput: ");
            scanf("%i",&up_more);
        }

        printf("your array is:\n"); 
        for(int i=0; i<arr_size;i++)
        {
            printf("%i",arr[i]);
        }

        printf("\nThank You");
    }

    else{
        printf("your array is: "); 
        for(int i=0; i<arr_size;i++)
        {
            printf("%i",arr[i]);
        }
        printf("\nThank You");
    }
    
    
    return 0;
}

void add_ele(int arr_ind, int arr_num)
{
    arr[arr_ind]= arr_num;
}

void remove_ele(int arr_ind)
{
    arr[arr_ind]= -1;
}
void update_ele(){
    int up_input;
        printf("1.To add an element enter 1 \n2.To remove an element enter 2  \nInput: ");
        scanf("%i",&up_input);

        if(up_input==1){
            int a;
            int b;

            printf("The index: ");
            scanf("%i",&a);
            printf("The number: ");
            scanf("%i",&b);
            add_ele(a,b);
        }

        else if(up_input==2){
            int a;
            printf("The index: ");
            scanf("%i",&a);
            remove_ele(a);
        }
        else{
            printf("enter a valid input!\n");
            update_ele();
        }
}

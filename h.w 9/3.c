 #include <stdio.h>

int main()
{ while(1)
{
   int a[10],sum = 0,start, end,i;


    printf("Enter 10  integers: ");
    for (i = 0; i <10; i++) {
        scanf("%d", &a[i]);
    }


    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);


    for (i = start-1; i <end; i++) {
        sum=sum+a[i];
    }

    printf("The sum of the array elements in the given range is: %d", sum);

    return 0;
}

}



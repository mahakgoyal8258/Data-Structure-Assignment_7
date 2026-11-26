
#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int min, max, temp;
    int left = 0, right;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    right = n - 1;

    while(left < right)
    {
        min = left;
        max = left;

        // Find minimum and maximum
        for(j = left; j <= right; j++)
        {
            if(a[j] < a[min])
                min = j;

            if(a[j] > a[max])
                max = j;
        }

        // Place minimum at beginning
        temp = a[left];
        a[left] = a[min];
        a[min] = temp;

        // Update maximum position if it was at left
        if(max == left)
            max = min;

        // Place maximum at end
        temp = a[right];
        a[right] = a[max];
        a[max] = temp;

        left++;
        right--;
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


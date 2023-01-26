#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct name {
    char *names;
    int pos;  
}
name;

void swap (name *x, name *y)
{
    name tmp = *x;
    *x = *y;
    *y = tmp;
}

//this merge sort alogirthms is credited to programmiz "https://www.programiz.com/dsa/merge-sort"
// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) 
        {
            arr[k] = L[i];
            i++;
        } 
        else 
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) 
{
    if (l < r) 
    {
        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    name data[n];
    for (int i = 0; i < n; i++)
    {
        char *str = malloc(sizeof(char) * 12);
        scanf("%s", str);
        data[i].names = str;
        data[i].pos = i+1;
        if (i > 0)
        {
            for (int j = i; j > 0; j--)
            {
                if (strcmp(data[j-1].names, data[j].names) > 0)
                {
                    swap(&data[j-1], &data[j]);
                }
            }
        }
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        char word[12];
        scanf("%s", word);
        int l = 0;
        int h = n - 1;
        while (--n)
        {
            int mid = (l + h)/2;
            if (strcmp(word, data[mid].names) < 0)
            {
                h = mid - 1;
            } 
            else if (strcmp(word, data[mid].names) > 0)
            {
                l = mid + 1;
            }
            else 
            {
                int sum = 0; 
                for (int j = 0, p = strlen(word); j < p; j++)
                {
                    sum += ((word[j] - 'A') + 1);
                }
                printf ("%d\n", data[mid].pos * sum);
                break;
            }
        }
    }
    for (int m = 0; m < n; m++)
    {
        free(data[m].names);
    }
    return 0;
}

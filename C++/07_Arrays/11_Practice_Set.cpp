/*
    PURPOSE: Practice set - a collection of classic array problems solved with
    functions. Each function demonstrates one reusable idea: summing, average,
    counting evens, max, second max, sorted-check and even-first ordering.

    NOTE ON ARRAY PARAMETERS: "int arr[]" in a function parameter does NOT
    copy the array. Instead it "decays" into a pointer to the first element,
    so the function works on the ORIGINAL array. Because of that, the caller
    MUST also pass the size (int size) - a function cannot know how long the
    array is on its own.
*/

#include <iostream>
using namespace std;

/* Sum of all elements.
   Traverse the array with a running total: add each element to "sum".
   Start sum at 0 so the accumulator is correct even for an empty array. */
int sum(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];   // short for: sum = sum + arr[i]
    }
    return sum;
}

/* Average = total divided by count.
   The cast "(double)sum" is important: without it, "sum/size" would be
   INTEGER division (e.g. 21/6 -> 3, losing the .5). Casting to double first
   makes the division produce a real number like 3.5. */
double avg(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return (double)sum/size;
}

/* Count how many elements are even.
   "arr[i] % 2" is the REMAINDER after dividing by 2. Even numbers leave
   remainder 0 (arr[i] % 2 == 0), odd numbers leave 1. This is the standard
   way to test even/odd in C++. */
int even(int arr[],int size)
{
    int count=0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
        }
    }
     return count;
}

/* Find the maximum value.
   Same "running candidate" idea as file 05: assume arr[0] is the biggest,
   then update whenever a larger value appears.

   WHY start the loop at i = 1? arr[0] already seeded the answer, so
   comparing arr[0] with itself is pointless. Starting at 1 saves one check. */
int max(int arr[],int size)
{
    int max=arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
     return max;
}

/* Find the second largest value.
   ALGORITHM: keep BOTH the largest ("max") and the second largest
   ("secondmax"). When a new largest appears, the old largest DEMOTES to
   second largest. The else-if catches values that are not the new max but
   still beat the current secondmax.

   EDGE CASE: if the array is {5,5,1}, the "arr[i]!=max" guard means the
   second 5 is NOT counted, so secondmax stays 1. (Behavior for duplicates
   depends on what definition you want - worth thinking about.) */
int second_max(int arr[],int size)
{
    int max=arr[0];
    int secondmax=arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            secondmax=max;      // old champion becomes second place
            max=arr[i];         // new champion takes the top spot
        }
        else if (arr[i]>secondmax && arr[i]!=max)
        {
            secondmax=arr[i];   // beats second place, but not the leader
        }
        
    }
     return secondmax;
}

/* Check whether the array is sorted in ASCENDING order.
   Compare each element with its immediate PREVIOUS neighbour: if any element
   is smaller than the one before it, the order is broken -> return false.
   "return false" inside the loop exits the whole function immediately.

   NOTE: there is an unused variable "sort" and an unused "max" here - they
   do nothing. If no violation is found the loop finishes and we return true,
   which is the correct answer. */
bool sorted(int arr[],int size)
{
    bool sort=false;
    int max=arr[0];

    for(int i=1;i<size;i++)
    {
    if(arr[i] < arr[i-1])
        return false;
    }

return true;
}


/* Reorder the array so all EVEN numbers come first, then all ODD numbers.
   (This is called a "stable partition by even/odd".)

   Step 1 - copy every even element into temp, filling from index 0 upward.
   Step 2 - copy every odd element into temp, continuing from the current
            index, so odds land right after the evens.
   Step 3 - print temp, which now holds the reordered array.

   EDGE CASE: if every element is even, the second loop copies nothing and
   index already equals size - the result is simply the original order. */
void evensort(int arr[],int size)
{
    int temp[size];
    int index=0;

    // First pass: evens in their original relative order.
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            temp[index]=arr[i];
            index++;
        }        
    }

    // Second pass: odds, appended after the evens.
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
            temp[index]=arr[i];
            index++;
        }        
    }
    
    cout<<"Sorted array is :- ";
    for (int i = 0; i < size; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int numbers[6]={1,2,3,4,5,6};
    /* Compute the element count from the byte sizes (see file 09) and pass
       it to every function, because array parameters decay to pointers and
       the size cannot be deduced inside the callee. */
    int size=sizeof(numbers) / sizeof(numbers[0]);
    cout<<"Sum of the array element is "<<sum(numbers,size)<<endl;
    cout<<"Average of the array element is "<<avg(numbers,size)<<endl;
    cout<<"Even numbers in the array element is "<<even(numbers,size)<<endl;
    cout<<"Maximun number in the array element is "<<max(numbers,size)<<endl;
    cout<<"Second Maximun number in the array element is "<<second_max(numbers,size)<<endl;
    cout<<"Element are sorted = "<<sorted(numbers,size)<<endl;
    evensort(numbers,size);

    return 0;
}
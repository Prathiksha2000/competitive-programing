//https://practice.geeksforgeeks.org/problems/quick-sort/1


/* The main function that implements QuickSort
 arr[] --> Array to be sorted, low  --> Starting index, high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now at right place */
        int pi = partition(arr, low, high);
        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition (int arr[], int low, int high)
{
   // Your code here
   int p = high;
   int pivot = arr[p];
   int i = low;
   int itr = low;
   while(itr <= p-1){
       //check all the elements less than p with pivot
       if(arr[itr] < pivot){
           
           int temp = arr[i];
           arr[i] = arr[itr];
           arr[itr] = temp;
           i++;
       }
       itr++;
   }
   //final swap of i and p position
   arr[p] = arr[i];
   arr[i] = pivot;//pivot is arr[p] from above code
   
   return i; //ith element is now in sorted position
}


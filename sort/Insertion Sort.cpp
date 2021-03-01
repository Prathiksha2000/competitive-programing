//https://practice.geeksforgeeks.org/problems/insertion-sort/1


void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} 

void insert(int arr[], int i)
{
    // Your code here  
    //key acts like temp
    int key, j ; 
     
        //key contains first unsorted element in unsorted array 
        key = arr[i];  
        //till j is considered as sorted elements
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            //elements are pushed to right.arr[j+1] is available in key
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        //after pushing right and finding the correct position
        arr[j + 1] = key;  
    
}

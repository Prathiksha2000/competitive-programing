//https://practice.geeksforgeeks.org/problems/merge-sort/1

void merge(int arr[], int l, int m, int r)
{
     // Your code here
     int i = l;     // <=m
     int j = m+1;   // <=r
     /*
      If instead of array vector is used , size and 
     k is not needed as we can use pushback method and 
     vector sixe is dynamically allocated.
     temp[k] = arr[i]; (instead) temp.push_back(arr[i]);
     */
  
     // k is for newly created temp array indexing
     int k = 0;
     //size is for newly created temp array size wich is the copied back to orhinal arr[] for returning
     int size =(r-l)+1;
     int temp[size];
     
     while (i <= m && j <= r){
         if (arr[i] < arr[j])
         {
             temp[k] = arr[i];
             i++;
             k++;
         }
         else 
         {
             temp[k] = arr[j];
             j++;
             k++;
         }
   
     }
     
     while (i <= m){
        temp[k] = arr[i];
        i++; 
        k++;
     }
     while (j <= r){
        temp[k] = arr[j];
        j++; 
        k++;
     }
     //just copying temp nack to array
      i = l;
     for(int item : temp){
         arr[i] = item;
         i++;
     }
     
}


/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

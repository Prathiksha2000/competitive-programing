//Given an Integer N and a list arr. Sort the array using bubble sort algorithm.
//https://practice.geeksforgeeks.org/problems/bubble-sort/1#


//Function to sort the array using bubble sort algorithm.
void bubbleSort(int arr[], int n)
{
    // Your code here    
     int i, j;  
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            
            if (arr[i] > arr[j])  
            {
               int temp = arr[i];
               arr[i]= arr[j];
               arr[j] = temp;
            }
        }
    }
}

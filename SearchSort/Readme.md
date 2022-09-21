# Search-Sort 

https://www.fullstack.cafe/blog/sorting-algorithms-interview-questions
### Bubble sort: 
  - We repeatedly compare two adjacent elements and swap them.
  - In place, stable.

```cpp
void bubbleSort(int arr[], int n)
{
    for(int i =0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(arr[j+1]<arr[j])
          swap(arr[j], arr[j+1]);
        
      }
    }
  
  return 0;
}

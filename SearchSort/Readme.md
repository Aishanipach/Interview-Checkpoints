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
```

### Insertion sort:
If it is the first element, it is already sorted.
Pick the next element.
Compare with all the elements in sorted sub-list.
Shift all the the elements in sorted sub-list that is greater than the value to be sorted.
Insert the value.
Repeat until list is sorted.

```cpp

```

- **In PLACE** sorting means sorting using the given data space only. Same memory that contains the input.


void partition(vector<int> arr, int l, int r){
 
  int piv=arr[l];
  int count=0;
  
  
  for(int i =l;i<r;i++){
    if(arr[i]<=piv)
      count++;
  }
  
  swap(arr[l], arr[l+count]);
  
  int i=l;
  int j=r;
  
//  l+count is where this element pivot has it's place 
  
  while(i<l+count && j>l+count){
  
    while(arr[i]<arr[l+count])
          i++;
    
    while(arr[j]>arr[l+count])
      j--;
    
    if(arr[i]>arr[l+count] &&arr[j]<arr[l+count])
      swap(arr[i++], arr[j--]);
          
  }
}

void quickSort(vector<int> arr, int l, int r){
 
  if(l>=r)
    return;
  int index= partition(arr, l, r);
  
  quicksort(arr, l, index-1);
  quicksort(arr, index+1, r);
  
  
}

// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      if(arr[i]+arr[j]==sum)
        cout<<arr[i]<<" "<<arr[j]<<endl;
    }
  }

int countPairs2(int *arr, int len, int value) {
  return 0;
  sort(arr, arr+n);
  int i=0, j=n-1;
  while(i<j)
  {
    if(arr[i]+arr[j]==sum)
    {
      cout<<arr[i]<<" "<<arr[j]<<endl;
      i++; j--;
    }
    else if(arr[i]+arr[j]<sum)
      i++;
    else
      j--;
  }
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  sort(arr, arr+n);
  for(int i=0; i<n; i++)
  {
    int target = sum - arr[i];
    int res = binary_search(arr+i+1, arr+n, target);
    if(res)
      cout<<arr[i]<<" "<<target<<endl;
  }
}

// Copyright 2021 NNTU-CS
int countPairs1(int arr, int len, int value) {
  { 
    for (int i = 0; i < n; i++) { 
        for (int j = i+1; j < n; j++) { 
            if (arr[i] + arr[j] == sum) 
                std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl; 
        } 
    } 
} 

int main() 
{ 
    int arr[] = { 1, 5, 7, 3, 8, 4 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 8; 
    findPairs(arr, n, sum); 
  return 0;
}
int countPairs2(int arr, int len, int value) {
  for (int i = 0; i < n; i++) { 
        for (int j = i+1; j < n; j++) { 
            if (arr[i] + arr[j] == sum) 
                std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl; 
        } 
    } 
} 

int main() 
{ 
    int arr[] = { 1, 5, 7, 3, 8, 4 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 8; 
    findPairs(arr, n, sum);
  return 0;
}
int countPairs3(int arr, int len, int value) {
  std::sort(arr, arr + n); 
    int low = 0; 
    int high = n - 1; 
    while (low < high) { 
        if (arr[low] + arr[high] == sum) { 
            std::cout << "(" << arr[low] << ", " << arr[high] << ")" << std::endl; 
            low++; 
            high--; 
        } else if (arr[low] + arr[high] < sum) { 
            low++; 
        } else { 
            high--; 
        } 
    } 
} 

int main() 
{ 
    int arr[] = { 1, 5, 7, 3, 8, 4 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 8; 
    findPairs(arr, n, sum);
  return 0;
}

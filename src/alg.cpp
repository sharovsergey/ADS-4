// Copyright 2021 NNTU-CS
using namespace std;
int countPairs1(int *arr, int len, int value) {
  return 0;
}
int findPairs(int arr[], int n, int sum) {
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] + arr[j] == sum) {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        } else if (arr[i] + arr[j] < sum) {
            i++;
        } else {
            j--;
        }
    }
}
int countPairs2(int *arr, int len, int value) {
  return 0;
}
int findPairs(int arr[], int n, int sum) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int temp = sum - arr[i];
        if (s.find(temp) != s.end()) {
            cout << arr[i] << " " << temp << endl;
        }
        s.insert(arr[i]);
    }
}
int countPairs3(int *arr, int len, int value) {
  return 0;
}
int findPairs(int arr[], int n, int sum) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

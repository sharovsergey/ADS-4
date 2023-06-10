// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
}
    int count = 0;
    for (int i = 0; i < len-1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
    }

int countPairs2(int *arr, int len, int value) {
  return 0;
    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = len - 1; j > i; j--) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        int one = i;
        int two = len;
        while (one < two-1) {
            int mid = (one + two) / 2;
            if (arr[i] + arr[mid] == value) {
                count++;
                int j = mid+1;
                while (arr[i] + arr[j] == value && j < two) {
                    count++;
                    j++;
                }
                j = mid - 1;
                while (arr[i] + arr[j] == value && j > one) {
                    count++;
                    j--;
                }
                break;
            }
            if (arr[i] + arr[mid] > value) {
                two = mid;
            } else {
                one = mid;
            }
        }
    }
    return count;
}

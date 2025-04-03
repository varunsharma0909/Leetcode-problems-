#include <stdio.h>

int main() {
    int N, search_element, i, found = 0;

    // Read list size
    scanf("%d", &N);
    int arr[N];

    // Read N elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Read searching element
    scanf("%d", &search_element);

    // Search for the element in the array
    for(i = 0; i < N; i++) {
        if(arr[i] == search_element) {
            found = 1;
            break;
        }
    }

    // Output result
    if(found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}

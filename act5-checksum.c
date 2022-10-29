/*header*/
#include<stdio.h>
#include<math.h>

/*sender func*/
int sender(int arr[10], int n){

    /*sender dec int*/
    int cs, i;
    int sum = 0;

    printf("\n--Sender--\n");
    for(i = 0; i < n; i++)
    sum += arr[i];
    printf("Sum: %d", sum);

    /*one's complement sender*/
    cs =~ sum;
    printf("\nChechsum: %d", cs);
    return cs;
}

/*receiver func*/
void receiver(int arr[10], int n, int send){

    /*receiver dec int*/
    int cs, i;
    int sum = 0;
    
    printf("\n\n--Reciever--\n");
    for(i = 0; i < n; i++)
    sum += arr[i];
    printf("Sum: %d", sum);

    /*complement receiver func*/
    sum = sum + send;
    cs =~ sum;
    printf("\nChecksum: %d", cs);
}

/*main ask size and elements of array*/
void main(){
    int n,send;
    
    /*size*/
    printf("Size: ");
    scanf("%d", &n);
    int arr[n];

    /*element arrays*/
    printf("Elements--\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    /*call functions*/
    send = sender(arr, n);
    receiver(arr, n, send);
}

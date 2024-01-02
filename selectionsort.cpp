// #include<bits/stdc++.h>
// using namespace std;

// void selectionsort(int arr[],int n){
//     int i,j,min_index;
//     for(i=0; i<n-1; i++){
//         min_index = i;
//         for(j=i+1; j<n; j++){
//             if(arr[j]<arr[min_index]){
//                 min_index = j;
//                 swap(arr[i],arr[min_index]);
//             }
//         }
//     }
// }
// int main()


// {
 

// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    int i,key,j;
    for(i=1; i<n; i++){
        arr[i]=key;
        j = i-1;
        while(j>0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
 

return 0;
}
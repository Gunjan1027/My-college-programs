#include<iostream>
using namespace std ;

int main (){
    int arr1[5]={2,8,6,0,4};
    int arr2[5]={1,7,3,5,9};
    int arr3[10];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr1[j] > arr1[j+1]){
            swap(arr1[j],arr1[j+1]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr2[j] > arr2[j+1]){
            swap(arr2[j],arr2[j+1]);
            }
        }
    }
    int n1=5, n2=5;

    int i=0,j=0,k=0;
   
     while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    



     for (int i = 0; i < 5; ++i) { 
        std::cout << arr1[i] << " "; 
    }
    std::cout << std::endl ;
    for (int i = 0; i < 5; ++i) { 
        std::cout << arr2[i] << " "; 
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; ++i) { 
        std::cout << arr3[i] << " "; 
    }
    std::cout << std::endl;
}
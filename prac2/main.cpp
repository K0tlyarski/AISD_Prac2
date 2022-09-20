//
//  main.cpp
//  prac2
//
//  Created by Вадим Котлярский on 20.09.2022.
//

#include <iostream>
using namespace std;
template <typename T>
T MinInArr(T* arr,int size){
    T tmp = arr[0];
    for (int i =0; i<size; i++) {
        if (tmp > arr[i]) {
            tmp = arr[i];
        }
    }
}

template <typename T>
T SearchElement (T* arr, int size, T index){
    int tmp = 0;
    cin>>tmp;
    for (int i =0; i<size; i++) {
        if (arr[i] == tmp) {
            index = i;
        }
    }
    cout<<index;
  
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

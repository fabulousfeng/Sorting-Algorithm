//
//  main.cpp
//  Quick Sort
//
//  Created by Feng Zhou on 10/2/16.
//  Copyright © 2016 Feng. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &A,int start,int end)
{
    int pivot = A[end];
    int pindex = start;
    for(int i = start; i < end ;i++){
        if(A[i] <= pivot){
            swap(A[i],A[pindex]);
            pindex++;
        }
    }
    swap(A[pindex],A[end]);
    return pindex;
}

void quick_sort(vector<int> &A, int start, int end)
{
    if (start < end) {
        int PIndex = partition(A, start, end);
        quick_sort(A,start,PIndex - 1);
        quick_sort(A, PIndex + 1, end);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v = {3,4,51,12,31,5,4,6,7,13,12,52,51,12};
    int start = 0;
    int end = v.size() - 1;
    quick_sort(v, start, end);
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<" ";
    cout << endl;
    return 0;
}

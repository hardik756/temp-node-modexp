#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray)
    {
        vector<vector<int>> hashtable;
        for(int i=0;i<sizeOfArray;i++){
            hashtable[(arr[i]%hashSize)].push_back(arr[i]);
        }
        return hashtable;
    }
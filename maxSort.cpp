#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    // initialize v
    /* your code here */
    v.at(0) = 6;
    v.at(1) = 1;
    v.at(2) = 3;
    v.at(3) = 2;
    v.at(4) = 1;


    // print the unsorted v
    /* your code here */
    cout << "Unsorted v: ";
    print(v);
    // sort v
    /* your code here */
    maxSort(v);

    // print the sorted v
    /* your code here */
    cout << "Sorted v: ";
    print(v);

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        /*complete the code*/
        int current_max = list.at(0);
        int index_of_max = 0;

        for (int j = 1; j <= i; j++) {
            /*complete the code*/
            if (current_max < list.at(j)) {
                index_of_max = j;
                swap(current_max, list.at(j));
            }

        }
        /*complete the code*/
        if (list.at(i)) {
            int temp = list.at(i);
            list.at(i) = current_max;
            list.at(index_of_max) = temp;
        }
    }
}

// swap function
void swap(int& a, int&b){
    /*your code here*/
    int temp = a;
    a = b;
    b = a;
}

// print function
void print(const vector<int>& list){
    /*your code here*/
    for (int i = 0; i < 5; ++i) {
        cout << list.at(i) << " ";
    }
    cout << endl;
}


#include <iostream>

using namespace std;

int main() {
    int arraySize = 12;
    int numbers[arraySize];
    srand(time(NULL));
    cout << "(Main) Default array: ";
    for (int i = 0; i < arraySize; i++) {
        numbers[i] = rand() % 10;
        cout << numbers[i] << " ";
    }
//3
    cout << endl << "Task 3: ";
    int max_num = INT_MIN;
    int max_index = 0;
    int min_num = INT_MAX;
    int min_index = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (max_num < numbers[i]) {
            max_num = numbers[i];
            max_index = i;
        }
        if (min_num > numbers[i]) {
            min_num = numbers[i];
            min_index = i;
        }
    }

    cout << endl << "Max num: " << max_num << endl << "Min num: " << min_num << endl;
    numbers[max_index] = min_num;
    numbers[min_index] = max_num;
    cout << "Swapped places Min and Max in array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << ' ';
    }
//4
    cout << endl << "Task 4: ";
    int A, num_more_than_A = 0;
    cout << endl << "Enter A: ";
    cin >> A;
    cout << "Numbers bigger than a: ";
    for (int i = 0; i < arraySize; ++i) {
        if (A < numbers[i]) {
            cout << numbers[i] << ' ';
            num_more_than_A++;
        }
    }
    cout << endl << "Amount number elements larger than A: " << num_more_than_A;
//5
    cout << endl << "Task 5: ";
    int second_max_num = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] != max_num) {
            if (second_max_num < numbers[i]) {
                second_max_num = numbers[i];
            }
        }
    }
    cout << "Second max num: " << second_max_num << endl;
//6
    cout << "Task 6: ";
    int first0 = -1;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == 0) {
            first0 = i;
            break;
        }
    }
    if (first0 == -1) {
        cout << "There is no 0 elements";
    } else {
        cout << "Index of first 0 element: " << first0;
    }
}
Sorting Algorithms in C

This repository contains implementations of classic sorting algorithms in C.
Each algorithm is implemented in its own file for clarity, along with a test.c file to demonstrate usage.

📂 Files

Selection_Sort.c → Implementation of Selection Sort (minimum-based).

max_selection_sort.c → Implementation of Selection Sort (maximum-based).

bubble_sort.c → Implementation of Bubble Sort (with optimization).

insertion_sort.c → Implementation of Insertion Sort.

merge_sort.c → Implementation of Merge Sort (divide and conquer).

test.c → A menu-driven program that lets you input an array and choose which sorting algorithm to apply.

🚀 How to Run

Clone the repository or download the files:

git clone <repository-url>
cd <repository-folder>


Compile any file you want to test. For example:

gcc Selection_Sort.c -o selection
./selection


Or for Merge Sort:

gcc merge_sort.c -o merge
./merge


For the menu-driven program (test.c), compile and run:

gcc test.c -o test
./test


You will be prompted to enter the array size, the elements, and select a sorting algorithm.
The program will then display the array before and after sorting.

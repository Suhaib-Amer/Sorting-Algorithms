Sorting Algorithms in C 🌀

This repository contains classic sorting algorithms implemented in C.
Each algorithm is implemented in its own file for clarity, along with a menu-driven program (test.c) to demonstrate usage.

📂 Files

Selection_Sort.c → Selection Sort (minimum-based)

max_selection_sort.c → Selection Sort (maximum-based)

bubble_sort.c → Bubble Sort (optimized)

insertion_sort.c → Insertion Sort

merge_sort.c → Merge Sort (divide & conquer)

test.c → Menu-driven program for testing all sorting algorithms

🚀 How to Run
1️⃣ Clone the repository
git clone <repository-url>
cd <repository-folder>

2️⃣ Compile a specific algorithm
gcc Selection_Sort.c -o selection
./selection


Or for Merge Sort:

gcc merge_sort.c -o merge
./merge

3️⃣ Run the menu-driven program
gcc test.c -o test
./test


Enter the size of the array

Input the array elements

Choose a sorting algorithm

The program will display the array before and after sorting

# sorting_algorithms

## Resources

https://en.wikipedia.org/wiki/Sorting_algorithm <br>
https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation <br>
https://www.toptal.com/developers/sorting-algorithms <br>
https://www.youtube.com/watch?v=kPRA0W1kECg <br>
https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s <br>
https://www.geeksforgeeks.org/sorting-algorithms/ <br>

## Requirements

General

	Allowed editors: vi, vim, emacs
	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	All your files should end with a new line
	A README.md file, at the root of the folder of the project, is mandatory
	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	You are not allowed to use global variables
	No more than 5 functions per file
	Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
	In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	The prototypes of all your functions should be included in your header file called sort.h
	Don’t forget to push your header file
	All your header files should be include guarded
	A list/array does not need to be sorted if its size is less than 2.

## Data Structure and Functions

For this project you are given the following print_array, and print_list functions:
	#include <stdlib.h>
	#include <stdio.h>

	/**
	 * print_array - Prints an array of integers
	 *
	 * @array: The array to be printed
	 * @size: Number of elements in @array
	 */
	void print_array(const int *array, size_t size)
	{
	    size_t i;

	    i = 0;
	    while (array && i < size)
	    {
		if (i > 0)
		    printf(", ");
		printf("%d", array[i]);
		++i;
	    }
	    printf("\n");
	}
	#include <stdio.h>
	#include "sort.h"

	/**
	 * print_list - Prints a list of integers
	 *
	 * @list: The list to be printed
	 */
	void print_list(const listint_t *list)
	{
	    int i;

	    i = 0;
	    while (list)
	    {
		if (i > 0)
		    printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	    }
	    printf("\n");
	}
Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
Please declare the prototype of the functions print_array and print_list in your sort.h header file
Please use the following data structure for doubly linked list:

	/**
	 * struct listint_s - Doubly linked list node
	 *
	 * @n: Integer stored in the node
	 * @prev: Pointer to the previous element of the list
	 * @next: Pointer to the next element of the list
	 */
	typedef struct listint_s
	{
	    const int n;
	    struct listint_s *prev;
	    struct listint_s *next;
	} listint_t;

Please, note this format is used for Quiz and Task questions.
	O(1)
	O(n)
	O(n!)
	n square -> O(n^2)
	log(n) -> O(log(n))
	n * log(n) -> O(nlog(n))
	n + k -> O(n+k)
	…
Please use the “short” notation (don’t use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.

## Tasks
# 0-bubble_sort.c, 0-O

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

	Prototype: void bubble_sort(int *array, size_t size);
	You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 1-insertion_sort_list.c, 1-O

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

	Prototype: void insertion_sort_list(listint_t **list);
	You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 2-selection_sort.c, 2-O

Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

	Prototype: void selection_sort(int *array, size_t size);
	You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 3-quick_sort.c, 3-O

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

	Prototype: void quick_sort(int *array, size_t size);
	You must implement the Lomuto partition scheme.
	The pivot should always be the last element of the partition being sorted.
	You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 100-shell_sort.c

Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence

	Prototype: void shell_sort(int *array, size_t size);
	You must use the following sequence of intervals (a.k.a the Knuth sequence):
	n+1 = n * 3 + 1
	1, 4, 13, 40, 121, ...
	You’re expected to print the array each time you decrease the interval (See example below).
No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap

## 101-cocktail_sort_list.c, 101-O

Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm

	Prototype: void cocktail_sort_list(listint_t **list);
	You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 102-counting_sort.c, 102-O

Write a function that sorts an array of integers in ascending order using the Counting sort algorithm

	Prototype: void counting_sort(int *array, size_t size);
	You can assume that array will contain only numbers >= 0
	You are allowed to use malloc and free for this task
	You’re expected to print your counting array once it is set up (See example below)
		This array is of size k + 1 where k is the largest number in array
Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 103-merge_sort.c, 103-O

Write a function that sorts an array of integers in ascending order using the Merge sort algorithm

	Prototype: void merge_sort(int *array, size_t size);
	You must implement the top-down merge sort algorithm
		When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
		Sort the left array before the right array
	You are allowed to use printf
	You are allowed to use malloc and free only once (only one call)
	Output: see example
Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 104-heap_sort.c, 104-O

Write a function that sorts an array of integers in ascending order using the Heap sort algorithm

	Prototype: void heap_sort(int *array, size_t size);
	You must implement the sift-down heap sort algorithm
	You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 105-radix_sort.c

Write a function that sorts an array of integers in ascending order using the Radix sort algorithm

	Prototype: void radix_sort(int *array, size_t size);
	You must implement the LSD radix sort algorithm
	You can assume that array will contain only numbers >= 0
	You are allowed to use malloc and free for this task
	You’re expected to print the array each time you increase your significant digit (See example below)

## 106-bitonic_sort.c, 106-O

Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm

	Prototype: void bitonic_sort(int *array, size_t size);
	You can assume that size will be equal to 2^k, where k >= 0 (when array is not NULL …)
	You are allowed to use printf
	You’re expected to print the array each time you swap two elements (See example below)
	Output: see example
Write in the file 106-O, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 107-quick_sort_hoare.c, 107-O

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

	Prototype: void quick_sort_hoare(int *array, size_t size);
	You must implement the Hoare partition scheme.
	The pivot should always be the last element of the partition being sorted.
	You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case

## 1000-sort_deck.c, deck.h

Write a function that sorts a deck of cards.

Prototype: void sort_deck(deck_node_t **deck);
You are allowed to use the C standard library function qsort
Please use the following data structures:

	typedef enum kind_e
	{
	    SPADE = 0,
	    HEART,
	    CLUB,
	    DIAMOND
	} kind_t;

	/**
	 * struct card_s - Playing card
	 *
	 * @value: Value of the card
	 * From "Ace" to "King"
	 * @kind: Kind of the card
	 */
	typedef struct card_s
	{
	    const char *value;
	    const kind_t kind;
	} card_t;

	/**
	 * struct deck_node_s - Deck of card
	 *
	 * @card: Pointer to the card of the node
	 * @prev: Pointer to the previous node of the list
	 * @next: Pointer to the next node of the list
	 */
	typedef struct deck_node_s
	{
	    const card_t *card;
	    struct deck_node_s *prev;
	    struct deck_node_s *next;
	} deck_node_t;


	You have to push you deck.h header file, containing the previous data structures definition
	Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
	You can assume there is exactly 52 elements in the doubly linked list.
	You are free to use the sorting algorithm of your choice
	The deck must be ordered:
	  From Ace to King <br>
	  From Spades to Diamonds <br>
	  See example below <br>

#include <sys/time.h>
#include <stdlib.h>
#include "BinarySearchTree.h"

#define BST BinarySearchTree

using namespace std;

// Calculates time difference
int timeval_subtract(struct timeval *result, struct timeval *t2, struct timeval *t1);

// Prints time taken in seconds and micro seconds
void timeval_print(string str, struct timeval *tv);

// Generates a random string with length len and only lower case letters
string rand_str(const int len);

int main()
{
    struct timeval tvDIFF, tvStart, tvEnd;
	
	// Testing with integers
	{
		cout << "Testing 1000 integers:" << endl << endl;

		// Start timer
		gettimeofday(&tvStart, NULL);

		// Make tree
		BST<int>* tree = new BST<int>(50000);
		for (int i = 0; i < 1000; i++) tree->insert(rand() % 100000);

		tree->display();

		// Stop timer
		gettimeofday(&tvEnd, NULL);

		timeval_subtract(&tvDIFF, &tvEnd, &tvStart);
		cout << endl;
		timeval_print ("This took: ", &tvDIFF);

		cout << "--------------------------------" << endl;
	}

	// Testing with strings
	{
		cout << "Testing 1000 strings:" << endl << endl;

		// Start timer
		gettimeofday(&tvStart, NULL);

		// Make tree
		BST<string>* tree = new BST<string>("hello");
		for (int i = 0; i < 1000; i++) tree->insert(rand_str(rand() % 10));

		tree->display();

		// Stop timer
		gettimeofday(&tvEnd, NULL);

		timeval_subtract(&tvDIFF, &tvEnd, &tvStart);
		cout << endl;
		timeval_print ("This took: ", &tvDIFF);

		cout << "--------------------------------" << endl;
	}

    return 0;
}

// Calculates time difference
int timeval_subtract(struct timeval *result, struct timeval *t2, struct timeval *t1)
{
    long int diff = (t2->tv_usec + 1000000 * t2->tv_sec) - (t1->tv_usec + 1000000 * t1->tv_sec);
    result->tv_sec = diff / 1000000;
    result->tv_usec = diff % 1000000;
    return (diff<0);
}

// Prints time taken in seconds and micro seconds
void timeval_print(string str, struct timeval *tv)
{
	cout << str;
    printf("%ld sec, %06ld micro sec", tv->tv_sec, tv->tv_usec);
	cout << endl;
}

// Generates a random string with length len and only lower case letters
string rand_str(const int len)
{
	char cstr[len];
    static const char chars[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i)
		cstr[i] = chars[rand() % (sizeof(chars) - 1)];
	cstr[len] = 0;
	string str = cstr;
	return str;
}

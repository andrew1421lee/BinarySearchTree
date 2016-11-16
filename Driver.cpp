#include <sys/time.h>
#include <string>
#include "BinarySearchTree.h"

#define BST BinarySearchTree

using namespace std;

int timeval_subtract(struct timeval *result, struct timeval *t2, struct timeval *t1)
{
    long int diff = (t2->tv_usec + 1000000 * t2->tv_sec) - (t1->tv_usec + 1000000 * t1->tv_sec);
    result->tv_sec = diff / 1000000;
    result->tv_usec = diff % 1000000;

    return (diff<0);
}

void timeval_print(string str, struct timeval *tv)
{
	cout << str;
    printf("%ld sec, %06ld micro sec\n", tv->tv_sec, tv->tv_usec);
}

int main()
{
    struct timeval tvDIFF, tvStart, tvEnd;

    // Timer
    gettimeofday(&tvStart, NULL);

    // PUT FUNCTION HERE
    BST<int>* tree = new BST<int>(5);
    tree->insert(20);
    tree->insert(2);
    tree->insert(30);
    tree->display();

    gettimeofday(&tvEnd, NULL);

    timeval_subtract(&tvDIFF, &tvEnd, &tvStart);
    timeval_print ("This took: ", &tvDIFF);

    return 0;
}

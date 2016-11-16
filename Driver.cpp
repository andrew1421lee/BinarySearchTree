#include "BinarySearchTree.h"

using namespace std;

int timeval_subtract(struct timeval *result, struct timeval *t2, struct timeval *t1)
{
    long int diff = (t2->tv_usec + 1000000 * t2->tv_sec) - (t1->tv_usec + 1000000 * t1->tv_sec);
    result->tv_sec = diff / 1000000;
    result->tv_usec = diff % 1000000;

    return (diff<0);
}

void timeval_print(char *str, struct timeval *tv)
{
    printf("%s %ld sec, %06ld micro sec\n", str, tv->tv_sec, tv->tv_usec);
}

int main(){
    struct timeval tvDIFF, tvStart, tvEnd;

    /*Timer:*/

    gettimeofday(&tvStart, NULL);

    /*PUT FUNCTION HERE*/
    BST<int>* Hi = new BST<int>(5);
    Hi->insert(20);
    Hi->insert(2);
    Hi->insert(30);
    Hi->display();

    gettimeofday(&tvEnd, NULL);

    timeval_subtract(&tvDIFF, &tvEnd, &tvStart);
    timeval_print ("This took: ", &tvDIFF);
   /* char str[] = {'T', 'h', 'i', 's', ' ', 't', 'o', 'o', 'k', ':', ' '};
    timeval_print(str, &tvDIFF);*/

    return 0;
}


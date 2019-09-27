#include <stdio.h>
#include <stdlib.h>
#include "resource.h"
#include "data.h"

int main(int argc, char *argv[])
{
    sayHello();
    printf("\n%i\n", count(5, 5));
    
    int result = getDiff(5, 5);
  	printResult(result);
  	
  	system("PAUSE");
  	return 0;
}

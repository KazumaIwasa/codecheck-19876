#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
    
    printf("Hello ");
  for (int i = 0; i < argc; i++) {
    printf ("%s",argv[i]);
  }
    
   printf("!");
  return 0;
}

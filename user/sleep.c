#include "user/user.h"

int main(int argc, char **argv)
{
  printf("SLEEP\n");
  sleep(atoi(argv[1]));
  return 0;
}

#include <unistd.h>

int main()
{
int a = 11;

write(1, &a, 1);
return 0;
}

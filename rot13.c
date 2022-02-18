//#include <unistd.h> <-- Uncomment if you're on Linux and delete the next #include
#include <io.h>       

void rot13(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if (string[i] == ' ' || string[i] == '\t')
    {
      write(1, &string[i], 1);
      i++;
    }
    if (string[i] >= 'A' && string[i] <= 'M')
    {
      string[i] += 13;
      write(1, &string[i], 1);
      i++;
    }
    if (string[i] >= 'N' && string[i] <= 'Z')
    {
      string[i] -= 13;
      write(1, &string[i], 1);
      i++;
    }
    if (string[i] >= 'a' && string[i] <= 'm')
    {
      string[i] += 13;
      write(1, &string[i], 1);
      i++;
    }
    if (string[i] >= 'n' && string[i] <= 'z')
    {
      string[i] -= 13;
      write(1, &string[i], 1);
      i++;
    }
    else
    {
      write(1, &string[i], 1);
      i++;
    }
  }
}

#include <stdio.h>
#include <string.h>
int main() {
  char s1[100] = "programlama ", s3[100], s2[] = "dilleri";
  int length, j;
  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }


  // terminating the s1 string
  s1[length] = '\0';

  printf("Eklemeden sonra: ");
  puts(s1);
  
strcpy(s3, "programlama ");
strcat(s3,s2);
puts(s3);

  return 0;
}

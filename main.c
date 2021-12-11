#include <stdio.h>
#include <stdlib.h>

int main()
{
	char set[] = "\t \n";
	char s1[] = "\t lorem ipsuka";
	char s1[] = "\t lorem ipsum";
	char s1[] = "\t lorem ipsum";

	printf("%s", s1);
	printf("%s", ft_strtrim(s1, set));
}

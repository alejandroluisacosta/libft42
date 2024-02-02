#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char test[] = "abc";
	printf("%c\n", test[1]);
	*(test + 1) = 'c';
	printf("%c\n", test[1]);
	return 0;
	char **array = ft_split("", '\t');
	int i = 0;
	while (array && array[i] != NULL)
	{
		printf("%dth string: %s\n", i, array[i]);
		i++;
	}
	printf("%s\n", array[i]);
	return (0);
}


/*

	char ** = init_str_array(2, "hello!", NULL);
	int res = test_single_split(1, "hello!", ' ', expected);

	res = test_single_split(2,  expected) && res;
	res = test_single_split(3, , expected) && res;
	res = test_single_split(4, "\11\11\11\11hello!\11\11\11\11", '\11', expected) && res;

	expected = init_str_array(1, NULL);
	res = test_single_split(5, "", 'a', expected) && res;
	res = test_single_split(6, "ggggggggggg", 'g', expected) && res;

	expected = init_str_array(5, "1", "2a,", "3", "--h", NULL);
	res = test_single_split(7, "^^^1^^2a,^^^^3^^^^--h^^^^", '^', expected) && res;

	expected = init_str_array(2, "nonempty", NULL);
	res = test_single_split(8, "nonempty", '\0', expected) && res;

	return res;


*/

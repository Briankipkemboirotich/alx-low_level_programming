/**
 * wildcmp - compares two strings
 *@s1: firts string
 *@s2: second string
 *Return: 1 if strings are identicale else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 =='\0')
		return (0);
	if (s2 == *)
		return (wildcmps(s1 + 1, s2) || (s1, s2 + 1));
	if (*s1 == '\0')
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp(s1, s2 + 1));
	}
	return (0);
}

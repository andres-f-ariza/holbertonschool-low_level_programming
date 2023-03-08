int wildcmp(char *s1, char *s2)
{
/**
 *If both strings are empty, they are identical
 */
	if (*s1 == '\0' && *s2 == '\0') {
		return 1;
	}

/**
 *If the current character of s2 is *, then we can match
 *any string (including an empty string) with it
 */
if (*s2 == '*')
{
/**
 *We recursively call wildcmp() with the current s1
 *pointer value and the next s2 pointer value
 *to match any string that could come after the * character
 */
if (wildcmp(s1, s2 + 1))
return 1;
/**
 *We recursively call wildcmp() with the next s1
 *pointer value and the current s2 pointer value
 *to match any string that could come before the * character
 */
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
{
return 1;


/**
 *If neither of the above recursive calls return 1
 *, the strings cannot be considered identical
 */
return 0;
}

/**
 *If the current character of s1 and s2 match,
 *we move on to the next character
 */
if (*s1 == *s2)
{
return wildcmp(s1 + 1, s2 + 1);
}
/**
 *If the current character of s1 and s2 don't
 *match, the strings cannot be considered identical
 */
return 0;
}

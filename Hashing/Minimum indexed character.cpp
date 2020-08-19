Given a string str and another string patt.
Find the character in patt that is present at the minimum index in str.
If no character of patt is present in str then print ‘No character present’.




int minIndexChar(string str, string patt)
{
	// Your code here
	// cout<<str;
	int c = INT_MAX;
	map<char, int> m;
	for (int i = 0; i < str.size(); i++)
	{
		if (m.find(str[i]) == m.end())
			m[str[i]] = i + 1;

	}
	for (int i = 0; i < patt.size(); i++)
	{
		if (m[patt[i]] == 0)
			continue;

		c = min(c, m[patt[i]]);
		// cout<<c;
	}

	if (c == INT_MAX)
		c = -1;
	return c - 1;
}
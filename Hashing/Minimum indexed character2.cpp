

// function to find the minimum index character
// str: string given in the input
// patt: given pattern
string printMinIndexChar(string str, string patt)
{

	// your code here
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
		return "$";
	string s = "";
	s += str[c - 1];
	return s;
	// you don't need to print anything

}

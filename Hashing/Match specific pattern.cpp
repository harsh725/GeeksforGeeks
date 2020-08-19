Given a dictionary of words and a pattern. Every character in the pattern is uniquely mapped to a character in the dictionary. Find all such words in the dictionary that match the given pattern.

Example 1:

// Input:
// N = 4
//     dict[] = {abb, abc, xyz, xyy}
//              pattern  = foo
//                         Output: abb xyy
//                         Explanation: xyy and abb have the same
//                         character at index 1 and 2 like the
//                         pattern.

//                         Your Task:
// You don't need to read input or print anything. Your task is to complete the function findMatchedWords() which takes an array of strings dict[] consisting of the words in the dictionary and a string,
//Pattern and returns an array of strings consisting of all the words in the dict[] that match the given Pattern in lexicographical order.




vector<string> findMatchedWords(vector<string> dict, string pattern)
{
//Your code here
	vector<string> v;
	for (string s : dict)
	{
		unordered_map<char, int> m, m2;
		if (pattern.size() != s.size())
			continue;
		bool flag = 0;
		for (int i = 0; i < pattern.size(); i++)
		{
			m[s[i]]++;
			m2[pattern[i]]++;
			if (m[s[i]] != m2[pattern[i]])
			{flag = 1;}
		}
		if (flag == 0)
			v.push_back(s);
//   cout<<flag<<" ";
		m.clear(); m2.clear();
	}
	return v;
}

// credit to code golf https://codegolf.stackexchange.com/questions/1956/generate-the-longest-error-message-in-c
// kebs
#include <vector>
#include <algorithm>


int main()
{
	int a;
	std::vector<std::vector<int> > v;
	std::vector<std::vector<int> >::const_iterator it = std::find(v.begin(), v.end(), a);
}

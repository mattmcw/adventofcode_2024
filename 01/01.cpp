#include "../aoc24.cpp"

AOC aoc;
char* endptr;

int main() {
	string s;
	int64_t answer = 0;
	vector<string> parts;

	vector<uint64_t> a;
	vector<uint64_t> b;
	while ( getline( cin, s ) ) {
		parts = aoc.split(s, aoc.SPACE);
		cout << parts[0] << "," << parts[3] << endl;
		a.push_back(stoll(parts[0]));
		b.push_back(stoll(parts[3]));
	}

	sort( a.begin(), a.end() );
	//a.erase( unique( a.begin(), a.end() ), a.end() );

	sort( b.begin(), b.end() );
	//b.erase( unique( b.begin(), b.end() ), b.end() );

	for (int i = 0; i < a.size(); i++) {
		answer += abs(int(a[i] - b[i]));	
	}

	cout << "ANSWER " << answer << endl;
	return 0;
}
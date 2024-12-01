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

	for (int i = 0; i < a.size(); i++) {
		uint64_t count = 0;
		if (aoc.vectorContains(b, a[i])) {
			for (int x = 0; x < b.size(); x++) {
				if (b[x] == a[i]) {
					count++;
				}
			}
			answer += a[i] * count;
		}
	}
	cout << "ANSWER " << answer << endl;
	return 0;
}
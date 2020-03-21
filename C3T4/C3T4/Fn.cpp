class Fn{
public:
	Fn(int& n, int& r) :n(n), r(r) {
		int UP = 1;
		int BENEATH = 1;
		for (int i = 1; i <= r; i++) {
			UP *= (n + 1 - i);
			BENEATH *= i;
		}
		Result = UP / BENEATH;
	}
	const int GetResult() const {
		return Result;
	}
private:
	int n;
	int r;
	int Result=1;
};
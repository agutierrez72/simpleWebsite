#include <igloo/igloo.h>
#include <lib.h>

using namespace igloo;

Context(TestSuite) {
	Spec(PickSF){
		Assert::That(checkWinner("SF"), IsFalse());
	};

	Spec(PickKC){
		Assert::That(checkWinner("KC"), IsTrue());
	}
};

int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}

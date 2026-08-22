/*
 * LESSON: Logical operators: && (AND), || (OR), ! (NOT).
 * They combine true/false conditions into more complex decisions and are
 * used to build multi-part if-tests. The key idea I learned is SHORT-CIRCUIT
 * evaluation - C++ stops evaluating as soon as the result is already known.
 */

// Logical Operators
#include <iostream>
using namespace std;        

int main() {
    int a = 5, b = 10, c = 15;

    // Logical AND (&&): true ONLY when BOTH sides are true.
    // 5<10 (true) AND 10<15 (true) -> the whole condition is true.
    cout << "\n--- Logical AND (&&) ---" << endl;
    if (a < b && b < c) {
        cout << "Both conditions are true." << endl;
    }

    // Logical OR (||): true when AT LEAST ONE side is true.
    // 5>10 (false) OR 10<15 (true) -> still true overall.
    cout << "\n--- Logical OR (||) ---" << endl;
    if (a > b || b < c) {
        cout << "At least one condition is true." << endl;
    }

    // Logical NOT (!): flips the truth value of what follows it.
    // !(a > b) = !(5 > 10) = !(false) = true, so the if runs.
    cout << "\n--- Logical NOT (!) ---" << endl;
    if (!(a > b)) {
        cout << "Condition is false." << endl;
    }

    //SHORT-CIRCUIT evaluation, part 1: a<b is TRUE, so to decide the && C++
    // MUST also check c<b. Since c<b is false, the if-branch is skipped.
    if (a < b && c < b) {
        cout << "This will not be printed because the second condition is false." << endl;
    } else {
        // Part 2: had the FIRST operand been false, C++ would not even look
        // at the second one - the result is known to be false already. This
        // "short-circuiting" saves work and even avoids errors.
        cout << "Short-circuit evaluation prevents the second condition from being evaluated." << endl;
    }

    return 0;
}   
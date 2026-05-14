 Q1. #include <iostream>
       #include <string>
       using namespace std;

    void greet(string name) {
    cout << "Congratulations " << name << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    greet(name);
    return 0;
}


Q2. #include <iostream>
       using namespace std;

float addFour(float a, float b, float c, float d) {
    return a + b + c + d;
}

int main() {
    float w, x, y, z;
    cout << "Enter 4 float numbers: ";
    cin >> w >> x >> y >> z;
    cout << "Sum = " << addFour(w, x, y, z) << endl;
    return 0;
}



 Q3. #include <iostream>
       using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}


Q4. Two Types of Functions and Implementation

1. Standard/Built-in Functions: Pre-defined functions provided by the language
  (e.g., print(), len()).
  Example: print("Hello") or len("Words").
2. User-Defined Functions: Functions created by the programmer to perform specific tasks.
Example:
def hi():
    print("Hi!")
  
  
Q5. Can a Void Function Take a Parameter?
> Yes, because A "void" function refers to a function that does not return a value to the caller.
  However, it can absolutely accept parameters (input) to use within its internal logic.


Q​6. Recursive Algorithms and Factorial Example 
>A recursive algorithm is a method where the solution to a problem 
depends on solutions to smaller instances of the same problem.

 #include <iostream>
   using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1; // base case
    return n * factorial(n - 1);    // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial = " << factorial(n) << endl;
    return 0;
}

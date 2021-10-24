import 'dart:io';

void main() {
  stdout.write("Please Enter a number: ");
  String? data = stdin.readLineSync();
  if (data != null && isNumeric(data)) {
    print(data);
    int chosenNumber = int.parse(data);

    checkPrime(chosenNumber);
  }
}

bool isNumeric(String str) {
  return double.tryParse(str) != null;
}

void checkPrime(int number) {
  // List comprehensions
  List<int> a = [
    for (var i = 1; i <= number; i++)
      if (number % i == 0) i
  ];

  // Check for prime
  a.length == 2
      ? print("Given number is prime number")
      : print("Given number is not a prime");
}

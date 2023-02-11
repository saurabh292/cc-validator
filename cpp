#include <iostream>
#include <string>

bool isValid(const std::string& cardNumber) {
int n = cardNumber.length();
int sum = 0;
bool alternate = false;

for (int i = n - 1; i >= 0; i--) {
int digit = cardNumber[i] - '0';
if (alternate) {
  digit *= 2;

  if (digit > 9) {
    digit = (digit % 10) + 1;
  }
}

sum += digit;
alternate = !alternate;
}

return (sum % 10 == 0);
}

int main() {
std::string cardNumber;

std::cout << "Enter a credit card number: ";
std::cin >> cardNumber;

if (isValid(cardNumber)) {
std::cout << cardNumber << " is a valid credit card number." << std::endl;
} else {
std::cout << cardNumber << " is an invalid credit card number." << std::endl;
}

return 0;
}

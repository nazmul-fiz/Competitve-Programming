#include<bits/stdc++.h>
using namespace std;

// Binary Conversion //
void Printing_Binary(int num)
{
    for(int i=10; i>=0; --i)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}
// Set bit Counting //
cout<< __builtin_popcount(a)<<endl;    //For Integer 
cout<< __builtin_popcountll((1LL <<35)-1); // For long long 


// Checks if kth bit of x is set (1) or not (0)
int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}

// Prints the positions of all set (1) bits in binary representation of x
void print_on_bits(int x) {
  for (int k = 0; k < 32; k++) {
    if (check_kth_bit(x, k)) {
      cout << k << ' '; // prints the position of the set bit
    }
  }
  cout << '\n';
}

// Returns the count of set (1) bits in binary representation of x
int count_on_bits(int x) {
  int ans = 0;
  for (int k = 0; k < 32; k++) {
    if (check_kth_bit(x, k)) {
      ans++;
    }
  }
  return ans;
}
// use short Form it Needed for Counting Bits//
cout<< __builtin_popcount(a)<<endl;    // this is For Integer 

cout<< __builtin_popcountll((1LL <<35)-1); // Which is long long 

// Checks if x is even or odd
bool is_even(int x) {
  if (x & 1) {
    return false;
  }
  else {
    return true;
  }
}

// Sets the kth bit of x to 1 and returns the result
int set_kth_bit(int x, int k) {
  return x | (1 << k);
}

// Sets the kth bit of x to 0 and returns the result
int unset_kth_bit(int x, int k) {
  return x & (~(1 << k));
}

// Toggles the kth bit of x and returns the result
int toggle_kth_bit(int x, int k) {
  return x ^ (1 << k);
}

// Checks if x is a power of 2
bool check_power_of_2(int x) {
  return count_on_bits(x) == 1;
}

int main() {
  // Bitwise AND (&)
  int and_result = 12 & 25;  // 12 (binary 1100) & 25 (binary 11001) = 8 (binary 1000)
 
  // Bitwise OR (|)
  int or_result = 12 | 25;  // 12 (binary 1100) | 25 (binary 11001) = 29 (binary 11101)

  // Bitwise XOR (^)
  int xor_result = 12 ^ 25;  // 12 (binary 1100) ^ 25 (binary 11001) = 21 (binary 10101)

  // Left shift (<<)
  int left_shift_result = 3 << 2;  // 3 (binary 11) << 2 --(binary 1100) = 12

  // Right shift (>>)
  int right_shift_result = 12 >> 2;  // 12 (binary 1100) >> 2 = 3 (binary 11)


  x = 11; // binary representation: 1011


  return 0;
}
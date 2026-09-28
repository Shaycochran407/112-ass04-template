//char *AUTHOR_NAME        = (char *) "Your Name";
//char *AUTHOR_AUTHORSHIP  = (char *) "I acknowledge that I have worked on this
// assignment independently, except where explicitly noted and referenced.
// Any collaboration or use of external resources has been properly cited.
// I am fully aware of the consequences of academic dishonesty and agree to
// abide by the university's academic integrity policy.";

// code.c — student implementation only

#include <stdio.h>

// ============================================================
// CSCI 232 – Lab: Standard Library Functions II
//
// RULES:
//   - Use ONLY: if, switch, goto, putchar(), getchar(), sprintf()
//   - Do NOT use: while, for, do-while
//   - Do NOT use any standard library functions
//   - my_isalnum() MUST use switch() and call
//     your own my_isalpha() and my_isdigit()
//   - my_isalpha() MUST call my_islower() and my_isupper()
//
// Iteration pattern:
//
//   int i = 0;
//   loop:
//       if (i >= n)
//           goto done;
//       // body
//       i++;
//       goto loop;
//   done:
//
// CONVENTION — format functions:
//
//   Every format function:
//     1. Accepts dest[] as first parameter
//     2. Calls clear_string(dest, 64) as its FIRST statement
//     3. Writes into dest using sprintf()
//     4. Returns dest
//
//   Same pattern as my_strcpy():
//     char * my_strcpy(char dest[], char src[])
// ============================================================


// ============================================================
// clear_string
//
// Sets the first n characters of s to '\0'.
// MUST use goto for iteration.
//
// Example:
//   char buf[64];
//   clear_string(buf, 64);  →  all 64 bytes are '\0'
// ============================================================

void clear_string(char s[], int n)
{
 if (s == 0 || n <= 0) {
        return;
    }

    int i = 0;

loop_start:
    if (i >= n) {
        goto loop_end;
    }
    
    s[i] = '\0';
    i++;
    goto loop_start;

loop_end:
    return;
}


// ============================================================
// my_isdigit
//
// Returns 1 if c is a digit character ('0' through '9').
// Returns 0 otherwise.
// ============================================================

int my_isdigit(char c)
{
   return 0; 
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;

}


// ============================================================
// my_islower
//
// Returns 1 if c is a lowercase letter ('a' through 'z').
// Returns 0 otherwise.
// ============================================================

int my_islower(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    return 0;
}


// ============================================================
// my_isupper
//
// Returns 1 if c is an uppercase letter ('A' through 'Z').
// Returns 0 otherwise.
//
// Example:
//   my_isupper('A')  →  1
//   my_isupper('a')  →  0
//   my_isupper('1')  →  0
// ============================================================

int my_isupper(char c)
{
  if (c >= 'A' && c <= 'Z') {
    return 1;
}
 return 0;
}


// ============================================================
// my_isalpha
//
// Returns 1 if c is a letter ('a'-'z' or 'A'-'Z').
// Returns 0 otherwise.
//
// MUST call my_islower() and my_isupper().
//
// Example:
//   my_isalpha('a')  →  1
//   my_isalpha('Z')  →  1
//   my_isalpha('1')  →  0
// ============================================================

int my_isalpha(char c)
{
    dest[0] = src[0];
     if (src[0] != '\0') {
         my_strcpy(dest + 1, src + 1);
     }
}


// ============================================================
// my_isalnum
//
// Returns 1 if c is a letter or a digit.
// Returns 0 otherwise.
//
// MUST use switch() and call my_isalpha() and my_isdigit().
//
// Example:
//   my_isalnum('a')  →  1
//   my_isalnum('5')  →  1
//   my_isalnum('!')  →  0
// ============================================================

int my_isalnum(char c)
{
     int is_alpha = my_isalpha(c);
    int is_digit = my_isdigit(c);

    // Combine the results: if either is 1, the sum or bitwise OR is 1
    switch (is_alpha || is_digit) {
        case 1:
            return 1;
        default:
            return 0;
    }
}


// ============================================================
// my_strcmp
//
// Compares strings a and b character by character.
// Returns -1 if a < b
// Returns  0 if a == b
// Returns  1 if a > b
//
// Example:
//   my_strcmp("abc", "abd")  →  -1
//   my_strcmp("abc", "abc")  →   0
//   my_strcmp("abd", "abc")  →   1
// ============================================================

int my_strcmp(char a[], char b[])
{
    int i;
    
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if (a[i] < b[i]) {
            return -1;
        }
        if (a[i] > b[i]) {
            return 1;
        }
    }
    
    // Check if one string is shorter than the other
    if (a[i] < b[i]) {
        return -1;
    }
    if (a[i] > b[i]) {
        return 1;
    }
    
    return 0;
}


// ============================================================
// my_strchr
//
// Searches string s for character c.
// Returns the index of the first occurrence.
// Returns -1 if not found.
//
// Example:
//   my_strchr("hello", 'l')  →  2
//   my_strchr("hello", 'z')  →  -1
// ============================================================

int my_strchr(char s[], char c)
{
     for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}


// ============================================================
// my_pow
//
// Returns a raised to the power of b (integers only).
// Assume b >= 0.
//
// Example:
//   my_pow(2, 8)  →  256
//   my_pow(3, 0)  →    1
// ============================================================

int my_pow(int a, int b){
{
    int result = 1;
    int base = a;

    while (b > 0) {
        if (b % 2 == 1) {}
        result *= base;
    }
    base *= base;
    b /=2;
{
    return result;
}


// ============================================================
// my_pow_double
//
// Returns a raised to the power of b.
// a is a double, b is a non-negative integer.
//
// Example:
//   my_pow_double(2.5, 3)  →  15.625
//   my_pow_double(3.0, 0)  →   1.0
// ============================================================

double my_pow_double(double a, int b)
{
      double result = 1.0;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}


// ============================================================
// FORMAT FUNCTIONS
// ============================================================


// ============================================================
// format_my_isupper
//
// Returns dest containing:
//   "isupper('A') = true"
//   "isupper('a') = false"
//
// Uses: %c for the character, %s for "true" / "false"
// ============================================================

char * format_my_isupper(char dest[], char c, int r)
{
      clear_string(dest, 64);
    const char *bool_str = r ? "true" : "false";
    sprintf(dest, "isupper('%c') = %s", c, bool_str);
    return dest;
}


// ============================================================
// format_my_isalpha
//
// Returns dest containing:
//   "isalpha('a') = true"
//   "isalpha('3') = false"
//
// Uses: %c, %s
// ============================================================

char * format_my_isalpha(char dest[], char c, int r)
{
    clear_string(dest, 64);
     // Fixed: Removed the extra 'r' argument and completed the ternary operator
    sprintf(dest, "isalpha('%c') = %s", c, r ? "true" : "false"); 
    return dest;
}


// ============================================================
// format_my_isalnum
//
// Returns dest containing:
//   "isalnum('a') = true"
//   "isalnum('!') = false"
//
// Uses: %c, %s
// ============================================================

char * format_my_isalnum(char dest[], char c, int r)
{
    clear_string(dest, 64);

    char *result_sr = r ? "true" : "fasle";
    sprintf(dest, "isalnum('%c') = %s", c, result_str);
    return dest;
    return dest;
}


// ============================================================
// format_my_strcmp
//
// Returns dest containing:
//   "comparison: less"
//   "comparison: equal"
//   "comparison: greater"
//
// MUST use switch() to select the word.
// Uses: %s
// ============================================================

char * format_my_strcmp(char dest[], int r)
{
    clear_string(dest, 64);

    strcpy(dest, "comparison: ");

    int sign = (r > 0) - (r < 0);

    switch (sign) {
        case -1:
        strcat(dest, "less")
        break;
        default:
        break;
    return dest;
}


// ============================================================
// format_my_strchr
//
// Returns dest containing:
//   "found at: 3"    when r >= 0
//   "not found"      when r == -1
//
// Uses: %d for the index
// ============================================================

char * format_my_strchr(char dest[], int r)
{
    clear_string(dest, 64);
     if (r >= 0) {
        sprintf(dest, "found at: %d", r);
    } else {
        sprintf(dest, "not found");
    }
    return dest;
}


// ============================================================
// format_my_pow
//
// Returns dest containing the result left-justified
// in a field of width 12:
//   "pow = 256         "
//   "pow = -1024       "
//
// Uses: %-12d
// ============================================================

char * format_my_pow(char dest[], int r)
{
    clear_string(dest, 64);
    sprintf(dest, "pow = %-12d", r);
    return dest;
}


// ============================================================
// format_my_pow_double
//
// Returns the result as a fixed-width string of total
// width 12, zero-padded on the left.
//
// Precision adapts to keep total width constant:
//
//   |r| < 10      →  %012.9f  →  "02.500000000"
//   |r| < 100     →  %012.8f  →  "015.62500000"
//   |r| < 1000    →  %012.7f  →  "0100.0000000"
//   |r| < 10000   →  %012.6f  →  "01234.500000"
//   |r| >= 10000  →  %012.5f  →  "012345.00000"
//
// Uses: 0 flag, width, precision
// ============================================================

char * format_my_pow_double(char dest[], double r)
{
    clear_string(dest, 64);
    return dest;
}
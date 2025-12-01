//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};    
    int left = 0, right = 0;
    int maxLen = 0;

    while (s[right] != '\0') {
        freq[(unsigned char)s[right]]++;

        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        int windowLen = right - left + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;

        right++;
    }

    printf("%d", maxLen);

    return 0;
}

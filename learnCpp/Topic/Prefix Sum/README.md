/*WHAT IS PREFIX SUM?
- Prefix sum is nothing else than a "table" with the sum of all elements until the current element we're iterating.
Let's say we've got an array consisting of these elements:
POS: 0 1 2 3 4 5 6
ELE: 1 2 3 4 5 6 7

Calculating the prefix sum would give us a table with the current sum up to each position, like so:
POS: 0 1 2 3  4  5  6
ELE: 1 3 6 10 15 21 28

This is useful because it lets us return the sum of any elements we'd like, even if we have a range composed of numbers in the middle.
How to get prefix sum:
- Get range of elements: L & R
    - if range is composed from 0 to current element, return number at pos R in table
    - if range doesn't start at 0, return number at pos R - number at position L-1. formally, sum would be (R-(L-1)) in range.
*/
# codeforce--Appleman-and-Card-Game
div2 problem
Appleman has n cards. Each card has an uppercase letter written on it. Toastman must choose k cards from Appleman's cards. Then Appleman should give Toastman some coins depending on the chosen cards. Formally, for each Toastman's card i you should calculate how much Toastman's cards have the letter equal to letter on ith, then sum up all these quantities, such a number of coins Appleman should give to Toastman.

Given the description of Appleman's cards. What is the maximum number of coins Toastman can get?
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Input
The first line contains two integers n and k (1 ≤ k ≤ n ≤ 105). The next line contains n uppercase letters without spaces — the i-th letter describes the i-th card of the Appleman.

Output
Print a single integer – the answer to the problem.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Examples:                                                                                                            |  
Input:                                                                                                               |
15 10                                                                                                                |
DZFDFZDFDDDDDDF                                                                                                      |
Output:                                                                                                              |
82                                                                                                                   |
Input:                                                                                                               |
6 4                                                                                                                  |
YJSNPI                                                                                                               |
Output:                                                                                                              |
4                                                                                                                    |

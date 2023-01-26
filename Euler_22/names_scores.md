This problem is a programming version of Problem 22 from `projecteuler.net` provided by `hackerrank`

You are given around five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list in sample is sorted into alphabetical order, PAMELA, which is worth  16 + 1 + 13 + 5 + 12 + 1 = 48, is the  name 5<sup>th</sup> in the list. So, PAMELA would obtain a score of 5 x 48 = 240 .

You are given  queries, each query is a name, you have to print the score.

Input Format
```
The first line contains an integer , i.e., number of names.
Next  lines will contain a Name.
Followed by integer  followed by  lines each having a word.
```
Constraints
```
* 1 <= N <= 5200
* length of each word will be less than
* 1 <= Q <= 100
```
Output Format
```
Print the values corresponding to each test case.
```
Sample Input
```
5
ALEX
LUIS
JAMES
BRIAN
PAMELA
1
PAMELA
```
Sample Output
```
240
```
Explanation
```
Explained in statement.
```

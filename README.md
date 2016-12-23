<h2><b>#BiggerIsGreater</b></h2>

Given a word <b>w</b>, rearrange the letters of <b>w</b> to construct another word <b>s</b> in such a way that <b>s</b> is lexicographically greater than <b>w</b>. In case of multiple possible answers, find the lexicographically smallest one among them.

<h2><b>Input Format</b></h2>

The first line of input contains <b>t</b> the number of test cases. 
Each of the next <b>t</b> lines contains <b>w</b>.

<h2><b>Constraints</b></h2>
<b>1 &le; t &le; 10<sup>5</sup><br>
1 &le; |w| &le; 100<br>
w </b>will contain only lower-case English letters and its length will not exceed 100.

<h2><b>Output Format</b></h2>

For each test case, output a string lexicographically bigger than <b>w</b> in a separate line. In case of multiple possible answers, print the lexicographically smallest one, and if no answer exists, print <b>no answer</b>.

<h2><b>Sample Input</b></h2>

5<br>
ab<br>
bb<br>
hefg<br>
dhck<br>
dkhc<br>

<h2><b>Sample Output</b></h2>

ba<br>
no answer<br>
hegf<br>
dhkc<br>
hcdk<br>

<h2><b>Explanation</b></h2>
&#8226;Test case 1:<br>
&nbsp;There exists only one string greater than <b>ab</b> which can be built by rearranging <b>ab</b>. That is <b>ba</b>.<br>
&#8226;Test case 2:<br>
&nbsp;Not possible to rearrange <b>bb</b> and get a lexicographically greater string.<br>
&#8226;Test case 3:<br>
&nbsp;<b>hegf</b> is the next string lexicographically greater than <b>hefg</b>.<br>
&#8226;Test case 4:<br>
&nbsp;<b>dhkc</b> is the next string lexicographically greater than <b>dhck</b>.<br>
&#8226;Test case 5:<br>
&nbsp;<b>hcdk</b> is the next string lexicographically greater than <b>dkhc</b>.<br>


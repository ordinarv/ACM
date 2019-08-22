# CF-President segment tree

## A	CodeForces 484E	Sign on Fence

Bizon the Champion has recently finished painting his wood fence. The fence consists of a sequence of *n* panels of 1 meter width and of arbitrary height. The *i*-th panel's height is *h**i* meters. The adjacent planks follow without a gap between them.

After Bizon painted the fence he decided to put a "for sale" sign on it. The sign will be drawn on a rectangular piece of paper and placed on the fence so that the sides of the sign are parallel to the fence panels and are also aligned with the edges of some panels. Bizon the Champion introduced the following constraints for the sign position:

1. The width of the sign should be exactly *w* meters.
2. The sign must fit into the segment of the fence from the *l*-th to the *r*-th panels, inclusive (also, it can't exceed the fence's bound in vertical direction).

The sign will be really pretty, So Bizon the Champion wants the sign's height to be as large as possible.

You are given the description of the fence and several queries for placing sign. For each query print the maximum possible height of the sign that can be placed on the corresponding segment of the fence with the given fixed width of the sign.

**Input**
The first line of the input contains integer *n* — the number of panels in the fence (1 ≤ *n* ≤ 105).

The second line contains *n* space-separated integers *h**i*, — the heights of the panels (1 ≤ *h**i* ≤ 109).

The third line contains an integer *m* — the number of the queries (1 ≤ *m* ≤ 105).

The next *m* lines contain the descriptions of the queries, each query is represented by three integers *l*, *r* and *w* (1 ≤ *l* ≤ *r* ≤ *n*, 1 ≤ *w* ≤ *r* - *l* + 1) — the segment of the fence and the width of the sign respectively.

**Output**
For each query print the answer on a separate line — the maximum height of the sign that can be put in the corresponding segment of the fence with all the conditions being satisfied.

## B	CodeForces 538F	A Heap of Heaps

Andrew skipped lessons on the subject 'Algorithms and Data Structures' for the entire term. When he came to the final test, the teacher decided to give him a difficult task as a punishment.

The teacher gave Andrew an array of *n* numbers *a*1, ..., *a**n*. After that he asked Andrew for each *k* from 1 to *n* - 1 to build a *k*-ary heap on the array and count the number of elements for which the property of the minimum-rooted heap is violated, i.e. the value of an element is less than the value of its parent.

Andrew looked up on the Wikipedia that a *k*-ary heap is a rooted tree with vertices in elements of the array. If the elements of the array are indexed from 1 to *n*, then the children of element *v* are elements with indices *k*(*v* - 1) + 2, ..., *kv* + 1 (if some of these elements lie outside the borders of the array, the corresponding children are absent). In any *k*-ary heap every element except for the first one has exactly one parent; for the element 1 the parent is absent (this element is the root of the heap). Denote *p*(*v*) as the number of the parent of the element with the number *v*. Let's say that for a non-root element *v* the property of the heap is violated if *a**v* < *a**p*(*v*).

Help Andrew cope with the task!

Input

The first line contains a single integer *n* (2 ≤ *n* ≤ 2·105).

The second line contains *n* space-separated integers *a*1, ..., *a**n* ( - 109 ≤ *a**i* ≤ 109).

**Output**

in a single line print *n* - 1 integers, separate the consecutive numbers with a single space — the number of elements for which the property of the *k*-ary heap is violated, for *k* = 1, 2, ..., *n* - 1.

## C	CodeForces 765F	Souvenirs

Artsem is on vacation and wants to buy souvenirs for his two teammates. There are *n*souvenir shops along the street. In *i*-th shop Artsem can buy one souvenir for *a**i*dollars, and he cannot buy more than one souvenir in one shop. He doesn't want to introduce envy in his team, so he wants to buy two souvenirs with least possible difference in price.

Artsem has visited the shopping street *m* times. For some strange reason on the *i*-th day only shops with numbers from *l**i* to *r**i* were operating (weird? yes it is, but have you ever tried to come up with a reasonable legend for a range query problem?). For each visit, Artsem wants to know the minimum possible difference in prices of two different souvenirs he can buy in the opened shops.

In other words, for each Artsem's visit you should find the minimum possible value of 
$$
|as - at|  where  li ≤ s, t ≤ ri, s ≠ t.
$$
Input

The first line contains an integer *n* (2 ≤ *n* ≤ 1e5).

The second line contains *n* space-separated integers *a*1, ..., *a**n* (0 ≤ *a**i* ≤ 109).

The third line contains the number of queries *m* (1 ≤ *m* ≤ 3·1e5).

Next *m* lines describe the queries. *i*-th of these lines contains two space-separated integers *l**i* and *r**i* denoting the range of shops working on *i*-th day (1 ≤ *l**i* < *r**i* ≤ *n*).

Output

Print the answer to each query in a separate line.

## D	CodeForces 787E	Till I Collapse

Rick and Morty want to find MR. PBH and they can't do it alone. So they need of Mr. Meeseeks. They Have generated *n* Mr. Meeseeks, standing in a line numbered from 1 to *n*. Each of them has his own color. *i*-th Mr. Meeseeks' color is *a**i*.

Rick and Morty are gathering their army and they want to divide Mr. Meeseeks into some squads. They don't want their squads to be too colorful, so each squad should have Mr. Meeseeks of at most *k* different colors. Also each squad should be a continuous subarray of Mr. Meeseeks in the line. Meaning that for each 1 ≤ *i* ≤ *e* ≤ *j* ≤ *n*, if Mr. Meeseeks number *i* and Mr. Meeseeks number *j* are in the same squad then Mr. Meeseeks number *e* should be in that same squad.

Also, each squad needs its own presidio, and building a presidio needs money, so they want the total number of squads to be minimized.

Rick and Morty haven't finalized the exact value of *k*, so in order to choose it, for each *k* between 1 and *n* (inclusive) need to know the minimum number of presidios needed.

Input

The first line of input contains a single integer *n* (1 ≤ *n* ≤ 105) — number of Mr. Meeseeks.

The second line contains *n* integers *a*1, *a*2, ..., *a**n* separated by spaces (1 ≤ *a**i* ≤ *n*) — colors of Mr. Meeseeks in order they standing in a line.

Output

In the first and only line of input print *n* integers separated by spaces. *i*-th integer should be the minimum number of presidios needed if the value of *k* is *i*.

## E	CodeForces 813E	Army Creation

As you might remember from our previous rounds, Vova really likes computer games. Now he is playing a strategy game known as Rage of Empires.

In the game Vova can hire *n* different warriors; *i*th warrior has the type Ai. Vova wants to create a balanced army hiring some subset of warriors. An army is called balanced if for each type of warrior present in the game there are not more than *k*warriors of this type in the army. Of course, Vova wants his army to be as large as possible.

To make things more complicated, Vova has to consider *q* different plans of creating his army. *i*th plan allows him to hire only warriors whose numbers are not less than *l**i* and not greater than Ri.

Help Vova to determine the largest size of a balanced army for each plan.

Be aware that the plans are given in a modified way. See input section for details.

Input

The first line contains two integers *n* and *k* (1 ≤ *n*, *k* ≤ 100000).

The second line contains *n* integers *a*1, *a*2, ... an (1 ≤ ai ≤ 100000).

The third line contains one integer *q* (1 ≤ *q* ≤ 100000).

Then *q* lines follow. *i*th line contains two numbers *x**i* and *y**i* which represent *i*th plan (1 ≤ Xi, Yi ≤ *n*).

You have to keep track of the answer to the last plan (let's call it *last*). In the beginning *last* = 0. Then to restore values of *l**i* and *r**i* for the *i*th plan, you have to do the following:......

Output

Print *q* numbers. *i*th number must be equal to the maximum size of a balanced army when considering *i*th plan.

## F	CodeForces 916E	Jamie and Tree

To your surprise, Jamie is the final boss! Ehehehe.

Jamie has given you a tree with n vertices, numbered from 1 to n. Initially, the root of the tree is the vertex with number 1. Also, each vertex has a value on it.

Jamie also gives you three types of queries on the tree:

1 v — Change the tree's root to vertex with number v.

2 u v x — For each vertex in the subtree of smallest size that contains u and v, add x to its value.

3 v — Find sum of values of vertices in the subtree of vertex with number v.

A subtree of vertex v is a set of vertices such that v lies on shortest path from this vertex to root of the tree. Pay attention that subtree of a vertex can change after changing the tree's root.

Show your strength in programming to Jamie by performing the queries accurately!

Input
The first line of input contains two space-separated integers n and q (1 ≤ n ≤ 105, 1 ≤ q ≤ 105) — the number of vertices in the tree and the number of queries to process respectively.

The second line contains n space-separated integers a1, a2, ..., an ( - 108 ≤ ai ≤ 108) — initial values of the vertices.

Next n - 1 lines contains two space-separated integers ui, vi (1 ≤ ui, vi ≤ n) describing edge between vertices ui and vi in the tree.

The following q lines describe the queries.

Each query has one of following formats depending on its type:

1 v (1 ≤ v ≤ n) for queries of the first type.

2 u v x (1 ≤ u, v ≤ n,  - 108 ≤ x ≤ 108) for queries of the second type.

3 v (1 ≤ v ≤ n) for queries of the third type.

All numbers in queries' descriptions are integers.

The queries must be carried out in the given order. It is guaranteed that the tree is valid.

Output
For each query of the third type, output the required answer. It is guaranteed that at least one query of the third type is given by Jamie.

## G	CodeForces 1093E	Intersection of Permutations

You are given two permutations a and b, both consisting of n elements. Permutation of n elements is such a integer sequence that each value from 1 to n appears exactly once in it.

You are asked to perform two types of queries with them:

1 la ra lb rb — calculate the number of values which appear in both segment [la;ra] of positions in permutation a and segment [lb;rb] of positions in permutation b;
2 x y — swap values on positions x and y in permutation b.
Print the answer for each query of the first type.

It is guaranteed that there will be at least one query of the first type in the input.

Input
The first line contains two integers n and m (2≤n≤2⋅105, 1≤m≤2⋅105) — the number of elements in both permutations and the number of queries.

The second line contains n integers a1,a2,…,an (1≤ai≤n) — permutation a. It is guaranteed that each value from 1 to n appears in a exactly once.

The third line contains n integers b1,b2,…,bn (1≤bi≤n) — permutation b. It is guaranteed that each value from 1 to n appears in b exactly once.

Each of the next m lines contains the description of a certain query. These are either:

1 la ra lb rb (1≤la≤ra≤n, 1≤lb≤rb≤n);
2 x y (1≤x,y≤n, x≠y).
Output
Print the answers for the queries of the first type, each answer in the new line — the number of values which appear in both segment [la;ra] of positions in permutation a and segment [lb;rb] of positions in permutation b.
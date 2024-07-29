-CH-232-A
a2_p4.[hs]
Amine Chahi
m.chahi@jacobs-university.de-

--PROBLEM 2.4:

--a) A possible solution (not requiring language features not introduced yet):

[x | n <- [210], x <- [1..n], n `mod` x == 0]

--b) A first not yet quite correct solution:

[(a,b,c) | a <- [1..100], b <- [1..100], c <- [1..100], c^2 == a^2 + b^2]

--Note that this contains “duplicates” where a and b are reversed. This can be prevented by
--requiring that b does not range over values that are less than a.

[(a,b,c) | a <- [1..100], b <- [a..100], c <- [1..100], c^2 == a^2 + b^2]

--This is still not very efficient. Since b is the longer “edge” and c must be longer the b, we can
--change this to:

[(a,b,c) | a <- [1..100], b <- [a..100], c <- [b..100], c^2 == a^2 + b^2]

--We can do even better by restricting the upper bound for c to the minimum of 100 and a + b:

[(a,b,c) | a <- [1..100], b <- [a..100], c <- [b..min 100 (a+b)], c^2 == a^2 + b^2]

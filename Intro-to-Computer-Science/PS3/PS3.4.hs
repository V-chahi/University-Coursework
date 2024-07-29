-
CH-232-A
a3_p4.[hs]
Amine Chahi
m.chahi@jacobs-university.de
-

--B-) A possible solution not requiring language features is as follows:

 sub :: Char -> Char
 sub 'a' = '@'
 sub 'b' = '8'
 sub 'c' = 'C'
 sub 'd' = '6'
 sub 'e' = '3'
 sub 'f' = '#'
 sub 'g' = '9'
 sub 'h' = '#'
 sub 'i' = '1'
 sub 'l' = '1'
 sub 'o' = '0'
 sub 'q' = '9'
 sub 's' = '$'
 sub 'x' = '%'
 sub 'y' = '?'
 sub c = c

--An alternate smarter solution could be written as:

 sub :: Char -> Char
 sub c = subs c smap
 where smap = "a@b8c(d6e3f#g9h#i1l1o0q9s$x%y?"
 subs c [] = c
 subs c [_] = c
 subs c (a:b:xs) = if a == c then b else subs c xs

--a list of tuples could be used, Yet writing it down becomes unpractical

--C-) A simple recursion:

 munge :: [Char] -> [Char]
 munge [] = []
 munge (x:xs) = sub x : munge xs

--Obviously, this is just A special case of a map, it can also be written in a point-free notation :

 munge :: [Char] -> [Char]
 munge = map sub
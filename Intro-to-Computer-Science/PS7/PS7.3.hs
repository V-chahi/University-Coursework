{-
CH-232-A
A7_P3.[hs]
Amine Chahi
m.chahi@jacobs-university.de


The fold functions compute a value over a list (or some other type that is foldable) by applying an
operator to the list elements and a neutral element. The foldl function assumes that the operator
is left associative, the foldr function assumes that the operatore is right associative. For example,
the function application

  foldl (+) 0 [3,5,2,1]

results in the computation of ((((0+3)+5)+2)+1) and the function application

  foldr (+) 0 [3,5,2,1]

results in the computation of (3+(5+(2+(1+0)))). The value computed by the fold functions may be
more complex than a simple scalar. It is very well possible to construct a new list as part of the
fold. For example:

  map' :: (a -> b) -> [a] -> [b]
  map' f xs = foldr ((:) . f) [] xs

The evaluation of map' succ [1,2,3] results in the list [2,3,4]. There are several duality theo-
rems that can be stated for fold functions. Prove the following three duality theorems:

a) Let op be an associative operation with e as the neutral element:

	op is associative: (x op y) op z = x op (y op z)
	e is neutral element: e op x = x and x op e = x

Then the following holds for finite lists xs:

  foldr op e xs = foldl op e xs

b) Let op1 and op2 be two operations for which

  x `op1` (y `op2` z) = (x `op1` y) `op2` z
  x `op1` e = e `op2` x

holds. Then the following holds for finite lists xs:

  foldr op1 e xs = foldl op2 e xs

c) Let op be an associative operation and xs a finite list. Then

  foldr op a xs = foldl op' a (reverse xs)

holds with

  x op' y = y op x
-}

--SOLUTION:

--a) 
	foldr op e [a1,...,an] = a1 `op` (a2 `op` (...(an-1 `op` (an `op` e))...))
			       = a1 `op` (a2 `op` (...(an-1 `op` an)...))

	foldl op e [a1,...,an] = (...((e `op` a1) `op` a2)...) `op` an
			       = (...(a1 `op` a2)...) `op` an

--Since op is associative, the order of the evaluation does not impact the result, hence both
--fold function calls are semantically equivalent.

--b) Lets look at the left side and how the right side could be transformed into it.

	foldr op1 e [a1,...,an] = a1 `op1` (a2 `op1` (...(an-1 `op1` (an `op1` e))...))
	foldl op2 e [a1,...,an] = (...((e `op2` a1) `op2` a2)...) `op2` an
				= (...((a1 `op1` e) `op2` a2)...) `op2` an
				= (...(a1 `op1` (e `op2` a2))...) `op2` an
				= (...(a1 `op1` (a2 `op1` e))...) `op2` an
				= ... =
				= a1 `op1` (a2 `op1` (...(an-1 `op1` (an `op1` e))...))

--c) This can be shown as follows:

	foldr op a [a1,...,an] = a1 `op` (a2 `op` (...(an-1 `op` (an `op` a))...))

	foldl op' a (reverse [a1,...,an]
				= foldl op' a [an,...,a1]
				= (...((a `op'` an) `op'` an-1)...) `op'` a1
				= (...((an `op` a) `op'` an-1)...) `op'` a1
				= (...(an-1 `op` (an `op` a))...) `op'` a1
				= ... = a1 `op` (a2 `op` (...(an-1 `op` (an `op` a))...))
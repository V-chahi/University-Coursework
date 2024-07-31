{-
CH-232-A
A6_P3.[hs]
Amine Chahi
m.chahi@jacobs-university.de
-}

module Main (main) where

import Test.HUnit

-- The function diet implements the three diet rules directly.

diet :: Bool -> Bool -> Bool -> Bool
diet b f i = r1 && r2 && r3
   where r1 = not b --> f
         r2 = (b && f) --> not i
         r3 = (i || not b) --> not f
         (-->) x y = not x || y

-- The function diet' implements the simplified diet formula.

diet' :: Bool -> Bool -> Bool -> Bool
diet' b f i = b && not (i && f)

-- The function truthTable takes a function as an argument and returns
-- a list where each element is a 4-tuple representing three input
-- values passed to the function followed by the function's result.

truthTable :: (Bool -> Bool -> Bool -> Bool) -> [(Bool, Bool, Bool, Bool)]
truthTable f = [ (x, y, z, f x y z) | x <- t, y <- t, z <- t ]
   where t = [False, True]

-- Test whether the two truth tables returned are the same
-- You may want to add your own test cases...

dietTests = TestList [ truthTable diet ~?= truthTable diet' ]

main = runTestTT dietTests
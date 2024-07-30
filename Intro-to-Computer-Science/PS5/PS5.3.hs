{-
CH-232-A
A5_P4.[hs]
Amine Chahi
m.chahi@jacobs-university.de
-}

module Main (main) where

import Test.HUnit

-- /The 'dtob' function converts a non-negative integer number into a
-- String, providing a binary representation of the number.

dtob :: Int -> String
dtob 0 = "0"
dtob 1 = "1"
dtob n = dtob (div n 2) ++ (if odd n then "1" else "0")

-- |The 'btod' function converts a String representing a non-negative
-- integer number as a binary number into an integer number.

btod :: String -> Int
btod xs = btod' (reverse xs) where
  btod' "0" = 0
  btod' "1" = 1
  btod' (x:xs) = btod' [x] + 2 * btod' xs

 -- Below are some test cases...

dtobTests = TestList [ dtob 0 ~?= "0"
		     , dtob 1 ~?= "1"
		     , dtob 2 ~?= "10"
		     , dtob 127 ~?= "1111111"
		     , dtob 12345 ~?= "11000000111001"
	    ]

btodTests = TestList [ btod "0" ~?= 0
 		     , btod "1" ~?= 1
 		     , btod "10" ~?= 2
 		     , btod "1111111" ~?= 127
 		     , btod "11000000111001" ~?= 12345
 	    ]

 main = runTestTT $ TestList [ dtobTests, btodTests ]
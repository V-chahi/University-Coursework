{-
CH-232-A
a4_p4.[hs]
Amine Chahi
m.chahi@jacobs-university.de
-}

module Main (main) where

import Test.HUnit

-- |The 'isLongYear' function indicates whether a year is a long year
-- (i.e., a year with 53 weeks instead of 52 weeks).

 isLongYear :: Int -> Bool
 isLongYear y = w y > 52
     where
       p y = (y + y `div` 4 - y `div` 100 + y `div` 400) `mod` 7
       w y = if (p y) == 4 || p (y-1) == 3 then 53 else 52

 -- Test cases...

isLongYearTests = TestList [
		    filter isLongYear [2000..2100] ~?= [
		      2004, 2009, 2015, 2020, 2026, 2032, 2037, 2043, 2048,
		      2054, 2060, 2065, 2071, 2076, 2082, 2088, 2093, 2099
 		    ]
 		  ]

main = runTestTT isLongYearTests
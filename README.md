# Yoda notation

@input: large text
@output: same text with conditions

@conditions:

0. definition:
- centred only on the following relational operators: '=', '==', '!=' 
- in a binary boolean expression the order of parameters is: 'constant then object'
- no modifications for 'constant then constant' statements
- a 'constant' is a rvalue, anything like:
	- const primitive/non-primitive
	- pointer to functions
	- 
- what statements to consider?

1. challenges:  
- chained notation: e. g. 3 < y < 4 (e. g. pyton)
- '!==', '===' operators (javascript)

2. final considerations:
- correct accidental assignements in code
- will try to compile and expect the same output 
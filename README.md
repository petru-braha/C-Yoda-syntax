# Yoda notation

@input: large text
@output: same text with conditions - correct accidental assignements in code

@conditions:

0. definition:
- centred only on the following relational operators: '=' '==' '!=' 
- in a binary boolean expression the order of parameters is: 'constant then object'
- no modifications for 'constant then constant' statements
- a 'constant' is a rvalue, anything like:
	- const primitive/non-primitive
	- pointer to functions
	- preprocessed variables
- statements to consider:
	- conditional: any 'if' 'else' 'while' 'for' '? operator' 

1. my code will:
- revert actual 
- determine accidental assignments and ask the user for improvement

2. new challenges:
- chained notation: 3 < y < 4 (e. g. pyton)
- '!==', '===' operators (e. g. javascript)

3. extra talk:
- no: discard any adjustment if the output of the code is different
- no other operators => redability, purposeless
# Yoda notation

## input: large text
## output: same text with 'conditions' - correct accidental assignements in code

## conditions
- centred only on the following relational operators: '=' '==' '!=' 
- in an expression the order of parameters is: 'constant then object'
- no modifications for 'constant then constant' statements
- a 'constant' is a rvalue, anything like:
	- const primitive/non-primitive
	- pointer to functions
	- preprocessed variables
	- typeid
- statements to consider: 'if' 'while' 'for' 'condition operator - ?' 

## steps
- assume there are no syntax/semantic errors
- store constant names
- read the text in chunks
- modify each chunk individually, if needed
- determine accidental assignments and ask the user for improvement
- print on standard output the result

## log
- no: discard any adjustment if the output of the code is different
- no: other operators => redability, purposeless
- no: run an entire project
- i assumed that every operator problem can appear only in if while for ? statements. it was wrong
- inspiration 
	- https://www.geeksforgeeks.org/what-is-the-efficient-way-of-reading-a-huge-text-file/
	- https://cplusplus.com/forum/unices/13699/
	
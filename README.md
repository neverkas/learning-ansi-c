# 1. Precedencia de operadores

## 1.1 Precedencia entre = y !=
The parentheses around the assignment, within the condition are necessary. The precedence  of != is higher than that of =, which means that in the absence of parentheses the relational test != would be done before the assignment =.
`c = getchar() != EOF ` is equivalent to  `c = (getchar() != EOF)`

The right way is 
`while ((c = getchar()) != EOF)`

## 1.2 Precedencia entre & y ||
`if (c == ' ' || c == '\n' || c = '\t')`
AND; its precedence is just higher than || Expressions connected by && or || are evaluated left to right, and it is guaranteed that evaluation will stop as soon as the truth or falsehood is known. If c is a blank, there is no need to test whether it is a newline or tab, so these tests are not made

# 2. Incremental - Manera eficiente de usarlos
You could instead write nc = nc 
+ 1 but ++nc is more concise and often more efficient

# 3. Diferencia Int vs Long
some machines, int and long are the same  size, on others an int is 16 bits, with a maximum value of 32767, and it would take relatively  little input to overflow an int counter.

# 4. Sentencia o Declaracion nula
grammatical rules of C require that a for statement have a body. The isolated  semicolon, called a null statement, is there to satisfy that requirement
```
for (nc = 0; gechar() != EOF; ++nc) 
; 
printf("%.0f\n", nc);
```

# 5. Iteradores While y For
One of the nice things about while and  for is that they test at the top of the loop, before proceeding with the body. If there is nothing to do, nothing is done, even if that means never going through the loop body

# 6. Asignacion a multiples variables
`nl = nw = nc = 0;` 
sets all three variables to zero. This is not a special case, but a consequence of the fact that an assignment is an expression with the value and assignments associated from right to left. It's as if we had written `nl = (nw = (nc = 0));`
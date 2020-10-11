# Regular Expression
## Outline
  - atoms
  - repetition operators
  - concatenation
  - alternation
  - ()

## How regular expression built
    Atom -> Piece -> Brnch -> Regular Expression
```
`a` match `car`
`\?` match `what?`
`\$` match `what$`
`\^` match `2^3`
`\\` match a\b
`.` match any character
`\.` match only .

# atom

[list]
[^list]
[a-z0-9]
[^0-9.]
## inside [] special characters(? or .) treated as regular character
[:C:] maybe used inside []
[[:alpha]01]
[[:alnum]_,@]
[ABC[:punc:]]
[^[:print:]] # prints anything that's not printable character
\w  -> [[:alnum:]_]
\W  -> [^[alnum:]_]
$   -> end of a string
\b  -> word boundary(empty string at the begging or end of word)
\B  -> empty string that's not start or end of a word


# pieces

X?
X* -> zero or more
X+ -> one or more

X{n}
X{n,}
X{n,m}

# branches

^[0-9]+$
^y?[0-9]+$
john\b
^[0-9]{3}[A-Za-z]{3}$

|

^We like|apples 
^[0-9]{3}[A-Za-z]{3}$|^[A-Za-z]{3}[0-9]{3}$
^([0-9]{1,3}\.){3}[0-9]{1,3}$
^(We like (apples|bananas))?$

sshd\[[0-9]+\]: Connection from [0-9.]+$
sshd\[[0-9]+\]: Connection from ([0-9]{1,3}\.){3}[0-9]{1,3}$
sshd\[[0-9]+\]: Failed .+ for \w+ from [0-9.]+ port [0-9]+ ssh2$

^[A-Za-z][A-Za-z0-9-]*[A-Za-z0-9]$
^([A-Za-z]|[A-Za-z][A-Za-z0-9-]*[A-Za-z0-9])$

```

 `use egrep tool to check`


PROGRAM: 
MOV SI 2000H
MOV AX,[SI]
NEG AX
MOV BX,[SI]02H
CWD
IDIV BX
MOV [SI]04H,AX
MOV [SI]06H,DX
INT 3

PROGRAM:
 MOV SI,3000H
 MOV DI,4000H 
 MOV CL,05H
 MOV AX,0000H
 MOV BX,0000H
XX: MOV DX,[SI]
 ADD AX,DX
 JNC LABEL
 INC BX
LABEL: INC SI
 INC SI
 LOOP XX
 MOV [DI],AX
MOV [DI]02,BX
 INT 03

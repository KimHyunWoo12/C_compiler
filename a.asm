	      INT 0, 20
	      SUP 0, main
	      RET 0, 0
main:
	      INT 0, 58
	      LDA 1, 27
	     LITI 0, 2
	      STX 0, 1
	      POP 0, 1
L2:
	      LOD 1, 27
	     LITI 0, 100
	     LEQI 0, 0
	      JPC 0, L3
	      LDA 1, 31
	     LITI 0, 2
	      STX 0, 1
	      POP 0, 1
L5:
	      LOD 1, 31
	      LOD 1, 27
	     LSSI 0, 0
	      JPC 0, L6
	      LOD 1, 27
	      LOD 1, 31
	      MOD 0, 0
	     LITI 0, 0
	     EQLI 0, 0
	      JPC 0, L7
	      LDA 1, 23
	     LITI 0, 1
	      STX 0, 1
	      POP 0, 1
	      JMP 0, L6
L7:
L4:
	      LOD 1, 31
	      LDA 1, 31
	      LDX 0, 1
	     INCI 0, 0
	      STO 0, 1
	      POP 0, 1
	      JMP 0, L5
L6:
	      LOD 1, 23
	      NOT 0, 0
	      JPC 0, L8
	      INT 0, 12
	      LDA 0, 12
	      LOD 1, 27
	      POP 0, 5
	     ADDR 0, printf
	      CAL 0, 0
L8:
	      LDA 1, 23
	     LITI 0, 0
	      STX 0, 1
	      POP 0, 1
L1:
	      LOD 1, 27
	      LDA 1, 27
	      LDX 0, 1
	     INCI 0, 0
	      STO 0, 1
	      POP 0, 1
	      JMP 0, L2
L3:
	      RET 0, 0
.literal    12 "%d\n"

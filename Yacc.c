%{
    #include<stdio.h>
    int flag=0;
%}
%token ID KEY COLON COMMA NUM
%%
stmt: list {printf("\n Declaration is validated !");}
;
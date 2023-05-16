from lexer import *


def main():
    #source = "+- */"
    #source="+- */ >>= = !="
    #source="+- # This is a comment!\n */"
    #source= "+- \"This is a string\" # This is a comment!\n */" 
    source="IF+-123 foo*THEN/"
    lexer = Lexer(source)
    token = lexer.getToken()
    while token.kind != TokenType.EOF:
        print(token.kind)
        token = lexer.getToken()

main()
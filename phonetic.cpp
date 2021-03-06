std::string appendChar(std::string phonetic, char inChar){
	switch (inChar){
		case 'a':
		phonetic.append("alfa");
		break;
		case 'b':
		phonetic.append("bravo");
		break;
		case 'c':
		phonetic.append("charlie");
		break;
		case 'd':
		phonetic.append("delta");
		break;
		case 'e':
		phonetic.append("echo");
		break;
		case 'f':
		phonetic.append("foxtrot");
		break;
		case 'g':
		phonetic.append("golf");
		break;
		case 'h':
		phonetic.append("hotel");
		break;
		case 'i':
		phonetic.append("india");
		break;
		case 'j':
		phonetic.append("juliett");
		break;
		case 'k':
		phonetic.append("kilo");
		break;
		case 'l':
		phonetic.append("lima");
		break;
		case 'm':
		phonetic.append("mike");
		break;
		case 'n':
		phonetic.append("november");
		break;
		case 'o':
		phonetic.append("oscar");
		break;
		case 'p':
		phonetic.append("papa");
		break;
		case 'q':
		phonetic.append("quebec");
		break;
		case 'r':
		phonetic.append("romeo");
		break;
		case 's':
		phonetic.append("sierra");
		break;
		case 't':
		phonetic.append("tango");
		break;
		case 'u':
		phonetic.append("uniform");
		break;
		case 'v':
		phonetic.append("victor");
		break;
		case 'w':
		phonetic.append("whiskey");
		break;
		case 'x':
		phonetic.append("xray");
		break;
		case 'y':
		phonetic.append("yankee");
		break;
		case 'z':
		phonetic.append("zulu");
		break;
		case 'A':
		phonetic.append("ALFA");
		break;
		case 'B':
		phonetic.append("BRAVO");
		break;
		case 'C':
		phonetic.append("CHARLIE");
		break;
		case 'D':
		phonetic.append("DELTA");
		break;
		case 'E':
		phonetic.append("ECHO");
		break;
		case 'F':
		phonetic.append("FOXTROT");
		break;
		case 'G':
		phonetic.append("GOLF");
		break;
		case 'H':
		phonetic.append("HOTEL");
		break;
		case 'I':
		phonetic.append("INDIA");
		break;
		case 'J':
		phonetic.append("JULIETT");
		break;
		case 'K':
		phonetic.append("KILO");
		break;
		case 'L':
		phonetic.append("LIMA");
		break;
		case 'M':
		phonetic.append("MIKE");
		break;
		case 'N':
		phonetic.append("NOVEMBER");
		break;
		case 'O':
		phonetic.append("OSCAR");
		break;
		case 'P':
		phonetic.append("PAPA");
		break;
		case 'Q':
		phonetic.append("QUEBEC");
		break;
		case 'R':
		phonetic.append("ROMEO");
		break;
		case 'S':
		phonetic.append("SIERRA");
		break;
		case 'T':
		phonetic.append("TANGO");
		break;
		case 'U':
		phonetic.append("UNIFORM");
		break;
		case 'V':
		phonetic.append("VICTOR");
		break;
		case 'W':
		phonetic.append("WHISKEY");
		break;
		case 'X':
		phonetic.append("XRAY");
		break;
		case 'Y':
		phonetic.append("YANKEE");
		break;
		case 'Z':
		phonetic.append("ZULU");
		break;
		case '1':
		phonetic.append("one");
		break;
		case '2':
		phonetic.append("two");
		break;
		case '3':
		phonetic.append("three");
		break;
		case '4':
		phonetic.append("four");
		break;
		case '5':
		phonetic.append("five");
		break;
		case '6':
		phonetic.append("six");
		break;
		case '7':
		phonetic.append("seven");
		break;
		case '8':
		phonetic.append("eight");
		break;
		case '9':
		phonetic.append("nine");
		break;
		case '0':
		phonetic.append("zero");
		break;
		case '`':
		phonetic.append("backtic");
		break;
		case '~':
		phonetic.append("tilde");
		break;
		case '!':
		phonetic.append("bang");
		break;
		case '@':
		phonetic.append("at");
		break;
		case '#':
		phonetic.append("hash");
		break;
		case '$':
		phonetic.append("dollar");
		break;
		case '%':
		phonetic.append("percent");
		break;
		case '^':
		phonetic.append("carat");
		break;
		case '&':
		phonetic.append("ampersand");
		break;
		case '*':
		phonetic.append("asterisk");
		break;
		case '(':
		phonetic.append("open parenthesis");
		break;
		case ')':
		phonetic.append("closed parenthesis");
		break;
		case '-':
		phonetic.append("dash");
		break;
		case '_':
		phonetic.append("underscore");
		break;
		case '=':
		phonetic.append("equals");
		break;
		case '+':
		phonetic.append("plus");
		break;
		case '[':
		phonetic.append("open bracket");
		break;
		case ']':
		phonetic.append("closed bracket");
		break;
		case ';':
		phonetic.append("semicolon");
		break;
		case ':':
		phonetic.append("colon");
		break;
		case '\'':
		phonetic.append("apostrophe");
		break;
		case '"':
		phonetic.append("quote");
		break;
		case ',':
		phonetic.append("comma");
		break;
		case '<':
		phonetic.append("open angle bracket");
		break;
		case '.':
		phonetic.append("period");
		break;
		case '>':
		phonetic.append("closed angle bracket");
		break;
		case '/':
		phonetic.append("forward slash");
		break;
		case '?':
		phonetic.append("question mark");
		break;
		case '\\':
		phonetic.append("backslash");
		break;
		case '|':
		phonetic.append("pipe");
		break;
		case '{':
		phonetic.append("open brace");
		break;
		case '}':
		phonetic.append("close brace");
		break;
		}
		phonetic.append(", ");
		return phonetic;
}


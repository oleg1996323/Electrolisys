// Generated from Equation.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class EquationLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, ADD=3, SUB=4, MUL=5, DIV=6, WS=7, FUNCTIONS=8, VALUE=9, 
		SUMPRODUCT=10, LN=11, LG=12, LOG_X=13, EXP=14, NUMBER=15, CONSTANTS=16, 
		ARRAY=17, KEY=18, MAP=19, RANGE=20, PI=21;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "ADD", "SUB", "MUL", "DIV", "WS", "FUNCTIONS", "VALUE", 
			"SUMPRODUCT", "LN", "LG", "LOG_X", "EXP", "INT", "UINT", "EXPONENT", 
			"FLOAT", "NUMBER", "STRING", "VARIABLE", "CONSTANTS", "ARRAY", "KEY", 
			"MAP", "RANGE", "PI"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "'+'", "'-'", "'*'", "'/'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, "ADD", "SUB", "MUL", "DIV", "WS", "FUNCTIONS", "VALUE", 
			"SUMPRODUCT", "LN", "LG", "LOG_X", "EXP", "NUMBER", "CONSTANTS", "ARRAY", 
			"KEY", "MAP", "RANGE", "PI"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public EquationLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Equation.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0015\u00fb\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0004\u0006E\b\u0006\u000b\u0006\f\u0006F\u0001\u0006\u0001"+
		"\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007T\b\u0007\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\b^\b"+
		"\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0005"+
		"\tq\b\t\n\t\f\tt\t\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0003\r\u00a0\b\r\u0001\u000e\u0003\u000e\u00a3"+
		"\b\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0004\u000f\u00a8\b\u000f"+
		"\u000b\u000f\f\u000f\u00a9\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0003\u0011\u00b2\b\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0003\u0011\u00ba\b\u0011"+
		"\u0001\u0012\u0001\u0012\u0003\u0012\u00be\b\u0012\u0001\u0012\u0003\u0012"+
		"\u00c1\b\u0012\u0001\u0013\u0004\u0013\u00c4\b\u0013\u000b\u0013\f\u0013"+
		"\u00c5\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0004\u0014\u00cc"+
		"\b\u0014\u000b\u0014\f\u0014\u00cd\u0001\u0014\u0004\u0014\u00d1\b\u0014"+
		"\u000b\u0014\f\u0014\u00d2\u0003\u0014\u00d5\b\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0001"+
		"\u0017\u0001\u0017\u0003\u0017\u00e6\b\u0017\u0001\u0018\u0001\u0018\u0001"+
		"\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0003"+
		"\u0019\u00f0\b\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0003\u001a\u00fa\b\u001a\u0000"+
		"\u0000\u001b\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b"+
		"\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b"+
		"\u000e\u001d\u0000\u001f\u0000!\u0000#\u0000%\u000f\'\u0000)\u0000+\u0010"+
		"-\u0011/\u00121\u00133\u00145\u0015\u0001\u0000\u0007\u0003\u0000\t\n"+
		"\r\r  \u0002\u0000++--\u0001\u000009\u0002\u0000EEee\u0001\u0000..\u0003"+
		"\u000009AZaz\u0002\u0000AZaz\u010f\u0000\u0001\u0001\u0000\u0000\u0000"+
		"\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000"+
		"\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000"+
		"\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f"+
		"\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013"+
		"\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017"+
		"\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b"+
		"\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000+\u0001\u0000"+
		"\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000"+
		"\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005"+
		"\u0001\u0000\u0000\u0000\u00017\u0001\u0000\u0000\u0000\u00039\u0001\u0000"+
		"\u0000\u0000\u0005;\u0001\u0000\u0000\u0000\u0007=\u0001\u0000\u0000\u0000"+
		"\t?\u0001\u0000\u0000\u0000\u000bA\u0001\u0000\u0000\u0000\rD\u0001\u0000"+
		"\u0000\u0000\u000fS\u0001\u0000\u0000\u0000\u0011]\u0001\u0000\u0000\u0000"+
		"\u0013_\u0001\u0000\u0000\u0000\u0015w\u0001\u0000\u0000\u0000\u0017~"+
		"\u0001\u0000\u0000\u0000\u0019\u0085\u0001\u0000\u0000\u0000\u001b\u009f"+
		"\u0001\u0000\u0000\u0000\u001d\u00a2\u0001\u0000\u0000\u0000\u001f\u00a7"+
		"\u0001\u0000\u0000\u0000!\u00ab\u0001\u0000\u0000\u0000#\u00b9\u0001\u0000"+
		"\u0000\u0000%\u00c0\u0001\u0000\u0000\u0000\'\u00c3\u0001\u0000\u0000"+
		"\u0000)\u00c7\u0001\u0000\u0000\u0000+\u00d9\u0001\u0000\u0000\u0000-"+
		"\u00db\u0001\u0000\u0000\u0000/\u00e5\u0001\u0000\u0000\u00001\u00e7\u0001"+
		"\u0000\u0000\u00003\u00ef\u0001\u0000\u0000\u00005\u00f9\u0001\u0000\u0000"+
		"\u000078\u0005(\u0000\u00008\u0002\u0001\u0000\u0000\u00009:\u0005)\u0000"+
		"\u0000:\u0004\u0001\u0000\u0000\u0000;<\u0005+\u0000\u0000<\u0006\u0001"+
		"\u0000\u0000\u0000=>\u0005-\u0000\u0000>\b\u0001\u0000\u0000\u0000?@\u0005"+
		"*\u0000\u0000@\n\u0001\u0000\u0000\u0000AB\u0005/\u0000\u0000B\f\u0001"+
		"\u0000\u0000\u0000CE\u0007\u0000\u0000\u0000DC\u0001\u0000\u0000\u0000"+
		"EF\u0001\u0000\u0000\u0000FD\u0001\u0000\u0000\u0000FG\u0001\u0000\u0000"+
		"\u0000GH\u0001\u0000\u0000\u0000HI\u0006\u0006\u0000\u0000I\u000e\u0001"+
		"\u0000\u0000\u0000JK\u0005(\u0000\u0000KL\u0003\u000f\u0007\u0000LM\u0005"+
		")\u0000\u0000MT\u0001\u0000\u0000\u0000NT\u0003\u0015\n\u0000OT\u0003"+
		"\u0017\u000b\u0000PT\u0003\u0019\f\u0000QT\u0003\u001b\r\u0000RT\u0003"+
		"\u0013\t\u0000SJ\u0001\u0000\u0000\u0000SN\u0001\u0000\u0000\u0000SO\u0001"+
		"\u0000\u0000\u0000SP\u0001\u0000\u0000\u0000SQ\u0001\u0000\u0000\u0000"+
		"SR\u0001\u0000\u0000\u0000T\u0010\u0001\u0000\u0000\u0000UV\u0005(\u0000"+
		"\u0000VW\u0003\u0011\b\u0000WX\u0005)\u0000\u0000X^\u0001\u0000\u0000"+
		"\u0000Y^\u0003\u000f\u0007\u0000Z^\u0003)\u0014\u0000[^\u0003%\u0012\u0000"+
		"\\^\u0003+\u0015\u0000]U\u0001\u0000\u0000\u0000]Y\u0001\u0000\u0000\u0000"+
		"]Z\u0001\u0000\u0000\u0000][\u0001\u0000\u0000\u0000]\\\u0001\u0000\u0000"+
		"\u0000^\u0012\u0001\u0000\u0000\u0000_`\u0005s\u0000\u0000`a\u0005u\u0000"+
		"\u0000ab\u0005m\u0000\u0000bc\u0005p\u0000\u0000cd\u0005r\u0000\u0000"+
		"de\u0005o\u0000\u0000ef\u0005d\u0000\u0000fg\u0005u\u0000\u0000gh\u0005"+
		"c\u0000\u0000hi\u0005t\u0000\u0000ij\u0005(\u0000\u0000jk\u0001\u0000"+
		"\u0000\u0000kl\u0003-\u0016\u0000lm\u0005,\u0000\u0000mr\u0003-\u0016"+
		"\u0000no\u0005,\u0000\u0000oq\u0003-\u0016\u0000pn\u0001\u0000\u0000\u0000"+
		"qt\u0001\u0000\u0000\u0000rp\u0001\u0000\u0000\u0000rs\u0001\u0000\u0000"+
		"\u0000su\u0001\u0000\u0000\u0000tr\u0001\u0000\u0000\u0000uv\u0005)\u0000"+
		"\u0000v\u0014\u0001\u0000\u0000\u0000wx\u0005L\u0000\u0000xy\u0005n\u0000"+
		"\u0000yz\u0005(\u0000\u0000z{\u0001\u0000\u0000\u0000{|\u0003\u0011\b"+
		"\u0000|}\u0005)\u0000\u0000}\u0016\u0001\u0000\u0000\u0000~\u007f\u0005"+
		"L\u0000\u0000\u007f\u0080\u0005g\u0000\u0000\u0080\u0081\u0005(\u0000"+
		"\u0000\u0081\u0082\u0001\u0000\u0000\u0000\u0082\u0083\u0003\u0011\b\u0000"+
		"\u0083\u0084\u0005)\u0000\u0000\u0084\u0018\u0001\u0000\u0000\u0000\u0085"+
		"\u0086\u0005L\u0000\u0000\u0086\u0087\u0005o\u0000\u0000\u0087\u0088\u0005"+
		"g\u0000\u0000\u0088\u0089\u0005(\u0000\u0000\u0089\u008a\u0001\u0000\u0000"+
		"\u0000\u008a\u008b\u0003\u0011\b\u0000\u008b\u008c\u0005,\u0000\u0000"+
		"\u008c\u008d\u0003\u0011\b\u0000\u008d\u008e\u0005)\u0000\u0000\u008e"+
		"\u001a\u0001\u0000\u0000\u0000\u008f\u0090\u0005E\u0000\u0000\u0090\u0091"+
		"\u0005x\u0000\u0000\u0091\u0092\u0005p\u0000\u0000\u0092\u0093\u0005("+
		"\u0000\u0000\u0093\u0094\u0001\u0000\u0000\u0000\u0094\u0095\u0003\u0011"+
		"\b\u0000\u0095\u0096\u0005)\u0000\u0000\u0096\u00a0\u0001\u0000\u0000"+
		"\u0000\u0097\u0098\u0005E\u0000\u0000\u0098\u0099\u0005x\u0000\u0000\u0099"+
		"\u009a\u0005p\u0000\u0000\u009a\u009b\u0005(\u0000\u0000\u009b\u009c\u0001"+
		"\u0000\u0000\u0000\u009c\u009d\u0003\u001f\u000f\u0000\u009d\u009e\u0005"+
		")\u0000\u0000\u009e\u00a0\u0001\u0000\u0000\u0000\u009f\u008f\u0001\u0000"+
		"\u0000\u0000\u009f\u0097\u0001\u0000\u0000\u0000\u00a0\u001c\u0001\u0000"+
		"\u0000\u0000\u00a1\u00a3\u0007\u0001\u0000\u0000\u00a2\u00a1\u0001\u0000"+
		"\u0000\u0000\u00a2\u00a3\u0001\u0000\u0000\u0000\u00a3\u00a4\u0001\u0000"+
		"\u0000\u0000\u00a4\u00a5\u0003\u001f\u000f\u0000\u00a5\u001e\u0001\u0000"+
		"\u0000\u0000\u00a6\u00a8\u0007\u0002\u0000\u0000\u00a7\u00a6\u0001\u0000"+
		"\u0000\u0000\u00a8\u00a9\u0001\u0000\u0000\u0000\u00a9\u00a7\u0001\u0000"+
		"\u0000\u0000\u00a9\u00aa\u0001\u0000\u0000\u0000\u00aa \u0001\u0000\u0000"+
		"\u0000\u00ab\u00ac\u0007\u0003\u0000\u0000\u00ac\u00ad\u0003\u001d\u000e"+
		"\u0000\u00ad\"\u0001\u0000\u0000\u0000\u00ae\u00b1\u0003\u001f\u000f\u0000"+
		"\u00af\u00b0\u0007\u0004\u0000\u0000\u00b0\u00b2\u0003\u001f\u000f\u0000"+
		"\u00b1\u00af\u0001\u0000\u0000\u0000\u00b1\u00b2\u0001\u0000\u0000\u0000"+
		"\u00b2\u00ba\u0001\u0000\u0000\u0000\u00b3\u00b4\u0003\u001f\u000f\u0000"+
		"\u00b4\u00b5\u0007\u0004\u0000\u0000\u00b5\u00b6\u0003\u001f\u000f\u0000"+
		"\u00b6\u00b7\u0003!\u0010\u0000\u00b7\u00b8\u0003\u001f\u000f\u0000\u00b8"+
		"\u00ba\u0001\u0000\u0000\u0000\u00b9\u00ae\u0001\u0000\u0000\u0000\u00b9"+
		"\u00b3\u0001\u0000\u0000\u0000\u00ba$\u0001\u0000\u0000\u0000\u00bb\u00bd"+
		"\u0003\u001f\u000f\u0000\u00bc\u00be\u0003!\u0010\u0000\u00bd\u00bc\u0001"+
		"\u0000\u0000\u0000\u00bd\u00be\u0001\u0000\u0000\u0000\u00be\u00c1\u0001"+
		"\u0000\u0000\u0000\u00bf\u00c1\u0003#\u0011\u0000\u00c0\u00bb\u0001\u0000"+
		"\u0000\u0000\u00c0\u00bf\u0001\u0000\u0000\u0000\u00c1&\u0001\u0000\u0000"+
		"\u0000\u00c2\u00c4\u0007\u0005\u0000\u0000\u00c3\u00c2\u0001\u0000\u0000"+
		"\u0000\u00c4\u00c5\u0001\u0000\u0000\u0000\u00c5\u00c3\u0001\u0000\u0000"+
		"\u0000\u00c5\u00c6\u0001\u0000\u0000\u0000\u00c6(\u0001\u0000\u0000\u0000"+
		"\u00c7\u00c8\u0005_\u0000\u0000\u00c8\u00c9\u0005_\u0000\u0000\u00c9\u00cb"+
		"\u0001\u0000\u0000\u0000\u00ca\u00cc\u0007\u0006\u0000\u0000\u00cb\u00ca"+
		"\u0001\u0000\u0000\u0000\u00cc\u00cd\u0001\u0000\u0000\u0000\u00cd\u00cb"+
		"\u0001\u0000\u0000\u0000\u00cd\u00ce\u0001\u0000\u0000\u0000\u00ce\u00d4"+
		"\u0001\u0000\u0000\u0000\u00cf\u00d1\u0007\u0002\u0000\u0000\u00d0\u00cf"+
		"\u0001\u0000\u0000\u0000\u00d1\u00d2\u0001\u0000\u0000\u0000\u00d2\u00d0"+
		"\u0001\u0000\u0000\u0000\u00d2\u00d3\u0001\u0000\u0000\u0000\u00d3\u00d5"+
		"\u0001\u0000\u0000\u0000\u00d4\u00d0\u0001\u0000\u0000\u0000\u00d4\u00d5"+
		"\u0001\u0000\u0000\u0000\u00d5\u00d6\u0001\u0000\u0000\u0000\u00d6\u00d7"+
		"\u0005_\u0000\u0000\u00d7\u00d8\u0005_\u0000\u0000\u00d8*\u0001\u0000"+
		"\u0000\u0000\u00d9\u00da\u00035\u001a\u0000\u00da,\u0001\u0000\u0000\u0000"+
		"\u00db\u00dc\u0005[\u0000\u0000\u00dc\u00dd\u0003\u0011\b\u0000\u00dd"+
		"\u00de\u0005,\u0000\u0000\u00de\u00df\u0003\u0011\b\u0000\u00df\u00e0"+
		"\u0001\u0000\u0000\u0000\u00e0\u00e1\u0005]\u0000\u0000\u00e1.\u0001\u0000"+
		"\u0000\u0000\u00e2\u00e6\u0003\'\u0013\u0000\u00e3\u00e6\u0003%\u0012"+
		"\u0000\u00e4\u00e6\u0003)\u0014\u0000\u00e5\u00e2\u0001\u0000\u0000\u0000"+
		"\u00e5\u00e3\u0001\u0000\u0000\u0000\u00e5\u00e4\u0001\u0000\u0000\u0000"+
		"\u00e60\u0001\u0000\u0000\u0000\u00e7\u00e8\u0005{\u0000\u0000\u00e8\u00e9"+
		"\u0003/\u0017\u0000\u00e9\u00ea\u0005:\u0000\u0000\u00ea\u00eb\u0003\u0011"+
		"\b\u0000\u00eb\u00ec\u0005}\u0000\u0000\u00ec2\u0001\u0000\u0000\u0000"+
		"\u00ed\u00f0\u0003)\u0014\u0000\u00ee\u00f0\u0003)\u0014\u0000\u00ef\u00ed"+
		"\u0001\u0000\u0000\u0000\u00ef\u00ee\u0001\u0000\u0000\u0000\u00f04\u0001"+
		"\u0000\u0000\u0000\u00f1\u00f2\u0005P\u0000\u0000\u00f2\u00fa\u0005i\u0000"+
		"\u0000\u00f3\u00f4\u0005P\u0000\u0000\u00f4\u00fa\u0005I\u0000\u0000\u00f5"+
		"\u00f6\u0005p\u0000\u0000\u00f6\u00f7\u0005i\u0000\u0000\u00f7\u00f8\u0001"+
		"\u0000\u0000\u0000\u00f8\u00fa\u0003\r\u0006\u0000\u00f9\u00f1\u0001\u0000"+
		"\u0000\u0000\u00f9\u00f3\u0001\u0000\u0000\u0000\u00f9\u00f5\u0001\u0000"+
		"\u0000\u0000\u00fa6\u0001\u0000\u0000\u0000\u0013\u0000FS]r\u009f\u00a2"+
		"\u00a9\u00b1\u00b9\u00bd\u00c0\u00c5\u00cd\u00d2\u00d4\u00e5\u00ef\u00f9"+
		"\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
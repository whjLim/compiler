//typedef enum{
//	false,true
//}Bool;
#define norw 13            /*关键字个数*/
#define txmax 100          /*名字表容量*/
#define nmax 14            /*number的最大位数*/
#define al 10			   /*符号的最大长度*/
#define amax 2047		   /*地址上界*/
#define levmax 3           /*最大允许过程嵌套声明层数[0, levmax]*/
#define cxmax 200			/*最多的虚拟机代码数*/
/*符号*/
enum symbol{
	nul,		ident,		number,		plus,		minus,
	times,		slash,		oddsym,		eql,		neq,
	lss,		leq,		gtr,		geq,		lparen,
	rparen,		comma,		semicolon,	period,		becomes,
	beginsym,	endsym,		ifsym,		thensym,	whilesym,
	writesym,	readsym,	dosym,		callsym,	constsym,
	varsym,		procsym,
};

#define symnum 32
/* 名字表中的类型 */
enum object{
	constant,
	variable,
	procedur,
};

/* 虚拟机代码结构 */
enum fct{
	lit,		opr,		lod,
	sto,		cal,		inte,
	jmp,		jpc,
};

#define fctnum 8

/* 虚拟机代码结构 */
struct instruction
{
	enum fct f;					/* 虚拟机代码指令 */
	int l;						/* 引用层与声明层的层次差 */
	int a;						/* 根据f的不同而不同 */
};

FILE* fas;

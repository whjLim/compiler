//typedef enum{
//	false,true
//}Bool;
#define norw 13            /*�ؼ��ָ���*/
#define txmax 100          /*���ֱ�����*/
#define nmax 14            /*number�����λ��*/
#define al 10			   /*���ŵ���󳤶�*/
#define amax 2047		   /*��ַ�Ͻ�*/
#define levmax 3           /*����������Ƕ����������[0, levmax]*/
#define cxmax 200			/*���������������*/
/*����*/
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
/* ���ֱ��е����� */
enum object{
	constant,
	variable,
	procedur,
};

/* ���������ṹ */
enum fct{
	lit,		opr,		lod,
	sto,		cal,		inte,
	jmp,		jpc,
};

#define fctnum 8

/* ���������ṹ */
struct instruction
{
	enum fct f;					/* ���������ָ�� */
	int l;						/* ���ò���������Ĳ�β� */
	int a;						/* ����f�Ĳ�ͬ����ͬ */
};

FILE* fas;

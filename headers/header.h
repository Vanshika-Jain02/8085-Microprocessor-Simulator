#ifndef HEADER_H
#define HEADER_H

#include "predef.h"

struct info
{
	map<string, string> memory;
	map<char, string> registers;
	vector<bool> breaks;
	vector<string> cmds;
	string pc;
};

typedef int (*instruc)(info *);

int initialize(info*);
int createFunctionMap(map<string, instruc>&);
bool readCmds(info*, istream&, bool);
int execute(info*, map<string, instruc>, int);
string addition(string, string, bool&, bool&);
string complement(string);
string subtraction(string, string, bool&, bool&, bool);
string setFlags(string, bool, bool);
string to_bin(string);
vector<string> getParts(string);
int instruc_size(string);
bool instruction_check(string);
bool valid_register(char, bool);
bool valid_address(string);
bool valid_data(string);
bool setData(info*);
string convert_upper(string);
int debug(info*, map<string, instruc>);
int executeSingle(info*, map<string, instruc>, int);
int display(info);
string logicand(string, string);
string logicor(string, string);
string logicxor(string, string);

int ADD(info*);
int ADI(info*);
int CMA(info*);
int CMP(info*);
int CPI(info*);
int DAD(info*);
int DCR(info*);
int DCX(info*);
int INR(info*);
int INX(info*);
int SUB(info*);
int SUI(info*);
int ANA(info*);
int ANI(info*);
int ORA(info*);
int ORI(info*);
int XRA(info*);
int XRI(info*);

int LDA(info*);
int LDAX(info*);
int LHLD(info*);
int LXI(info*);
int MOV(info*);
int MVI(info*);
int SHLD(info*);
int STA(info*);
int STAX(info*);
int XCHG(info*);

int JC(info*);
int JMP(info*);
int JNC(info*);
int JNZ(info*);
int JZ(info*);

int HLT(info*);

#endif

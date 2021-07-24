package net.salmonsoft.ti;

import java.io.IOException;

public class Ti82BasicTokens {

	/*
	P>Rx(                          [029]               1D
	P>Ry(                          [030]               1E
	median(                        [031]               1F
	randM(                         [032]               20
	mean(                          [033]               21
	solve(                         [034]               22
	seq(                           [035]               23
	CubicReg                       [046]               2E
	QuartReg                       [047]               2F
	 xor                           [061]               3D
	prgm                           [095]               5F
	Pic1                           [096][0]            60 00
	Pic2                           [096][1]            60 01
	Pic3                           [096][2]            60 02
	Pic4                           [096][3]            60 03
	Pic5                           [096][4]            60 04
	Pic6                           [096][5]            60 05
	GDB1                           [097][0]            61 00
	GDB2                           [097][1]            61 01
	GDB3                           [097][2]            61 02
	GDB4                           [097][3]            61 03
	GDB5                           [097][4]            61 04
	GDB6                           [097][5]            61 05
	n                              [098][02]           62 02
	(x with overscore)             [098][03]           62 03
	(summation)x                   [098][04]           62 04
	(summation)x^2                 [098][05]           62 05
	Sx                             [098][06]           62 06
	(Sigma x)                      [098][07]           62 07
	minX                           [098][08]           62 08
	maxX                           [098][09]           62 09
	minY                           [098][10]           62 0A
	maxY                           [098][11]           62 0B
	(y with overscore)             [098][12]           62 0C
	(summation)y                   [098][13]           62 0D
	(summation)y^2                 [098][14]           62 0E
	Sy                             [098][15]           62 0F
	(Sigma y)                      [098][16]           62 10
	(summation)xy                  [098][17]           62 11
	r                              [098][18]           62 12
	Med                            [098][19]           62 13
	Q1                             [098][20]           62 14
	Q3                             [098][21]           62 15
	a                              [098][22]           62 16
	b                              [098][23]           62 17
	c                              [098][24]           62 18
	d                              [098][25]           62 19
	e                              [098][26]           62 1A
	x1                             [098][27]           62 1B
	x2                             [098][28]           62 1C
	x3                             [098][29]           62 1D
	y1                             [098][30]           62 1E
	y2                             [098][31]           62 1F
	y3                             [098][32]           62 20
	n                              [098][33]           62 21
	ZXscl                          [099][00]           63 00
	ZYscl                          [099][01]           63 01
	ZUnStart                       [099][08]           63 08
	ZVnStart                       [099][09]           63 09
	0min                           [099][16]           63 10
	0max                           [099][17]           63 11
	ZXmin                          [099][18]           63 12
	ZXmax                          [099][19]           63 13
	ZYmin                          [099][20]           63 14
	ZYmax                          [099][21]           63 15
	Z0min                          [099][22]           63 16
	Z0max                          [099][23]           63 17
	ZTmin                          [099][24]           63 18
	ZTmax                          [099][25]           63 19
	nMin                           [099][27]           63 1B
	ZnMin                          [099][28]           63 1C
	nMax                           [099][29]           63 1D
	ZnMax                          [099][30]           63 1E
	nStart                         [099][31]           63 1F
	ZnStart                        [099][32]           63 20
	0step                          [099][35]           63 23
	ZTstep                         [099][36]           63 24
	Z0step                         [099][37]           63 25
	Sci                            [103]               67
	Eng                            [104]               68
	!=                             [111]               6F
	Ans                            [114]               72
	Fix 0                          [115][48]           73 30
	Fix 1                          [115][49]           73 31
	Fix 2                          [115][50]           73 32
	Fix 3                          [115][51]           73 33
	Fix 4                          [115][52]           73 34
	Fix 5                          [115][53]           73 35
	Fix 6                          [115][54]           73 36
	Fix 7                          [115][55]           73 37
	Fix 8                          [115][56]           73 38
	Fix 9                          [115][57]           73 39
	Split                          [116]               74
	IndpntAsk                      [123]               7B
	DependAsk                      [125]               7D
	Simul                          [126][1]            7E 01
	Dot                            [126][7]            7E 07
	(Plot plus)                    [128]               80
	ZTrig                          [135]               87
	ZBox                           [136]               88
	Zoom In                        [137]               89
	Zoom Out                       [138]               8A
	ZSquare                        [139]               8B
	ZInteger                       [140]               8C
	ZPrevious                      [141]               8D
	ZoomStat                       [143]               8F
	ZoomRcl                        [144]               90
	PrintScreen                    [145]               91
	 nPr                           [148]               94
	 nCr                           [149]               95
	StorePic                       [152]               98
	RecallPic                      [153]               99
	StoreGDB                       [154]               9A
	RecallGDB                      [155]               9B
	Line(                          [156]               9C
	Pxl-On(                        [161]               A1
	Pxl-Off(                       [162]               A2
	Pxl-Change(                    [163]               A3
	Circle(                        [165]               A5
	Tangent(                       [167]               A7
	DrawInv                        [168]               A8
	DrawF                          [169]               A9
	' (Minute)                     [174]               AE
	det                            [179]               B3
	identity                       [180]               B4
	sum                            [182]               B6
	prod                           [183]               B7
	not                            [184]               B8
	^(1/3) (Cube Root)             [189]               BD
	ln                             [190]               BE
	e^                             [191]               BF
	log                            [192]               C0
	10^                            [193]               C1
	sin-1                          [195]               C3
	cos                            [196]               C4
	cos-1                          [197]               C5
	tan                            [198]               C6
	tan-1                          [199]               C7
	sinh                           [200]               C8
	sinh-1                         [201]               C9
	cosh                           [202]               CA
	cosh-1                         [203]               CB
	tanh                           [204]               CC
	tanh-1                         [205]               CD
	Else                           [208]               D0
	While                          [209]               D1
	Return                         [213]               D5
	DS<(                           [219]               DB
	Prompt                         [221]               DD
	Fill(                          [226]               E2
	SortA(                         [227]               E3
	SortD(                         [228]               E4
	DispTable                      [229]               E5
	Send(                          [231]               E7
	Get(                           [232]               E8
	PlotsOn                        [233]               E9
	^                              [240]               F0
	^(1/x) (xth Root)              [241]               F1
	1-Var Stats                    [242]               F2
	2-Var Stats                    [243]               F3
	LinReg(a+bx)                   [244]               F4
	ExpReg                         [245]               F5
	LnReg                          [246]               F6
	PwrReg                         [247]               F7
	Med-Med                        [248]               F8
	QuadReg                        [249]               F9
	ClrTable                       [251]               FB
	Histogram                      [252]               FC
	xyLine                         [253]               FD
	LinReg(ax+b)                   [255]               FF
*/
	
	private static final Ti82BasicTokenMap tm = new Ti82BasicTokenMap();
	static {
		tm.add(">DMS", 0x01);
		tm.add(">Dec", 0x02);
		tm.add(">Frac", 0x03);
		tm.add("\\->\\", 0x04);
		tm.add("Boxplot", 0x05);
		tm.add("[", 0x06);
		tm.add("]", 0x07);
		tm.add("{",  0x08);
		tm.add("}",  0x09);
		tm.add("r", 0x0A);
		tm.add("(Degree)", 0x0B);
		tm.add("T", 0x0E);
		tm.add("(",  0x10);
		tm.add(")",  0x11);
		tm.add("round(", 0x12);
		tm.add("pxl-Test(", 0x13);
		tm.add("augment(", 0x14);
		tm.add("rowSwap(", 0x15);
		tm.add("row+(", 0x16);
		tm.add("*row(", 0x17);
		tm.add("*row+(", 0x18);
		tm.add("max(", 0x19);
		tm.add("min(", 0x1A);
		tm.add("R>Pr(", 0x1B);
		tm.add("R>P0(", 0x1C);
		tm.add(" ", 0x29);
		tm.add("\"",  0x2A);
		tm.add(",",  0x2B);
		tm.add("!", 0x2D);
		tm.add("0", 0x30);
		tm.add("1", 0x31);
		tm.add("2", 0x32);
		tm.add("3", 0x33);
		tm.add("4", 0x34);
		tm.add("5", 0x35);
		tm.add("6", 0x36);
		tm.add("7", 0x37);
		tm.add("8", 0x38);
		tm.add("9", 0x39);
		tm.add(".", 0x3A);
		tm.add("\\E\\", 0x3B);
		tm.add(" or ", 0x3C);
		tm.add(":", 0x3E);
		tm.add(" and ", 0x40);
		tm.add("A", 0x41);
		tm.add("B", 0x42);
		tm.add("C", 0x43);
		tm.add("D", 0x44);
		tm.add("E", 0x45);
		tm.add("F", 0x46);
		tm.add("G", 0x47);
		tm.add("H", 0x48);
		tm.add("I", 0x49);
		tm.add("J", 0x4A);
		tm.add("K", 0x4B);
		tm.add("L", 0x4C);
		tm.add("M", 0x4D);
		tm.add("N", 0x4E);
		tm.add("O", 0x4F);
		tm.add("P",  0x50);
		tm.add("Q", 0x51);
		tm.add("R", 0x52);
		tm.add("S", 0x53);
		tm.add("T", 0x54);
		tm.add("U", 0x55);
		tm.add("V", 0x56);
		tm.add("W", 0x57);
		tm.add("X", 0x58);
		tm.add("Y", 0x59);
		tm.add("Z", 0x60);
		tm.add("Degree", 0x65);
		tm.add("Normal", 0x66);
		tm.add("Float", 0x69);
		tm.add("=", 0x6A);
		tm.add("<", 0x6B);
		tm.add(">", 0x6C);
		tm.add("+", 0x70);
		tm.add("-", 0x71);
		tm.add("FullScreen", 0x75);
		tm.add("Func", 0x76);
		tm.add("Param", 0x77);
		tm.add("Polar", 0x78);
		tm.add("IndpntAuto", 0x7A);
		tm.add("DependAuto", 0x7C);
		tm.add("CoordOn", 0x7E, 0x04);
		tm.add("Connected", 0x7E, 0x06);
		tm.add("AxesOn", 0x7E, 0x08);
		tm.add("AxesOff", 0x7E, 0x09);
		tm.add("GridOff", 0x7E, 0x0B);
		tm.add("LabelOff", 0x7E, 0x0D);
		tm.add("*", 0x82);
		tm.add("/", 0x83);
		tm.add("ClrDraw", 0x85);
		tm.add("FnOn", 0x96);
		tm.add("FnOff ", 0x97);
		tm.add("Pt-Change(", 0xA0);
		tm.add("Horizontal ", 0xA6);
		tm.add("?", 0xAF);
		tm.add("sin ", 0xC2);
		tm.add("If ", 0xCE);
		tm.add("For(", 0xD3);
		tm.add("End", 0xD4);
		tm.add("Lbl ", 0xD6);
		tm.add("Goto ", 0xD7);
		tm.add("Pause ", 0xD8);
		tm.add("IS>(", 0xDA);
		tm.add("Input ", 0xDC);
		tm.add("Disp ", 0xDE);
		tm.add("DispGraph", 0xDF);
		tm.add("Output(", 0xE0);
		tm.add("ClrHome", 0xE1);
		tm.add("Menu(", 0xE6);
		tm.add("PlotsOff ", 0xEA);
		tm.add("Plot1(", 0xEC);
		tm.add("Plot2(", 0xED);
		tm.add("Plot3(", 0xEE);
		tm.add("ClrList ", 0xFA);
	}

	private Ti82BasicProgram theProg;

	Ti82BasicTokens(Ti82BasicProgram program) {
		theProg = program;
	}
	
	void parseLine(String line) throws IOException {
		
		// if the line starts with ":" it is part of the program
		if (line.startsWith(":")) {
			theProg.addLineStart();
			line = line.substring(1);
		} else if (line.startsWith("\\COMMENT=")) {
			theProg.setComment(line.substring(9));
			return;
		} else if (line.startsWith("\\NAME=")) {
			theProg.setName(line.substring(6));
			return;
		} else if (line.equals("\\START82\\")) {
			theProg.start();
			return;
		} else if (line.equals("\\STOP82\\")) {
			theProg.stop();
			return;
		}
		
		// start with a leading 1-character token, then as long as we haven't seen everything yet, jump to the next token
		// the logic inside this loop will find the largest token it can consume, so we reset the token length to 1 each time we start a new token
		for (int tokenStart = 0, tokenLength = 1; 
				tokenStart < line.length() && tokenStart + tokenLength <= line.length(); 
				tokenStart += tokenLength, tokenLength = 1) {

			// given the token start position and current token length, progressively swallow characters until we have an unambiguous token
			var token = "";
			var lastFullToken = "";
			for (token = ""; 
					tokenStart + tokenLength <= line.length() && 
							(token = line.substring(tokenStart, tokenStart + tokenLength)) != null && 
							tm.possibleMatches(token) >= 1; 
					tokenLength++) {

				// if we find an exact match, save it in case our greediness comes up empty-handed
				if (tm.matches(token)) {
					lastFullToken = token;
				}
			}

			// use the last full token we saw
			if (!lastFullToken.isEmpty()) {
				tokenLength = lastFullToken.length();
				token = lastFullToken;
				theProg.addProgram(tm.get(token));
			}
			// otherwise we have bad input
			else {
				throw new IOException("Program is corrupted at token '" + token + "'");
			}
		}
	}


	/*
	 * 

void parser_parse_P_t_dash_O()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_P_t_dash_O_f();
   }
   else if (c == 'n')
   {
      parser_parse_P_t_dash_O_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_O_f()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_P_t_dash_O_f_f();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_O_f_f()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x9f);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_O_n()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x9e);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_R_a();
   }
   else if (c == 'e')
   {
      parser_parse_R_e();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x52);
   }
}

void parser_parse_R_a()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_R_a_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_a_d()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_R_a_d_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_a_d_i()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_R_a_d_i_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_a_d_i_a()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_1(0x64);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_R_e_c();
   }
   else if (c == 'p')
   {
      parser_parse_R_e_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_c()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_R_e_c_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_c_t()
{
   int c = input_get_char();

   if (c == 'G')
   {
      parser_parse_R_e_c_t_G();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_c_t_G()
{
   int c = input_get_char();

   if (c == 'C')
   {
      program_add_data_2(0x7e, 0x03);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_p()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_R_e_p_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_p_e()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_R_e_p_e_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_p_e_a()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_R_e_p_e_a_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_R_e_p_e_a_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xd2);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_S_c();
   }
   else if (c == 'e')
   {
      parser_parse_S_e();
   }
   else if (c == 'h')
   {
      parser_parse_S_h();
   }
   else if (c == 't')
   {
      parser_parse_S_t();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x53);
   }
}

void parser_parse_S_c()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_S_c_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_c_a()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_S_c_a_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_c_a_t()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_S_c_a_t_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_c_a_t_t()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_S_c_a_t_t_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_c_a_t_t_e()
{
   int c = input_get_char();

   if (c == 'r')
   {
      program_add_data_1(0xfe);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e()
{
   int c = input_get_char();

   if (c == 'q')
   {
      parser_parse_S_e_q();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e_q()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_S_e_q_u();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x79);
   }
}

void parser_parse_S_e_q_u()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_S_e_q_u_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e_q_u_e()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_S_e_q_u_e_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e_q_u_e_n()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_S_e_q_u_e_n_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e_q_u_e_n_t()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_S_e_q_u_e_n_t_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e_q_u_e_n_t_i()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_S_e_q_u_e_n_t_i_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_e_q_u_e_n_t_i_a()
{
   int c = input_get_char();

   if (c == 'l')
   {
      program_add_data_2(0x7e, 0x00);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_h()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_S_h_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_h_a()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_S_h_a_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_h_a_d()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_S_h_a_d_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_h_a_d_e()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xa4);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_t()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_S_t_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_S_t_o()
{
   int c = input_get_char();

   if (c == 'p')
   {
      program_add_data_1(0xd9);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T()
{
   int c = input_get_char();

   if (c == 'b')
   {
      parser_parse_T_b();
   }
   else if (c == 'e')
   {
      parser_parse_T_e();
   }
   else if (c == 'h')
   {
      parser_parse_T_h();
   }
   else if (c == 'i')
   {
      parser_parse_T_i();
   }
   else if (c == 'm')
   {
      parser_parse_T_m();
   }
   else if (c == 'r')
   {
      parser_parse_T_r();
   }
   else if (c == 's')
   {
      parser_parse_T_s();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x54);
   }
}

void parser_parse_T_b()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_T_b_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l()
{
   int c = input_get_char();

   if (c == 'I')
   {
      parser_parse_T_b_l_I();
   }
   else if (c == 'M')
   {
      parser_parse_T_b_l_M();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l_I()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_T_b_l_I_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l_I_n()
{
   int c = input_get_char();

   if (c == 'p')
   {
      parser_parse_T_b_l_I_n_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l_I_n_p()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_T_b_l_I_n_p_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l_I_n_p_u()
{
   int c = input_get_char();

   if (c == 't')
   {
      program_add_data_2(0x63, 0x2a);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l_M()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_T_b_l_M_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_b_l_M_i()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_2(0x63, 0x1a);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_e()
{
   int c = input_get_char();

   if (c == 'x')
   {
      parser_parse_T_e_x();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_e_x()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_T_e_x_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_e_x_t()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x93);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_h()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_T_h_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_h_e()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_1(0xcf);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_i()
{
   int c = input_get_char();

   if (c == 'm')
   {
      parser_parse_T_i_m();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_i_m()
{
   int c = input_get_char();

   if (c == 'e')
   {
      program_add_data_2(0x7e, 0x0f);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_m()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_T_m_a();
   }
   else if (c == 'i')
   {
      parser_parse_T_m_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_m_a()
{
   int c = input_get_char();

   if (c == 'x')
   {
      program_add_data_2(0x63, 0x0f);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_m_i()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_2(0x63, 0x0e);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_r()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_T_r_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_r_a()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_T_r_a_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_r_a_c()
{
   int c = input_get_char();

   if (c == 'e')
   {
      program_add_data_1(0x84);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_s()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_T_s_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_s_t()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_T_s_t_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_T_s_t_e()
{
   int c = input_get_char();

   if (c == 'p')
   {
      program_add_data_2(0x63, 0x22);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_V_e();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x56);
   }
}

void parser_parse_V_e()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_V_e_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V_e_r()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_V_e_r_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V_e_r_t()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_V_e_r_t_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V_e_r_t_i()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_V_e_r_t_i_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V_e_r_t_i_c()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_V_e_r_t_i_c_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V_e_r_t_i_c_a()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_V_e_r_t_i_c_a_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_V_e_r_t_i_c_a_l()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0x9d);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X()
{
   int c = input_get_char();

   if (c == 'F')
   {
      parser_parse_X_F();
   }
   else if (c == 'm')
   {
      parser_parse_X_m();
   }
   else if (c == 's')
   {
      parser_parse_X_s();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x58);
   }
}

void parser_parse_X_F()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_X_F_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_F_a()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_X_F_a_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_F_a_c()
{
   int c = input_get_char();

   if (c == 't')
   {
      program_add_data_2(0x63, 0x28);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_m()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_X_m_a();
   }
   else if (c == 'i')
   {
      parser_parse_X_m_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_m_a()
{
   int c = input_get_char();

   if (c == 'x')
   {
      program_add_data_2(0x63, 0x0b);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_m_i()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_2(0x63, 0x0a);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_s()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_X_s_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_X_s_c()
{
   int c = input_get_char();

   if (c == 'l')
   {
      program_add_data_2(0x63, 0x02);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y()
{
   int c = input_get_char();

   if (c == 'F')
   {
      parser_parse_Y_F();
   }
   else if (c == 'm')
   {
      parser_parse_Y_m();
   }
   else if (c == 's')
   {
      parser_parse_Y_s();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x59);
   }
}

void parser_parse_Y_F()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_Y_F_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_F_a()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_Y_F_a_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_F_a_c()
{
   int c = input_get_char();

   if (c == 't')
   {
      program_add_data_2(0x63, 0x29);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_m()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_Y_m_a();
   }
   else if (c == 'i')
   {
      parser_parse_Y_m_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_m_a()
{
   int c = input_get_char();

   if (c == 'x')
   {
      program_add_data_2(0x63, 0x0d);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_m_i()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_2(0x63, 0x0c);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_s()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_Y_s_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Y_s_c()
{
   int c = input_get_char();

   if (c == 'l')
   {
      program_add_data_2(0x63, 0x03);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z()
{
   int c = input_get_char();

   if (c == 'D')
   {
      parser_parse_Z_D();
   }
   else if (c == 'S')
   {
      parser_parse_Z_S();
   }
   else if (c == 'o')
   {
      parser_parse_Z_o();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x5a);
   }
}

void parser_parse_Z_D()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_Z_D_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_D_e()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_Z_D_e_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_D_e_c()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_Z_D_e_c_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_D_e_c_i()
{
   int c = input_get_char();

   if (c == 'm')
   {
      parser_parse_Z_D_e_c_i_m();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_D_e_c_i_m()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_Z_D_e_c_i_m_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_D_e_c_i_m_a()
{
   int c = input_get_char();

   if (c == 'l')
   {
      program_add_data_1(0x8e);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_Z_S_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S_t()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_Z_S_t_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S_t_a()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_Z_S_t_a_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S_t_a_n()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_Z_S_t_a_n_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S_t_a_n_d()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_Z_S_t_a_n_d_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S_t_a_n_d_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_Z_S_t_a_n_d_a_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_S_t_a_n_d_a_r()
{
   int c = input_get_char();

   if (c == 'd')
   {
      program_add_data_1(0x86);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_o()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_Z_o_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_o_o()
{
   int c = input_get_char();

   if (c == 'm')
   {
      parser_parse_Z_o_o_m();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_o_o_m()
{
   int c = input_get_char();

   if (c == 'S')
   {
      parser_parse_Z_o_o_m_S();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_o_o_m_S()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_Z_o_o_m_S_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_Z_o_o_m_S_t()
{
   int c = input_get_char();

   if (c == 'o')
   {
      program_add_data_1(0x92);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_a()
{
   int c = input_get_char();

   if (c == 'b')
   {
      parser_parse_a_b();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_a_b()
{
   int c = input_get_char();

   if (c == 's')
   {
      parser_parse_a_b_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_a_b_s()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xb2);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_backslash_D_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_backslash_D_e_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_D_e_l_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_backslash_D_e_l_t_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a()
{
   int c = input_get_char();

   if (c == '-')
   {
      parser_parse_backslash_D_e_l_t_a_dash();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a_dash()
{
   int c = input_get_char();

   if (c == 'T')
   {
      parser_parse_backslash_D_e_l_t_a_dash_T();
   }
   else if (c == 'x')
   {
      parser_parse_backslash_D_e_l_t_a_dash_x();
   }
   else if (c == 'y')
   {
      parser_parse_backslash_D_e_l_t_a_dash_y();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a_dash_T()
{
   int c = input_get_char();

   if (c == 'b')
   {
      parser_parse_backslash_D_e_l_t_a_dash_T_b();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a_dash_T_b()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_backslash_D_e_l_t_a_dash_T_b_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a_dash_T_b_l()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x21);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a_dash_x()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x26);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_D_e_l_t_a_dash_y()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x27);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_backslash_L_1();
   }
   else if (c == '2')
   {
      parser_parse_backslash_L_2();
   }
   else if (c == '3')
   {
      parser_parse_backslash_L_3();
   }
   else if (c == '4')
   {
      parser_parse_backslash_L_4();
   }
   else if (c == '5')
   {
      parser_parse_backslash_L_5();
   }
   else if (c == '6')
   {
      parser_parse_backslash_L_6();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L_1()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5d, 0x00);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L_2()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5d, 0x01);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L_3()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5d, 0x02);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L_4()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5d, 0x03);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L_5()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5d, 0x04);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_L_6()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5d, 0x05);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_backslash_U_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n()
{
   int c = input_get_char();

   if (c == '-')
   {
      parser_parse_backslash_U_n_dash();
   }
   else if (c == 'S')
   {
      parser_parse_backslash_U_n_S();
   }
   else if (c == '\\')
   {
      program_add_data_2(0x5e, 0x80);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_dash()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_backslash_U_n_dash_1();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_dash_1()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x06);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_S()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_U_n_S_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_S_t()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_backslash_U_n_S_t_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_S_t_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_backslash_U_n_S_t_a_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_S_t_a_r()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_U_n_S_t_a_r_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_U_n_S_t_a_r_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x04);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_backslash_V_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n()
{
   int c = input_get_char();

   if (c == '-')
   {
      parser_parse_backslash_V_n_dash();
   }
   else if (c == 'S')
   {
      parser_parse_backslash_V_n_S();
   }
   else if (c == '\\')
   {
      program_add_data_2(0x5e, 0x81);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_dash()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_backslash_V_n_dash_1();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_dash_1()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x07);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_S()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_V_n_S_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_S_t()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_backslash_V_n_S_t_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_S_t_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_backslash_V_n_S_t_a_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_S_t_a_r()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_V_n_S_t_a_r_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_V_n_S_t_a_r_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x63, 0x05);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_1_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x20);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_2_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x22);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_3()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_X_3_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_3_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x24);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_4()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_X_4_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_4_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x26);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_5()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_X_5_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_5_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x28);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_6()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_X_6_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_6_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x2a);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y()
{
   int c = input_get_char();

   if (c == '0')
   {
      parser_parse_backslash_Y_0();
   }
   else if (c == '1')
   {
      parser_parse_backslash_Y_1();
   }
   else if (c == '2')
   {
      parser_parse_backslash_Y_2();
   }
   else if (c == '3')
   {
      parser_parse_backslash_Y_3();
   }
   else if (c == '4')
   {
      parser_parse_backslash_Y_4();
   }
   else if (c == '5')
   {
      parser_parse_backslash_Y_5();
   }
   else if (c == '6')
   {
      parser_parse_backslash_Y_6();
   }
   else if (c == '7')
   {
      parser_parse_backslash_Y_7();
   }
   else if (c == '8')
   {
      parser_parse_backslash_Y_8();
   }
   else if (c == '9')
   {
      parser_parse_backslash_Y_9();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_0()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x19);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_1()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x10);
   }
   else if (c == 't')
   {
      parser_parse_backslash_Y_1_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_1_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x21);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_2()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x11);
   }
   else if (c == 't')
   {
      parser_parse_backslash_Y_2_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_2_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x23);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_3()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x12);
   }
   else if (c == 't')
   {
      parser_parse_backslash_Y_3_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_3_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x25);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_4()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x13);
   }
   else if (c == 't')
   {
      parser_parse_backslash_Y_4_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_4_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x27);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_5()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x14);
   }
   else if (c == 't')
   {
      parser_parse_backslash_Y_5_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_5_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x29);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_6()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x15);
   }
   else if (c == 't')
   {
      parser_parse_backslash_Y_6_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_6_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x2b);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_7()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x16);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_8()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x17);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_Y_9()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x18);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_at()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x5b);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_backslash_b_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o()
{
   int c = input_get_char();

   if (c == 'x')
   {
      parser_parse_backslash_b_o_x();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o_x()
{
   int c = input_get_char();

   if (c == ' ')
   {
      parser_parse_backslash_b_o_x_space();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o_x_space()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_backslash_b_o_x_space_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o_x_space_i()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_backslash_b_o_x_space_i_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o_x_space_i_c()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_backslash_b_o_x_space_i_c_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o_x_space_i_c_o()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_backslash_b_o_x_space_i_c_o_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_b_o_x_space_i_c_o_n()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x7f);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_carat()
{
   int c = input_get_char();

   if (c == '-')
   {
      parser_parse_backslash_carat_dash();
   }
   else if (c == '2')
   {
      parser_parse_backslash_carat_2();
   }
   else if (c == '3')
   {
      parser_parse_backslash_carat_3();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_carat_2()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x0d);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_carat_3()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x0f);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_carat_dash()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_backslash_carat_dash_1();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_carat_dash_1()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x0c);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_backslash_d_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_d_o_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      parser_parse_backslash_d_o_t_space();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o_t_space()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_backslash_d_o_t_space_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o_t_space_i()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_backslash_d_o_t_space_i_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o_t_space_i_c()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_backslash_d_o_t_space_i_c_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o_t_space_i_c_o()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_backslash_d_o_t_space_i_c_o_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_d_o_t_space_i_c_o_n()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x81);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_greaterthan()
{
   int c = input_get_char();

   if (c == '=')
   {
      parser_parse_backslash_greaterthan_equal();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_greaterthan_equal()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x6e);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_hash()
{
   int c = input_get_char();

   if (c == '\\')
   {
      parser_parse_backslash_hash_backslash();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_hash_backslash()
{
   int c = input_get_char();

   if (c == '\n')
   {
   }
   else if (c == '\r')
   {
      parser_parse_backslash_hash_backslash_carriagereturn();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_hash_backslash_carriagereturn()
{
   int c = input_get_char();

   if (c == '\n')
   {
   }
   else
   {
      input_unget_char(c);
   }
}

void parser_parse_backslash_leftpar()
{
   int c = input_get_char();

   if (c == '-')
   {
      parser_parse_backslash_leftpar_dash();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_leftpar_dash()
{
   int c = input_get_char();

   if (c == ')')
   {
      parser_parse_backslash_leftpar_dash_rightpar();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_leftpar_dash_rightpar()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0xb0);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_lessthan()
{
   int c = input_get_char();

   if (c == '=')
   {
      parser_parse_backslash_lessthan_equal();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_lessthan_equal()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x6d);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_p()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_backslash_p_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_p_i()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0xac);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_backslash_r_1();
   }
   else if (c == '2')
   {
      parser_parse_backslash_r_2();
   }
   else if (c == '3')
   {
      parser_parse_backslash_r_3();
   }
   else if (c == '4')
   {
      parser_parse_backslash_r_4();
   }
   else if (c == '5')
   {
      parser_parse_backslash_r_5();
   }
   else if (c == '6')
   {
      parser_parse_backslash_r_6();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r_1()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x40);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r_2()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x41);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r_3()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x42);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r_4()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x43);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r_5()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x44);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_r_6()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_2(0x5e, 0x45);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_s()
{
   int c = input_get_char();

   if (c == 'q')
   {
      parser_parse_backslash_s_q();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_s_q()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_backslash_s_q_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_s_q_r()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_s_q_r_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_s_q_r_t()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0xbc);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_d()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_d_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_d_i()
{
   int c = input_get_char();

   if (c == 'm')
   {
      parser_parse_d_i_m();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_d_i_m()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xb5);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f()
{
   int c = input_get_char();

   if (c == 'M')
   {
      parser_parse_f_M();
   }
   else if (c == 'P')
   {
      parser_parse_f_P();
   }
   else if (c == 'n')
   {
      parser_parse_f_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_M()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_f_M_a();
   }
   else if (c == 'i')
   {
      parser_parse_f_M_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_M_a()
{
   int c = input_get_char();

   if (c == 'x')
   {
      parser_parse_f_M_a_x();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_M_a_x()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x28);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_M_i()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_f_M_i_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_M_i_n()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x27);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_P()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_f_P_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_P_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_f_P_a_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_P_a_r()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_f_P_a_r_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_P_a_r_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xba);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_n()
{
   int c = input_get_char();

   if (c == 'I')
   {
      parser_parse_f_n_I();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_n_I()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_f_n_I_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_n_I_n()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_f_n_I_n_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_f_n_I_n_t()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x24);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_g()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_g_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_g_e()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_g_e_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_g_e_t()
{
   int c = input_get_char();

   if (c == 'K')
   {
      parser_parse_g_e_t_K();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_g_e_t_K()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_g_e_t_K_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_g_e_t_K_e()
{
   int c = input_get_char();

   if (c == 'y')
   {
      program_add_data_1(0xad);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i()
{
   int c = input_get_char();

   if (c == 'P')
   {
      parser_parse_i_P();
   }
   else if (c == 'n')
   {
      parser_parse_i_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i_P()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_i_P_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i_P_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_i_P_a_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i_P_a_r()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_i_P_a_r_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i_P_a_r_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xb9);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i_n()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_i_n_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_i_n_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xb1);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_leftbracket()
{
   int c = input_get_char();

   if (c == 'A')
   {
      parser_parse_leftbracket_A();
   }
   else if (c == 'B')
   {
      parser_parse_leftbracket_B();
   }
   else if (c == 'C')
   {
      parser_parse_leftbracket_C();
   }
   else if (c == 'D')
   {
      parser_parse_leftbracket_D();
   }
   else if (c == 'E')
   {
      parser_parse_leftbracket_E();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_leftbracket_A()
{
   int c = input_get_char();

   if (c == ']')
   {
      program_add_data_2(0x5c, 0x00);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_leftbracket_B()
{
   int c = input_get_char();

   if (c == ']')
   {
      program_add_data_2(0x5c, 0x01);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_leftbracket_C()
{
   int c = input_get_char();

   if (c == ']')
   {
      program_add_data_2(0x5c, 0x02);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_leftbracket_D()
{
   int c = input_get_char();

   if (c == ']')
   {
      program_add_data_2(0x5c, 0x03);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_leftbracket_E()
{
   int c = input_get_char();

   if (c == ']')
   {
      program_add_data_2(0x5c, 0x04);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_n()
{
   int c = input_get_char();

   if (c == 'D')
   {
      parser_parse_n_D();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_n_D()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_n_D_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_n_D_e()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_n_D_e_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_n_D_e_r()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_n_D_e_r_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_n_D_e_r_i()
{
   int c = input_get_char();

   if (c == 'v')
   {
      parser_parse_n_D_e_r_i_v();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_n_D_e_r_i_v()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0x25);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_r()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_r_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_r_a()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_r_a_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_r_a_n()
{
   int c = input_get_char();

   if (c == 'd')
   {
      program_add_data_1(0xab);
   }
   else
   {
      input_die_syntax();
   }
}

	 */
}

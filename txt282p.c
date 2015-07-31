#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct
{
   size_t line_number;
} input;

void input_die_already_started();
void input_die_line_length();
void input_die_mixed_comment();
void input_die_mixed_name();
void input_die_not_started();
void input_die_repeat_comment();
void input_die_repeat_name();
void input_die_syntax();
int input_get_char();
void input_init();
void input_unget_char(int c);

void parser_parse();
void parser_parse_A();
void parser_parse_A_x();
void parser_parse_A_x_e();
void parser_parse_A_x_e_s();
void parser_parse_A_x_e_s_O();
void parser_parse_A_x_e_s_O_f();
void parser_parse_C();
void parser_parse_C_l();
void parser_parse_C_l_r();
void parser_parse_C_l_r_D();
void parser_parse_C_l_r_D_r();
void parser_parse_C_l_r_D_r_a();
void parser_parse_C_l_r_H();
void parser_parse_C_l_r_H_o();
void parser_parse_C_l_r_H_o_m();
void parser_parse_C_l_r_L();
void parser_parse_C_l_r_L_i();
void parser_parse_C_l_r_L_i_s();
void parser_parse_C_l_r_L_i_s_t();
void parser_parse_C_o();
void parser_parse_C_o_n();
void parser_parse_C_o_n_n();
void parser_parse_C_o_n_n_e();
void parser_parse_C_o_n_n_e_c();
void parser_parse_C_o_n_n_e_c_t();
void parser_parse_C_o_n_n_e_c_t_e();
void parser_parse_C_o_o();
void parser_parse_C_o_o_r();
void parser_parse_C_o_o_r_d();
void parser_parse_C_o_o_r_d_O();
void parser_parse_D();
void parser_parse_D_e();
void parser_parse_D_e_g();
void parser_parse_D_e_g_r();
void parser_parse_D_e_g_r_e();
void parser_parse_D_e_p();
void parser_parse_D_e_p_e();
void parser_parse_D_e_p_e_n();
void parser_parse_D_e_p_e_n_d();
void parser_parse_D_e_p_e_n_d_A();
void parser_parse_D_e_p_e_n_d_A_u();
void parser_parse_D_e_p_e_n_d_A_u_t();
void parser_parse_D_i();
void parser_parse_D_i_s();
void parser_parse_D_i_s_p();
void parser_parse_D_i_s_p_G();
void parser_parse_D_i_s_p_G_r();
void parser_parse_D_i_s_p_G_r_a();
void parser_parse_D_i_s_p_G_r_a_p();
void parser_parse_E();
void parser_parse_E_n();
void parser_parse_F();
void parser_parse_F_l();
void parser_parse_F_l_o();
void parser_parse_F_l_o_a();
void parser_parse_F_n();
void parser_parse_F_n_O();
void parser_parse_F_n_O_f();
void parser_parse_F_n_O_f_f();
void parser_parse_F_n_O_n();
void parser_parse_F_o();
void parser_parse_F_o_r();
void parser_parse_F_u();
void parser_parse_F_u_l();
void parser_parse_F_u_l_l();
void parser_parse_F_u_l_l_S();
void parser_parse_F_u_l_l_S_c();
void parser_parse_F_u_l_l_S_c_r();
void parser_parse_F_u_l_l_S_c_r_e();
void parser_parse_F_u_l_l_S_c_r_e_e();
void parser_parse_F_u_n();
void parser_parse_G();
void parser_parse_G_o();
void parser_parse_G_o_t();
void parser_parse_G_o_t_o();
void parser_parse_G_r();
void parser_parse_G_r_i();
void parser_parse_G_r_i_d();
void parser_parse_G_r_i_d_O();
void parser_parse_G_r_i_d_O_f();
void parser_parse_H();
void parser_parse_H_o();
void parser_parse_H_o_r();
void parser_parse_H_o_r_i();
void parser_parse_H_o_r_i_z();
void parser_parse_H_o_r_i_z_o();
void parser_parse_H_o_r_i_z_o_n();
void parser_parse_H_o_r_i_z_o_n_t();
void parser_parse_H_o_r_i_z_o_n_t_a();
void parser_parse_H_o_r_i_z_o_n_t_a_l();
void parser_parse_I();
void parser_parse_I_S();
void parser_parse_I_S_greaterthan();
void parser_parse_I_f();
void parser_parse_I_n();
void parser_parse_I_n_d();
void parser_parse_I_n_d_p();
void parser_parse_I_n_d_p_n();
void parser_parse_I_n_d_p_n_t();
void parser_parse_I_n_d_p_n_t_A();
void parser_parse_I_n_d_p_n_t_A_u();
void parser_parse_I_n_d_p_n_t_A_u_t();
void parser_parse_I_n_p();
void parser_parse_I_n_p_u();
void parser_parse_I_n_p_u_t();
void parser_parse_L();
void parser_parse_L_a();
void parser_parse_L_a_b();
void parser_parse_L_a_b_e();
void parser_parse_L_a_b_e_l();
void parser_parse_L_a_b_e_l_O();
void parser_parse_L_a_b_e_l_O_f();
void parser_parse_L_b();
void parser_parse_L_b_l();
void parser_parse_M();
void parser_parse_M_e();
void parser_parse_M_e_n();
void parser_parse_M_e_n_u();
void parser_parse_N();
void parser_parse_N_o();
void parser_parse_N_o_r();
void parser_parse_N_o_r_m();
void parser_parse_N_o_r_m_a();
void parser_parse_O();
void parser_parse_O_u();
void parser_parse_O_u_t();
void parser_parse_O_u_t_p();
void parser_parse_O_u_t_p_u();
void parser_parse_O_u_t_p_u_t();
void parser_parse_P();
void parser_parse_P_a();
void parser_parse_P_a_r();
void parser_parse_P_a_r_a();
void parser_parse_P_a_u();
void parser_parse_P_a_u_s();
void parser_parse_P_a_u_s_e();
void parser_parse_P_l();
void parser_parse_P_l_o();
void parser_parse_P_l_o_t();
void parser_parse_P_l_o_t_1();
void parser_parse_P_l_o_t_2();
void parser_parse_P_l_o_t_3();
void parser_parse_P_l_o_t_s();
void parser_parse_P_l_o_t_s_O();
void parser_parse_P_l_o_t_s_O_f();
void parser_parse_P_l_o_t_s_O_f_f();
void parser_parse_P_o();
void parser_parse_P_o_l();
void parser_parse_P_o_l_a();
void parser_parse_P_t();
void parser_parse_P_t_dash();
void parser_parse_P_t_dash_C();
void parser_parse_P_t_dash_C_h();
void parser_parse_P_t_dash_C_h_a();
void parser_parse_P_t_dash_C_h_a_n();
void parser_parse_P_t_dash_C_h_a_n_g();
void parser_parse_P_t_dash_C_h_a_n_g_e();
void parser_parse_P_t_dash_O();
void parser_parse_P_t_dash_O_f();
void parser_parse_P_t_dash_O_f_f();
void parser_parse_P_t_dash_O_n();
void parser_parse_R();
void parser_parse_R_a();
void parser_parse_R_a_d();
void parser_parse_R_a_d_i();
void parser_parse_R_a_d_i_a();
void parser_parse_R_e();
void parser_parse_R_e_c();
void parser_parse_R_e_c_t();
void parser_parse_R_e_c_t_G();
void parser_parse_R_e_p();
void parser_parse_R_e_p_e();
void parser_parse_R_e_p_e_a();
void parser_parse_R_e_p_e_a_t();
void parser_parse_S();
void parser_parse_S_c();
void parser_parse_S_c_a();
void parser_parse_S_c_a_t();
void parser_parse_S_c_a_t_t();
void parser_parse_S_c_a_t_t_e();
void parser_parse_S_e();
void parser_parse_S_e_q();
void parser_parse_S_e_q_u();
void parser_parse_S_e_q_u_e();
void parser_parse_S_e_q_u_e_n();
void parser_parse_S_e_q_u_e_n_t();
void parser_parse_S_e_q_u_e_n_t_i();
void parser_parse_S_e_q_u_e_n_t_i_a();
void parser_parse_S_h();
void parser_parse_S_h_a();
void parser_parse_S_h_a_d();
void parser_parse_S_h_a_d_e();
void parser_parse_S_t();
void parser_parse_S_t_o();
void parser_parse_T();
void parser_parse_T_b();
void parser_parse_T_b_l();
void parser_parse_T_b_l_I();
void parser_parse_T_b_l_I_n();
void parser_parse_T_b_l_I_n_p();
void parser_parse_T_b_l_I_n_p_u();
void parser_parse_T_b_l_M();
void parser_parse_T_b_l_M_i();
void parser_parse_T_e();
void parser_parse_T_e_x();
void parser_parse_T_e_x_t();
void parser_parse_T_h();
void parser_parse_T_h_e();
void parser_parse_T_i();
void parser_parse_T_i_m();
void parser_parse_T_m();
void parser_parse_T_m_a();
void parser_parse_T_m_i();
void parser_parse_T_r();
void parser_parse_T_r_a();
void parser_parse_T_r_a_c();
void parser_parse_T_s();
void parser_parse_T_s_t();
void parser_parse_T_s_t_e();
void parser_parse_T_s_t_e_p();
void parser_parse_V();
void parser_parse_V_e();
void parser_parse_V_e_r();
void parser_parse_V_e_r_t();
void parser_parse_V_e_r_t_i();
void parser_parse_V_e_r_t_i_c();
void parser_parse_V_e_r_t_i_c_a();
void parser_parse_V_e_r_t_i_c_a_l();
void parser_parse_X();
void parser_parse_X_F();
void parser_parse_X_F_a();
void parser_parse_X_F_a_c();
void parser_parse_X_m();
void parser_parse_X_m_a();
void parser_parse_X_m_i();
void parser_parse_X_s();
void parser_parse_X_s_c();
void parser_parse_Y();
void parser_parse_Y_F();
void parser_parse_Y_F_a();
void parser_parse_Y_F_a_c();
void parser_parse_Y_m();
void parser_parse_Y_m_a();
void parser_parse_Y_m_i();
void parser_parse_Y_s();
void parser_parse_Y_s_c();
void parser_parse_Z();
void parser_parse_Z_D();
void parser_parse_Z_D_e();
void parser_parse_Z_D_e_c();
void parser_parse_Z_D_e_c_i();
void parser_parse_Z_D_e_c_i_m();
void parser_parse_Z_D_e_c_i_m_a();
void parser_parse_Z_S();
void parser_parse_Z_S_t();
void parser_parse_Z_S_t_a();
void parser_parse_Z_S_t_a_n();
void parser_parse_Z_S_t_a_n_d();
void parser_parse_Z_S_t_a_n_d_a();
void parser_parse_Z_S_t_a_n_d_a_r();
void parser_parse_Z_o();
void parser_parse_Z_o_o();
void parser_parse_Z_o_o_m();
void parser_parse_Z_o_o_m_S();
void parser_parse_Z_o_o_m_S_t();
void parser_parse_a();
void parser_parse_a_b();
void parser_parse_a_b_s();
void parser_parse_backslash();
void parser_parse_backslash_C();
void parser_parse_backslash_C_O();
void parser_parse_backslash_C_O_M();
void parser_parse_backslash_C_O_M_M();
void parser_parse_backslash_C_O_M_M_E();
void parser_parse_backslash_C_O_M_M_E_N();
void parser_parse_backslash_C_O_M_M_E_N_T();
void parser_parse_backslash_C_O_M_M_E_N_T_equal();
void parser_parse_backslash_C_O_M_M_E_N_T_equal_carriagereturn();
void parser_parse_backslash_D();
void parser_parse_backslash_D_e();
void parser_parse_backslash_D_e_l();
void parser_parse_backslash_D_e_l_t();
void parser_parse_backslash_D_e_l_t_a();
void parser_parse_backslash_D_e_l_t_a_dash();
void parser_parse_backslash_D_e_l_t_a_dash_T();
void parser_parse_backslash_D_e_l_t_a_dash_T_b();
void parser_parse_backslash_D_e_l_t_a_dash_T_b_l();
void parser_parse_backslash_D_e_l_t_a_dash_x();
void parser_parse_backslash_D_e_l_t_a_dash_y();
void parser_parse_backslash_E();
void parser_parse_backslash_L();
void parser_parse_backslash_L_1();
void parser_parse_backslash_L_2();
void parser_parse_backslash_L_3();
void parser_parse_backslash_L_4();
void parser_parse_backslash_L_5();
void parser_parse_backslash_L_6();
void parser_parse_backslash_N();
void parser_parse_backslash_N_A();
void parser_parse_backslash_N_A_M();
void parser_parse_backslash_N_A_M_E();
void parser_parse_backslash_N_A_M_E_equal();
void parser_parse_backslash_N_A_M_E_equal_carriagereturn();
void parser_parse_backslash_N_A_M_E_equal_carriagereturn_newline();
void parser_parse_backslash_N_A_M_E_equal_newline();
void parser_parse_backslash_S();
void parser_parse_backslash_S_T();
void parser_parse_backslash_S_T_A();
void parser_parse_backslash_S_T_A_R();
void parser_parse_backslash_S_T_A_R_T();
void parser_parse_backslash_S_T_A_R_T_8();
void parser_parse_backslash_S_T_A_R_T_8_2();
void parser_parse_backslash_S_T_A_R_T_8_2_backslash();
void parser_parse_backslash_S_T_A_R_T_8_2_backslash_carriagereturn();
void parser_parse_backslash_S_T_O();
void parser_parse_backslash_S_T_O_P();
void parser_parse_backslash_S_T_O_P_8();
void parser_parse_backslash_S_T_O_P_8_2();
void parser_parse_backslash_S_T_O_P_8_2_backslash();
void parser_parse_backslash_S_T_O_P_8_2_backslash_carriagereturn();
void parser_parse_backslash_U();
void parser_parse_backslash_U_n();
void parser_parse_backslash_U_n_S();
void parser_parse_backslash_U_n_S_t();
void parser_parse_backslash_U_n_S_t_a();
void parser_parse_backslash_U_n_S_t_a_r();
void parser_parse_backslash_U_n_S_t_a_r_t();
void parser_parse_backslash_U_n_dash();
void parser_parse_backslash_U_n_dash_1();
void parser_parse_backslash_V();
void parser_parse_backslash_V_n();
void parser_parse_backslash_V_n_S();
void parser_parse_backslash_V_n_S_t();
void parser_parse_backslash_V_n_S_t_a();
void parser_parse_backslash_V_n_S_t_a_r();
void parser_parse_backslash_V_n_S_t_a_r_t();
void parser_parse_backslash_V_n_dash();
void parser_parse_backslash_V_n_dash_1();
void parser_parse_backslash_X();
void parser_parse_backslash_X_1();
void parser_parse_backslash_X_1_t();
void parser_parse_backslash_X_2();
void parser_parse_backslash_X_2_t();
void parser_parse_backslash_X_3();
void parser_parse_backslash_X_3_t();
void parser_parse_backslash_X_4();
void parser_parse_backslash_X_4_t();
void parser_parse_backslash_X_5();
void parser_parse_backslash_X_5_t();
void parser_parse_backslash_X_6();
void parser_parse_backslash_X_6_t();
void parser_parse_backslash_Y();
void parser_parse_backslash_Y_0();
void parser_parse_backslash_Y_1();
void parser_parse_backslash_Y_1_t();
void parser_parse_backslash_Y_2();
void parser_parse_backslash_Y_2_t();
void parser_parse_backslash_Y_3();
void parser_parse_backslash_Y_3_t();
void parser_parse_backslash_Y_4();
void parser_parse_backslash_Y_4_t();
void parser_parse_backslash_Y_5();
void parser_parse_backslash_Y_5_t();
void parser_parse_backslash_Y_6();
void parser_parse_backslash_Y_6_t();
void parser_parse_backslash_Y_7();
void parser_parse_backslash_Y_8();
void parser_parse_backslash_Y_9();
void parser_parse_backslash_at();
void parser_parse_backslash_b();
void parser_parse_backslash_b_o();
void parser_parse_backslash_b_o_x();
void parser_parse_backslash_b_o_x_space();
void parser_parse_backslash_b_o_x_space_i();
void parser_parse_backslash_b_o_x_space_i_c();
void parser_parse_backslash_b_o_x_space_i_c_o();
void parser_parse_backslash_b_o_x_space_i_c_o_n();
void parser_parse_backslash_carat();
void parser_parse_backslash_carat_2();
void parser_parse_backslash_carat_3();
void parser_parse_backslash_carat_dash();
void parser_parse_backslash_carat_dash_1();
void parser_parse_backslash_d();
void parser_parse_backslash_d_o();
void parser_parse_backslash_d_o_t();
void parser_parse_backslash_d_o_t_space();
void parser_parse_backslash_d_o_t_space_i();
void parser_parse_backslash_d_o_t_space_i_c();
void parser_parse_backslash_d_o_t_space_i_c_o();
void parser_parse_backslash_d_o_t_space_i_c_o_n();
void parser_parse_backslash_dash();
void parser_parse_backslash_dash_greaterthan();
void parser_parse_backslash_greaterthan();
void parser_parse_backslash_greaterthan_equal();
void parser_parse_backslash_hash();
void parser_parse_backslash_hash_backslash();
void parser_parse_backslash_hash_backslash_carriagereturn();
void parser_parse_backslash_leftpar();
void parser_parse_backslash_leftpar_dash();
void parser_parse_backslash_leftpar_dash_rightpar();
void parser_parse_backslash_lessthan();
void parser_parse_backslash_lessthan_equal();
void parser_parse_backslash_p();
void parser_parse_backslash_p_i();
void parser_parse_backslash_r();
void parser_parse_backslash_r_1();
void parser_parse_backslash_r_2();
void parser_parse_backslash_r_3();
void parser_parse_backslash_r_4();
void parser_parse_backslash_r_5();
void parser_parse_backslash_r_6();
void parser_parse_backslash_s();
void parser_parse_backslash_s_q();
void parser_parse_backslash_s_q_r();
void parser_parse_backslash_s_q_r_t();
void parser_parse_carriagereturn();
void parser_parse_carriagereturn_newline();
void parser_parse_d();
void parser_parse_d_i();
void parser_parse_d_i_m();
void parser_parse_f();
void parser_parse_f_M();
void parser_parse_f_M_a();
void parser_parse_f_M_a_x();
void parser_parse_f_M_i();
void parser_parse_f_M_i_n();
void parser_parse_f_P();
void parser_parse_f_P_a();
void parser_parse_f_P_a_r();
void parser_parse_f_P_a_r_t();
void parser_parse_f_n();
void parser_parse_f_n_I();
void parser_parse_f_n_I_n();
void parser_parse_f_n_I_n_t();
void parser_parse_g();
void parser_parse_g_e();
void parser_parse_g_e_t();
void parser_parse_g_e_t_K();
void parser_parse_g_e_t_K_e();
void parser_parse_i();
void parser_parse_i_P();
void parser_parse_i_P_a();
void parser_parse_i_P_a_r();
void parser_parse_i_P_a_r_t();
void parser_parse_i_n();
void parser_parse_i_n_t();
void parser_parse_leftbracket();
void parser_parse_leftbracket_A();
void parser_parse_leftbracket_B();
void parser_parse_leftbracket_C();
void parser_parse_leftbracket_D();
void parser_parse_leftbracket_E();
void parser_parse_n();
void parser_parse_n_D();
void parser_parse_n_D_e();
void parser_parse_n_D_e_r();
void parser_parse_n_D_e_r_i();
void parser_parse_n_D_e_r_i_v();
void parser_parse_newline();
void parser_parse_r();
void parser_parse_r_a();
void parser_parse_r_a_n();
void parser_parse_s();
void parser_parse_s_i();
void parser_parse_s_i_n();
void parser_parse_space();
void parser_parse_space_a();
void parser_parse_space_a_n();
void parser_parse_space_a_n_d();
void parser_parse_space_o();
void parser_parse_space_o_r();

struct
{
   unsigned char checksum[2];
   char comment[42];
   unsigned char* data;
   size_t data_size;
   char name[8];
   int protected;
   int started;
} program;

void program_add_data_1(unsigned char byte);
void program_add_data_2(unsigned char byte1, unsigned char byte2);
void program_init();
void program_set_comment(char* comment);
void program_set_name(char* name);
void program_start();
void program_stop();
void program_write();

void input_die_already_started()
{
   fprintf(stderr, "Program already started at line %d.\n", input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_line_length()
{
   fprintf(stderr, "Line %d too long.\n", input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_mixed_comment()
{
   fprintf(stderr, "Comment mixed with program at line %d.\n",
         input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_mixed_name()
{
   fprintf(stderr, "Name mixed with program at line %d.\n", input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_not_started()
{
   fprintf(stderr, "Unstarted program at line %d.\n", input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_repeat_comment()
{
   fprintf(stderr, "Multiple comments at line %d\n", input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_repeat_name()
{
   fprintf(stderr, "Multiple names at line %d\n", input.line_number);
   exit(EXIT_FAILURE);
}

void input_die_syntax()
{
   size_t i;

   fprintf(stderr, "Syntax error, line %d.\n", input.line_number);
   for (i = 0; i < 20; i++)
   {
      fprintf(stderr, "%c", fgetc(stdin));
   }
   fprintf(stderr, "\n");
   exit(EXIT_FAILURE);
}

int input_get_char()
{
   int c;
   static int last_char = '\0';

   c = fgetc(stdin);
   if (c == '\r' || (c == '\n' && last_char != '\r'))
   {
      input.line_number++;
   }
   last_char = c;

   return c;
}

void input_init()
{
   input.line_number = 1;
}

void input_unget_char(int c)
{
   ungetc(c, stdin);
}

void parser_parse()
{
   int c;

   while ((c = input_get_char()) != EOF)
   {
      if (c == '\n')
      {
         parser_parse_newline();
      }
      else if (c == '\r')
      {
         parser_parse_carriagereturn();
      }
      else if (c == ' ')
      {
         parser_parse_space();
      }
      else if (c == '!')
      {
         program_add_data_1(0x2d);
      }
      else if (c == '\"')
      {
         program_add_data_1(0x2a);
      }
      else if (c == '(')
      {
         program_add_data_1(0x10);
      }
      else if (c == ')')
      {
         program_add_data_1(0x11);
      }
      else if (c == '*')
      {
         program_add_data_1(0x82);
      }
      else if (c == '+')
      {
         program_add_data_1(0x70);
      }
      else if (c == ',')
      {
         program_add_data_1(0x2b);
      }
      else if (c == '-')
      {
         program_add_data_1(0x71);
      }
      else if (c == '.')
      {
         program_add_data_1(0x3a);
      }
      else if (c == '/')
      {
         program_add_data_1(0x83);
      }
      else if (c == '0')
      {
         program_add_data_1(0x30);
      }
      else if (c == '1')
      {
         program_add_data_1(0x31);
      }
      else if (c == '2')
      {
         program_add_data_1(0x32);
      }
      else if (c == '3')
      {
         program_add_data_1(0x33);
      }
      else if (c == '4')
      {
         program_add_data_1(0x34);
      }
      else if (c == '5')
      {
         program_add_data_1(0x35);
      }
      else if (c == '6')
      {
         program_add_data_1(0x36);
      }
      else if (c == '7')
      {
         program_add_data_1(0x37);
      }
      else if (c == '8')
      {
         program_add_data_1(0x38);
      }
      else if (c == '9')
      {
         program_add_data_1(0x39);
      }
      else if (c == ':')
      {
         program_add_data_1(0x3e);
      }
      else if (c == '<')
      {
         program_add_data_1(0x6b);
      }
      else if (c == '=')
      {
         program_add_data_1(0x6a);
      }
      else if (c == '>')
      {
         program_add_data_1(0x6c);
      }
      else if (c == '?')
      {
         program_add_data_1(0xaf);
      }
      else if (c == 'A')
      {
         parser_parse_A();
      }
      else if (c == 'B')
      {
         program_add_data_1(0x42);
      }
      else if (c == 'C')
      {
         parser_parse_C();
      }
      else if (c == 'D')
      {
         parser_parse_D();
      }
      else if (c == 'E')
      {
         parser_parse_E();
      }
      else if (c == 'F')
      {
         parser_parse_F();
      }
      else if (c == 'G')
      {
         parser_parse_G();
      }
      else if (c == 'H')
      {
         parser_parse_H();
      }
      else if (c == 'I')
      {
         parser_parse_I();
      }
      else if (c == 'J')
      {
         program_add_data_1(0x4a);
      }
      else if (c == 'K')
      {
         program_add_data_1(0x4b);
      }
      else if (c == 'L')
      {
         parser_parse_L();
      }
      else if (c == 'M')
      {
         parser_parse_M();
      }
      else if (c == 'N')
      {
         parser_parse_N();
      }
      else if (c == 'O')
      {
         parser_parse_O();
      }
      else if (c == 'P')
      {
         parser_parse_P();
      }
      else if (c == 'Q')
      {
         program_add_data_1(0x51);
      }
      else if (c == 'R')
      {
         parser_parse_R();
      }
      else if (c == 'S')
      {
         parser_parse_S();
      }
      else if (c == 'T')
      {
         parser_parse_T();
      }
      else if (c == 'U')
      {
         program_add_data_1(0x55);
      }
      else if (c == 'V')
      {
         parser_parse_V();
      }
      else if (c == 'W')
      {
         program_add_data_1(0x57);
      }
      else if (c == 'X')
      {
         parser_parse_X();
      }
      else if (c == 'Y')
      {
         parser_parse_Y();
      }
      else if (c == 'Z')
      {
         parser_parse_Z();
      }
      else if (c == '[')
      {
         parser_parse_leftbracket();
      }
      else if (c == '\\')
      {
         parser_parse_backslash();
      }
      else if (c == 'a')
      {
         parser_parse_a();
      }
      else if (c == 'd')
      {
         parser_parse_d();
      }
      else if (c == 'f')
      {
         parser_parse_f();
      }
      else if (c == 'g')
      {
         parser_parse_g();
      }
      else if (c == 'i')
      {
         parser_parse_i();
      }
      else if (c == 'n')
      {
         parser_parse_n();
      }
      else if (c == 'r')
      {
         parser_parse_r();
      }
      else if (c == 's')
      {
         parser_parse_s();
      }
      else if (c == '{')
      {
         program_add_data_1(0x08);
      }
      else if (c == '}')
      {
         program_add_data_1(0x09);
      }
      else
      {
         input_die_syntax();
      }
   }
}

void parser_parse_A()
{
   int c = input_get_char();

   if (c == 'x')
   {
      parser_parse_A_x();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x41);
   }
}

void parser_parse_A_x()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_A_x_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_A_x_e()
{
   int c = input_get_char();

   if (c == 's')
   {
      parser_parse_A_x_e_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_A_x_e_s()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_A_x_e_s_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_A_x_e_s_O()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_A_x_e_s_O_f();
   }
   else if (c == 'n')
   {
      program_add_data_2(0x7e, 0x08);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_A_x_e_s_O_f()
{
   int c = input_get_char();

   if (c == 'f')
   {
      program_add_data_2(0x7e, 0x09);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_C_l();
   }
   else if (c == 'o')
   {
      parser_parse_C_o();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x43);
   }
}

void parser_parse_C_l()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_C_l_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r()
{
   int c = input_get_char();

   if (c == 'D')
   {
      parser_parse_C_l_r_D();
   }
   else if (c == 'H')
   {
      parser_parse_C_l_r_H();
   }
   else if (c == 'L')
   {
      parser_parse_C_l_r_L();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_D()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_C_l_r_D_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_D_r()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_C_l_r_D_r_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_D_r_a()
{
   int c = input_get_char();

   if (c == 'w')
   {
      program_add_data_1(0x85);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_H()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_C_l_r_H_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_H_o()
{
   int c = input_get_char();

   if (c == 'm')
   {
      parser_parse_C_l_r_H_o_m();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_H_o_m()
{
   int c = input_get_char();

   if (c == 'e')
   {
      program_add_data_1(0xe1);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_L()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_C_l_r_L_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_L_i()
{
   int c = input_get_char();

   if (c == 's')
   {
      parser_parse_C_l_r_L_i_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_L_i_s()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_C_l_r_L_i_s_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_l_r_L_i_s_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xfa);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_C_o_n();
   }
   else if (c == 'o')
   {
      parser_parse_C_o_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_n()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_C_o_n_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_n_n()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_C_o_n_n_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_n_n_e()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_C_o_n_n_e_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_n_n_e_c()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_C_o_n_n_e_c_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_n_n_e_c_t()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_C_o_n_n_e_c_t_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_n_n_e_c_t_e()
{
   int c = input_get_char();

   if (c == 'd')
   {
      program_add_data_2(0x7e, 0x06);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_o()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_C_o_o_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_o_r()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_C_o_o_r_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_o_r_d()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_C_o_o_r_d_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_C_o_o_r_d_O()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_2(0x7e, 0x04);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_D_e();
   }
   else if (c == 'i')
   {
      parser_parse_D_i();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x44);
   }
}

void parser_parse_D_e()
{
   int c = input_get_char();

   if (c == 'g')
   {
      parser_parse_D_e_g();
   }
   else if (c == 'p')
   {
      parser_parse_D_e_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_g()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_D_e_g_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_g_r()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_D_e_g_r_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_g_r_e()
{
   int c = input_get_char();

   if (c == 'e')
   {
      program_add_data_1(0x65);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_D_e_p_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p_e()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_D_e_p_e_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p_e_n()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_D_e_p_e_n_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p_e_n_d()
{
   int c = input_get_char();

   if (c == 'A')
   {
      parser_parse_D_e_p_e_n_d_A();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p_e_n_d_A()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_D_e_p_e_n_d_A_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p_e_n_d_A_u()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_D_e_p_e_n_d_A_u_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_e_p_e_n_d_A_u_t()
{
   int c = input_get_char();

   if (c == 'o')
   {
      program_add_data_1(0x7c);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i()
{
   int c = input_get_char();

   if (c == 's')
   {
      parser_parse_D_i_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i_s()
{
   int c = input_get_char();

   if (c == 'p')
   {
      parser_parse_D_i_s_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i_s_p()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xde);
   }
   else if (c == 'G')
   {
      parser_parse_D_i_s_p_G();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i_s_p_G()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_D_i_s_p_G_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i_s_p_G_r()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_D_i_s_p_G_r_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i_s_p_G_r_a()
{
   int c = input_get_char();

   if (c == 'p')
   {
      parser_parse_D_i_s_p_G_r_a_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_D_i_s_p_G_r_a_p()
{
   int c = input_get_char();

   if (c == 'h')
   {
      program_add_data_1(0xdf);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_E()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_E_n();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x45);
   }
}

void parser_parse_E_n()
{
   int c = input_get_char();

   if (c == 'd')
   {
      program_add_data_1(0xd4);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_F_l();
   }
   else if (c == 'n')
   {
      parser_parse_F_n();
   }
   else if (c == 'o')
   {
      parser_parse_F_o();
   }
   else if (c == 'u')
   {
      parser_parse_F_u();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x46);
   }
}

void parser_parse_F_l()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_F_l_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_l_o()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_F_l_o_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_l_o_a()
{
   int c = input_get_char();

   if (c == 't')
   {
      program_add_data_1(0x69);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_n()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_F_n_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_n_O()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_F_n_O_f();
   }
   else if (c == 'n')
   {
      parser_parse_F_n_O_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_n_O_f()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_F_n_O_f_f();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_n_O_f_f()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0x97);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_n_O_n()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0x96);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_o()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_F_o_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_o_r()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xd3);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_F_u_l();
   }
   else if (c == 'n')
   {
      parser_parse_F_u_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_F_u_l_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l_l()
{
   int c = input_get_char();

   if (c == 'S')
   {
      parser_parse_F_u_l_l_S();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l_l_S()
{
   int c = input_get_char();

   if (c == 'c')
   {
      parser_parse_F_u_l_l_S_c();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l_l_S_c()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_F_u_l_l_S_c_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l_l_S_c_r()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_F_u_l_l_S_c_r_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l_l_S_c_r_e()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_F_u_l_l_S_c_r_e_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_l_l_S_c_r_e_e()
{
   int c = input_get_char();

   if (c == 'n')
   {
      program_add_data_1(0x75);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_F_u_n()
{
   int c = input_get_char();

   if (c == 'c')
   {
      program_add_data_1(0x76);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_G_o();
   }
   else if (c == 'r')
   {
      parser_parse_G_r();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x47);
   }
}

void parser_parse_G_o()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_G_o_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_o_t()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_G_o_t_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_o_t_o()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xd7);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_r()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_G_r_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_r_i()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_G_r_i_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_r_i_d()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_G_r_i_d_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_r_i_d_O()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_G_r_i_d_O_f();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_G_r_i_d_O_f()
{
   int c = input_get_char();

   if (c == 'f')
   {
      program_add_data_2(0x7e, 0x0b);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_H_o();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x48);
   }
}

void parser_parse_H_o()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_H_o_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_H_o_r_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i()
{
   int c = input_get_char();

   if (c == 'z')
   {
      parser_parse_H_o_r_i_z();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i_z()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_H_o_r_i_z_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i_z_o()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_H_o_r_i_z_o_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i_z_o_n()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_H_o_r_i_z_o_n_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i_z_o_n_t()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_H_o_r_i_z_o_n_t_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i_z_o_n_t_a()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_H_o_r_i_z_o_n_t_a_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_H_o_r_i_z_o_n_t_a_l()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xa6);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I()
{
   int c = input_get_char();

   if (c == 'S')
   {
      parser_parse_I_S();
   }
   else if (c == 'f')
   {
      parser_parse_I_f();
   }
   else if (c == 'n')
   {
      parser_parse_I_n();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x49);
   }
}

void parser_parse_I_S()
{
   int c = input_get_char();

   if (c == '>')
   {
      parser_parse_I_S_greaterthan();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x49);
      program_add_data_1(0x53);
   }
}

void parser_parse_I_S_greaterthan()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xda);
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x49);
      program_add_data_1(0x53);
      program_add_data_1(0x6c);
   }
}

void parser_parse_I_f()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xce);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_I_n_d();
   }
   else if (c == 'p')
   {
      parser_parse_I_n_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d()
{
   int c = input_get_char();

   if (c == 'p')
   {
      parser_parse_I_n_d_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d_p()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_I_n_d_p_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d_p_n()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_I_n_d_p_n_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d_p_n_t()
{
   int c = input_get_char();

   if (c == 'A')
   {
      parser_parse_I_n_d_p_n_t_A();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d_p_n_t_A()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_I_n_d_p_n_t_A_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d_p_n_t_A_u()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_I_n_d_p_n_t_A_u_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_d_p_n_t_A_u_t()
{
   int c = input_get_char();

   if (c == 'o')
   {
      program_add_data_1(0x7a);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_p()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_I_n_p_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_p_u()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_I_n_p_u_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_I_n_p_u_t()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xdc);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_L_a();
   }
   else if (c == 'b')
   {
      parser_parse_L_b();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x4c);
   }
}

void parser_parse_L_a()
{
   int c = input_get_char();

   if (c == 'b')
   {
      parser_parse_L_a_b();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_a_b()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_L_a_b_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_a_b_e()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_L_a_b_e_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_a_b_e_l()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_L_a_b_e_l_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_a_b_e_l_O()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_L_a_b_e_l_O_f();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_a_b_e_l_O_f()
{
   int c = input_get_char();

   if (c == 'f')
   {
      program_add_data_2(0x7e, 0x0d);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_b()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_L_b_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_L_b_l()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xd6);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_M()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_M_e();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x4d);
   }
}

void parser_parse_M_e()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_M_e_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_M_e_n()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_M_e_n_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_M_e_n_u()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xe6);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_N()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_N_o();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x4e);
   }
}

void parser_parse_N_o()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_N_o_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_N_o_r()
{
   int c = input_get_char();

   if (c == 'm')
   {
      parser_parse_N_o_r_m();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_N_o_r_m()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_N_o_r_m_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_N_o_r_m_a()
{
   int c = input_get_char();

   if (c == 'l')
   {
      program_add_data_1(0x66);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_O()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_O_u();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x4f);
   }
}

void parser_parse_O_u()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_O_u_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_O_u_t()
{
   int c = input_get_char();

   if (c == 'p')
   {
      parser_parse_O_u_t_p();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_O_u_t_p()
{
   int c = input_get_char();

   if (c == 'u')
   {
      parser_parse_O_u_t_p_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_O_u_t_p_u()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_O_u_t_p_u_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_O_u_t_p_u_t()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xe0);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_P_a();
   }
   else if (c == 'l')
   {
      parser_parse_P_l();
   }
   else if (c == 'o')
   {
      parser_parse_P_o();
   }
   else if (c == 't')
   {
      parser_parse_P_t();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x50);
   }
}

void parser_parse_P_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_P_a_r();
   }
   else if (c == 'u')
   {
      parser_parse_P_a_u();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_a_r()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_P_a_r_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_a_r_a()
{
   int c = input_get_char();

   if (c == 'm')
   {
      program_add_data_1(0x77);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_a_u()
{
   int c = input_get_char();

   if (c == 's')
   {
      parser_parse_P_a_u_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_a_u_s()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_P_a_u_s_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_a_u_s_e()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xd8);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l()
{
   int c = input_get_char();

   if (c == 'o')
   {
      parser_parse_P_l_o();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_P_l_o_t();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_P_l_o_t_1();
   }
   else if (c == '2')
   {
      parser_parse_P_l_o_t_2();
   }
   else if (c == '3')
   {
      parser_parse_P_l_o_t_3();
   }
   else if (c == 's')
   {
      parser_parse_P_l_o_t_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_1()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xec);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_2()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xed);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_3()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xee);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_s()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_P_l_o_t_s_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_s_O()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_P_l_o_t_s_O_f();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_s_O_f()
{
   int c = input_get_char();

   if (c == 'f')
   {
      parser_parse_P_l_o_t_s_O_f_f();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_l_o_t_s_O_f_f()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xea);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_o()
{
   int c = input_get_char();

   if (c == 'l')
   {
      parser_parse_P_o_l();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_o_l()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_P_o_l_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_o_l_a()
{
   int c = input_get_char();

   if (c == 'r')
   {
      program_add_data_1(0x78);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t()
{
   int c = input_get_char();

   if (c == '-')
   {
      parser_parse_P_t_dash();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash()
{
   int c = input_get_char();

   if (c == 'C')
   {
      parser_parse_P_t_dash_C();
   }
   else if (c == 'O')
   {
      parser_parse_P_t_dash_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_C()
{
   int c = input_get_char();

   if (c == 'h')
   {
      parser_parse_P_t_dash_C_h();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_C_h()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_P_t_dash_C_h_a();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_C_h_a()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_P_t_dash_C_h_a_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_C_h_a_n()
{
   int c = input_get_char();

   if (c == 'g')
   {
      parser_parse_P_t_dash_C_h_a_n_g();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_C_h_a_n_g()
{
   int c = input_get_char();

   if (c == 'e')
   {
      parser_parse_P_t_dash_C_h_a_n_g_e();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_P_t_dash_C_h_a_n_g_e()
{
   int c = input_get_char();

   if (c == '(')
   {
      program_add_data_1(0xa0);
   }
   else
   {
      input_die_syntax();
   }
}

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

void parser_parse_backslash()
{
   int c = input_get_char();

   if (c == '#')
   {
      parser_parse_backslash_hash();
   }
   else if (c == '(')
   {
      parser_parse_backslash_leftpar();
   }
   else if (c == '-')
   {
      parser_parse_backslash_dash();
   }
   else if (c == '<')
   {
      parser_parse_backslash_lessthan();
   }
   else if (c == '>')
   {
      parser_parse_backslash_greaterthan();
   }
   else if (c == '@')
   {
      parser_parse_backslash_at();
   }
   else if (c == 'C')
   {
      parser_parse_backslash_C();
   }
   else if (c == 'D')
   {
      parser_parse_backslash_D();
   }
   else if (c == 'E')
   {
      parser_parse_backslash_E();
   }
   else if (c == 'L')
   {
      parser_parse_backslash_L();
   }
   else if (c == 'N')
   {
      parser_parse_backslash_N();
   }
   else if (c == 'S')
   {
      parser_parse_backslash_S();
   }
   else if (c == 'U')
   {
      parser_parse_backslash_U();
   }
   else if (c == 'V')
   {
      parser_parse_backslash_V();
   }
   else if (c == 'X')
   {
      parser_parse_backslash_X();
   }
   else if (c == 'Y')
   {
      parser_parse_backslash_Y();
   }
   else if (c == '^')
   {
      parser_parse_backslash_carat();
   }
   else if (c == 'b')
   {
      parser_parse_backslash_b();
   }
   else if (c == 'd')
   {
      parser_parse_backslash_d();
   }
   else if (c == 'p')
   {
      parser_parse_backslash_p();
   }
   else if (c == 'r')
   {
      parser_parse_backslash_r();
   }
   else if (c == 's')
   {
      parser_parse_backslash_s();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C()
{
   int c = input_get_char();

   if (c == 'O')
   {
      parser_parse_backslash_C_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O()
{
   int c = input_get_char();

   if (c == 'M')
   {
      parser_parse_backslash_C_O_M();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M()
{
   int c = input_get_char();

   if (c == 'M')
   {
      parser_parse_backslash_C_O_M_M();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M_M()
{
   int c = input_get_char();

   if (c == 'E')
   {
      parser_parse_backslash_C_O_M_M_E();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M_M_E()
{
   int c = input_get_char();

   if (c == 'N')
   {
      parser_parse_backslash_C_O_M_M_E_N();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M_M_E_N()
{
   int c = input_get_char();

   if (c == 'T')
   {
      parser_parse_backslash_C_O_M_M_E_N_T();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M_M_E_N_T()
{
   int c = input_get_char();

   if (c == '=')
   {
      parser_parse_backslash_C_O_M_M_E_N_T_equal();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M_M_E_N_T_equal()
{
   int c = EOF;
   char comment[42];
   size_t comment_size = 0;

   memset(comment, '\0', 42);
   while (comment_size < 42 && (c = input_get_char()) != EOF && c != '\n'
         && c != '\r')
   {
      comment[comment_size] = c;
      comment_size++;
   }
   if (comment_size == 42)
   {
      c = input_get_char();
      if (c == '\n')
      {
         program_set_comment(comment);
      }
      else if (c == '\r')
      {
         program_set_comment(comment);
         parser_parse_backslash_C_O_M_M_E_N_T_equal_carriagereturn();
      }
      else
      {
         input_die_line_length();
      }
   }
   else if (c == '\n')
   {
      program_set_comment(comment);
   }
   else if (c == '\r')
   {
      program_set_comment(comment);
      parser_parse_backslash_C_O_M_M_E_N_T_equal_carriagereturn();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_C_O_M_M_E_N_T_equal_carriagereturn()
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

void parser_parse_backslash_E()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x3b);
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

void parser_parse_backslash_N()
{
   int c = input_get_char();

   if (c == 'A')
   {
      parser_parse_backslash_N_A();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_N_A()
{
   int c = input_get_char();

   if (c == 'M')
   {
      parser_parse_backslash_N_A_M();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_N_A_M()
{
   int c = input_get_char();

   if (c == 'E')
   {
      parser_parse_backslash_N_A_M_E();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_N_A_M_E()
{
   int c = input_get_char();

   if (c == '=')
   {
      parser_parse_backslash_N_A_M_E_equal();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_N_A_M_E_equal()
{
   int c = EOF;
   char name[8];
   size_t name_size = 0;

   memset(name, '\0', 8);
   while (name_size < 8 && (c = input_get_char()) != EOF && c != '\n'
         && c != '\r')
   {
      name[name_size] = c;
      name_size++;
   }
   if (name_size == 8)
   {
      c = input_get_char();
      if (c == '\n')
      {
         program_set_name(name);
         parser_parse_backslash_N_A_M_E_equal_newline();
      }
      else if (c == '\r')
      {
         program_set_name(name);
         parser_parse_backslash_N_A_M_E_equal_carriagereturn();
      }
      else
      {
         input_die_line_length();
      }
   }
   else if (c == '\n')
   {
      program_set_name(name);
      parser_parse_backslash_N_A_M_E_equal_newline();
   }
   else if (c == '\r')
   {
      program_set_name(name);
      parser_parse_backslash_N_A_M_E_equal_carriagereturn();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_N_A_M_E_equal_carriagereturn()
{
   int c = input_get_char();

   if (c == '\n')
   {
      parser_parse_backslash_N_A_M_E_equal_carriagereturn_newline();
   }
   else if (c == ':')
   {
   }
   else
   {
      input_unget_char(c);
   }
}

void parser_parse_backslash_N_A_M_E_equal_carriagereturn_newline()
{
   int c = input_get_char();

   if (c == ':')
   {
   }
   else
   {
      input_unget_char(c);
   }
}

void parser_parse_backslash_N_A_M_E_equal_newline()
{
   int c = input_get_char();

   if (c == ':')
   {
   }
   else
   {
      input_unget_char(c);
   }
}

void parser_parse_backslash_S()
{
   int c = input_get_char();

   if (c == 'T')
   {
      parser_parse_backslash_S_T();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T()
{
   int c = input_get_char();

   if (c == 'A')
   {
      parser_parse_backslash_S_T_A();
   }
   else if (c == 'O')
   {
      parser_parse_backslash_S_T_O();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A()
{
   int c = input_get_char();

   if (c == 'R')
   {
      parser_parse_backslash_S_T_A_R();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A_R()
{
   int c = input_get_char();

   if (c == 'T')
   {
      parser_parse_backslash_S_T_A_R_T();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A_R_T()
{
   int c = input_get_char();

   if (c == '8')
   {
      parser_parse_backslash_S_T_A_R_T_8();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A_R_T_8()
{
   int c = input_get_char();

   if (c == '2')
   {
      parser_parse_backslash_S_T_A_R_T_8_2();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A_R_T_8_2()
{
   int c = input_get_char();

   if (c == '\\')
   {
      parser_parse_backslash_S_T_A_R_T_8_2_backslash();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A_R_T_8_2_backslash()
{
   int c = input_get_char();

   if (c == '\n')
   {
      program_start();
   }
   else if (c == '\r')
   {
      parser_parse_backslash_S_T_A_R_T_8_2_backslash_carriagereturn();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_A_R_T_8_2_backslash_carriagereturn()
{
   int c = input_get_char();

   if (c == '\n')
   {
      program_start();
   }
   else
   {
      input_unget_char(c);
      program_start();
   }
}

void parser_parse_backslash_S_T_O()
{
   int c = input_get_char();

   if (c == 'P')
   {
      parser_parse_backslash_S_T_O_P();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_O_P()
{
   int c = input_get_char();

   if (c == '8')
   {
      parser_parse_backslash_S_T_O_P_8();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_O_P_8()
{
   int c = input_get_char();

   if (c == '2')
   {
      parser_parse_backslash_S_T_O_P_8_2();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_O_P_8_2()
{
   int c = input_get_char();

   if (c == '\\')
   {
      parser_parse_backslash_S_T_O_P_8_2_backslash();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_O_P_8_2_backslash()
{
   int c = input_get_char();

   if (c == '\n')
   {
      program_stop();
   }
   else if (c == '\r')
   {
      parser_parse_backslash_S_T_O_P_8_2_backslash_carriagereturn();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_S_T_O_P_8_2_backslash_carriagereturn()
{
   int c = input_get_char();

   if (c == '\n')
   {
      program_stop();
   }
   else
   {
      input_unget_char(c);
      program_stop();
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

void parser_parse_backslash_X()
{
   int c = input_get_char();

   if (c == '1')
   {
      parser_parse_backslash_X_1();
   }
   else if (c == '2')
   {
      parser_parse_backslash_X_2();
   }
   else if (c == '3')
   {
      parser_parse_backslash_X_3();
   }
   else if (c == '4')
   {
      parser_parse_backslash_X_4();
   }
   else if (c == '5')
   {
      parser_parse_backslash_X_5();
   }
   else if (c == '6')
   {
      parser_parse_backslash_X_6();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_X_1()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_X_1_t();
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

void parser_parse_backslash_X_2()
{
   int c = input_get_char();

   if (c == 't')
   {
      parser_parse_backslash_X_2_t();
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

void parser_parse_backslash_dash()
{
   int c = input_get_char();

   if (c == '>')
   {
      parser_parse_backslash_dash_greaterthan();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_backslash_dash_greaterthan()
{
   int c = input_get_char();

   if (c == '\\')
   {
      program_add_data_1(0x04);
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

void parser_parse_carriagereturn()
{
   int c = input_get_char();

   if (c == '\n')
   {
      parser_parse_carriagereturn_newline();
   }
   else if (c == ':')
   {
      program_add_data_1(0x3f);
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x3f);
   }
}

void parser_parse_carriagereturn_newline()
{
   int c = input_get_char();

   if (c == ':')
   {
      program_add_data_1(0x3f);
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x3f);
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

void parser_parse_newline()
{
   int c = input_get_char();

   if (c == ':')
   {
      program_add_data_1(0x3f);
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x3f);
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

void parser_parse_s()
{
   int c = input_get_char();

   if (c == 'i')
   {
      parser_parse_s_i();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_s_i()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_s_i_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_s_i_n()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0xc2);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_space()
{
   int c = input_get_char();

   if (c == 'a')
   {
      parser_parse_space_a();
   }
   else if (c == 'o')
   {
      parser_parse_space_o();
   }
   else
   {
      input_unget_char(c);
      program_add_data_1(0x29);
   }
}

void parser_parse_space_a()
{
   int c = input_get_char();

   if (c == 'n')
   {
      parser_parse_space_a_n();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_space_a_n()
{
   int c = input_get_char();

   if (c == 'd')
   {
      parser_parse_space_a_n_d();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_space_a_n_d()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0x40);
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_space_o()
{
   int c = input_get_char();

   if (c == 'r')
   {
      parser_parse_space_o_r();
   }
   else
   {
      input_die_syntax();
   }
}

void parser_parse_space_o_r()
{
   int c = input_get_char();

   if (c == ' ')
   {
      program_add_data_1(0x3c);
   }
   else
   {
      input_die_syntax();
   }
}

void program_add_data_1(unsigned char byte)
{
   if (program.started)
   {
      program.data = realloc(program.data, program.data_size + 1);
      program.data[program.data_size] = byte;
      program.data_size++;
   }
   else
   {
      input_die_not_started();
   }
}

void program_add_data_2(unsigned char byte1, unsigned char byte2)
{
   if (program.started)
   {
      program.data = realloc(program.data, program.data_size + 2);
      program.data[program.data_size] = byte1;
      program.data[program.data_size + 1] = byte2;
      program.data_size += 2;
   }
   else
   {
      input_die_not_started();
   }
}

void program_init()
{
   program.checksum[0] = 0;
   program.checksum[1] = 0;
   memset(program.comment, '\0', 42);
   program.data = NULL;
   program.data_size = 0;
   memset(program.name, '\0', 8);
   program.protected = 0;
   program.started = 0;
}

void program_set_comment(char* comment)
{
   if (program.started)
   {
      if (program.data_size == 0)
      {
         if (program.comment[0] == '\0')
         {
            strncpy(program.comment, comment, 42);
         }
         else
         {
            input_die_repeat_comment();
         }
      }
      else
      {
         input_die_mixed_comment();
      }
   }
   else
   {
      input_die_not_started();
   }
}

void program_set_name(char* name)
{
   if (program.started)
   {
      if (program.data_size == 0)
      {
         if (program.name[0] == '\0')
         {
            strncpy(program.name, name, 8);
         }
         else
         {
            input_die_repeat_name();
         }
      }
      else
      {
         input_die_mixed_name();
      }
   }
   else
   {
      input_die_not_started();
   }
}

void program_start()
{
   if (!program.started)
   {
      program.started = 1;
   }
   else
   {
      input_die_already_started();
   }
}

void program_stop()
{
   if (program.started)
   {
      program.started = 0;
   }
   else
   {
      input_die_not_started();
   }
}

void program_write()
{
   int checksum = 0;
   size_t i;
   unsigned char size1[2];
   unsigned char size2[2];
   unsigned char size3[2];

   size1[0] = (program.data_size + 17) % 256;
   size1[1] = (program.data_size + 17) / 256;
   size2[0] = (program.data_size + 2) % 256;
   size2[1] = (program.data_size + 2) / 256;
   size3[0] = program.data_size % 256;
   size3[1] = program.data_size / 256;

   if (program.name[0] == '\0')
   {
      fprintf(stderr, "Name not set.\n");
      exit(EXIT_FAILURE);
   }
   if (program.started)
   {
      fprintf(stderr, "Program not stopped\n");
      exit(EXIT_FAILURE);
   }

   checksum += 0x0b;
   checksum += 0x00;
   checksum += size2[0];
   checksum += size2[1];
   checksum += program.protected ? 0x06 : 0x05;
   for (i = 0; i < 8; i++)
   {
      checksum += program.name[i];
   }
   checksum += size2[0];
   checksum += size2[1];
   checksum += size3[0];
   checksum += size3[1];
   for (i = 0; i < program.data_size; i++)
   {
      checksum += program.data[i];
   }

   printf("**TI82**");
   putchar(0x1a);
   putchar(0x0a);
   putchar(0x00);
   fwrite(program.comment, 1, 42, stdout);
   putchar(size1[0]);
   putchar(size1[1]);
   putchar(0x0b);
   putchar(0x00);
   putchar(size2[0]);
   putchar(size2[1]);
   putchar(program.protected ? 0x06 : 0x05);
   fwrite(program.name, 1, 8, stdout);
   putchar(size2[0]);
   putchar(size2[1]);
   putchar(size3[0]);
   putchar(size3[1]);
   fwrite(program.data, 1, program.data_size, stdout);
   putchar(checksum % 256);
   putchar(checksum / 256 % 256);
}

int main()
{
   input_init();
   program_init();
   parser_parse();
   program_write();

   return 0;
}

#if 0
>DMS                           [001]               01
>Dec                           [002]               02
>Frac                          [003]               03
Boxplot                        [005]               05
[                              [006]               06
]                              [007]               07
r                              [010]               0A
(Degree)                       [011]               0B
T                              [014]               0E
round(                         [018]               12
pxl-Test(                      [019]               13
augment(                       [020]               14
rowSwap(                       [021]               15
row+(                          [022]               16
*row(                          [023]               17
*row+(                         [024]               18
max(                           [025]               19
min(                           [026]               1A
R>Pr(                          [027]               1B
R>P0(                          [028]               1C
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
#endif

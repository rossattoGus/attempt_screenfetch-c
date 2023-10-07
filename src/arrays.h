/*****************************************************************************
As frases usadas pelo screenfetch-c para armazenar as informações do sistema são externalizadas 
neste arquivo. 
? Arrays criados para o uso do app.
*****************************************************************************/

#ifndef SCREENFETCH_C_ARRAYS_H //Verifica se a biblioteca screenfetchcarrays.h está disponível;
#define SCREENFETCH_C_ARRAYS_H

#include "misc.h"

extern char given_distro_str[MAX_STRLEN]; // 'Extern' é utilizado para declarar uma variável global;
extern char distro_str[MAX_STRLEN];
extern char host_str[MAX_STRLEN];
extern char kernel_str[MAX_STRLEN];
extern char uptime_str[MAX_STRLEN];
extern char pkgs_str[MAX_STRLEN];
extern char cpu_str[MAX_STRLEN];
extern char gpu_str[MAX_STRLEN];
extern char disk_str[MAX_STRLEN];
extern char mem_str[MAX_STRLEN];
extern char shell_str[MAX_STRLEN];
extern char res_str[MAX_STRLEN];
extern char de_str[MAX_STRLEN];
extern char wm_str[MAX_STRLEN];
extern char wm_theme_str[MAX_STRLEN];
extern char gtk_str[MAX_STRLEN];
extern char icon_str[MAX_STRLEN];
extern char font_str[MAX_STRLEN];

extern char gost_color[MAX_STRLEN];

#define DETECTED_ARR_LEN 17
extern char *detected_arr[DETECTED_ARR_LEN];
extern char *detected_arr_names[DETECTED_ARR_LEN];

#endif 




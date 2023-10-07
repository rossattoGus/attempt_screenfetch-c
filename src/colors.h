/*****************************************************************************
Macros para colorir a saída no terminal.
*****************************************************************************/

#ifndef SCREENFETCH_C_COLORS_H
#define SCREENFETCH_C_COLORS_H

#ifdef NO_COLORS //Se houver no comando 'no_colors' as cores ficam sem valor

#define TNRM ""
#define TBLK ""
#define TRED ""
#define TGRN ""
#define TBRN ""
#define TBLU ""
#define TPUR ""
#define TCYN ""
#define TLGY ""
#define TDGY ""
#define TLDR ""
#define TLGN ""
#define TYLW ""
#define TLBL ""
#define TLPR ""
#define TLCY ""
#define TWHT ""

#else

#define TNRM "\x1B[0m" /* normal - Nomenclatura para saída de cores no terminal*/
#define TNRM "\x1B[0m"    /* normal */
#define TBLK "\x1B[0;30m" /* black */
#define TRED "\x1B[0;31m" /* red */
#define TGRN "\x1B[0;32m"  /* green */
#define TBRN "\x1B[0;33m"  /* brown */
#define TBLU "\x1B[0;34m"  /* blue */
#define TPUR "\x1B[0;35m"  /* purble */
#define TCYN "\x1B[0;36m"  /* cyan */
#define TLGY "\x1B[0;37m"  /* light gray */
#define TDGY "\x1B[1;30m"  /* dark gray */
#define TLRD "\x1B[1;31m"  /* light red*/
#define TLGN "\x1B[1;32m"  /* ligth green */
#define TYLW "\x1B[1;33m"  /* yellow */
#define TLBL "\x1B[1;34m"  /* light blue */
#define TLPR "\x1B[1;35m"  /* light purple */
#define TLCY "\x1B[1;36m"  /* light cyan */
#define TWHT "\x1B[1;37m"  /* white */

#endif

#endif


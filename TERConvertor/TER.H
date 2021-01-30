#ifndef TERH
#define TERH

/******************************************************************************
               TER Constants
*******************************************************************************/
#if defined (_WIN32)
   #if !defined(WIN32)
     #define WIN32
   #endif
#endif

#define TER_CLASS      "Tew26Class"

#define TER_DATA_VER       101

#define CLRADJ_TEXT        1
#define CLRADJ_HLINK       2
#define CLRADJ_FIELD       3
#define CLRADJ_LIST        4
#define CLRADJ_BORDER      5
#define CLRADJ_BULLET      6
#define CLRADJ_BKND        7
#define CLRADJ_RECT_FILL   8
#define CLRADJ_OBJECT_LINE  9
#define CLRADJ_LAST        9

#define REP_TOP            0x1       // print report information on the top of the page
#define REP_BOT            0x2       // print report informatio non the bottom of the page
#define REP_CENTER         0x4       // center align the info
#define REP_RIGHT          0x8       // right align the info
#define REP_NO_PAGE        0x10      // don't print the page number

#define CROP_LEFT           1
#define CROP_RIGHT          2
#define CROP_TOP            3
#define CROP_BOT            4

#define TOC_HEADINGS        0
#define TOC_OUTLINES        1
#define TOC_CUSTOM          2
#define TOC_FIELD           3
#define TOC_USER            4      // caller specified TOC field code
#define TOC_LAST            4


#define PERM_PRINT            0x4     // these values are specified by the pdf spec - permission flags
#define PERM_MOD              0x28
#define PERM_COPY             0x10

#define PERM_ALL              (PERM_PRINT|PERM_MOD|PERM_COPY)

#define PDFFLAG_COMPRESS_TEXT  0x1    // the flag used by the TerPdcStart function
#define PDFFLAG_NO_BOOKMARK    0x2    // do not include bookmark
#define PDFFLAG_EMBED_FONTS    0x4    // always embed fonts
#define PDFFLAG_NO_HLINK       0x8    // do not include active hyperlink
#define PDFFLAG_BINARY_HINT    0x10   // write additional binary hit to satish yahoo and hotmail
#define PDFFLAG_EXACT_TEXT_PLACEMENT 0x20 // place characters at exact positions
#define PDFFLAG_NO_CACHING     0x40   // write directly to disk file
#define PDFFLAG_DO_XPARENT     0x80   // support transparency
#define PDFFLAG_MULTI_DOC      0x100  // combining multiple TE documents to create one pdf doc
#define PDFFLAG_NO_PAGE_BM     0x200  // do not create page bitmap, page bitmap is needed to support transparency
#define PDFFLAG_NO_BOOKMARK_PANE 0x400  // do not open the bookmark pane - only applicable when bookmarks are enabled
#define PDFFLAG_RC4_128          0x800  // use RC4-128 bit encryption when password is used
#define PDFFLAG_AES_128         0x1000  // use AES-128 bit encryption when password is used
#define PDFFLAG_RETURN_MSG_ID   0x2000  // sets the RFLAG_RETURN_MSG_ID flag
#define PDFFLAG_PDFA_1B         0x10000 // minimum compliance pdf/a-1b
#define PDFFLAG_PDFA            0x20000 // minimum compliance pdf/a
#define PDFFLAG_SHOW_MISSING_SSZLIB_MSG 0x40000 // show a message if sszlib not found
#define PDFFLAG_CLEAR_BKND             0x100000 // clear page background
#define PDFFLAG_TAGGED                 0x200000 // true to generated tagged pdf
#define PDFFLAG_NO_PAGE_SCALING        0x400000  // set the page scaling document property to None
#define PDFFLAG_DUPLEX_LONG            0x800000  // select duplex printing on the long edge
#define PDFFLAG_DUPLEX_SHORT          0x1000000  // select duplex printing on the short edge
#define PDFFLAG_PDFA3                 0x2000000 // minimum compliance pdf/a-3
#define PDFFLAG_PDF_UA                0x4000000 // PDF/UA (user accessibility) compliance
#define PDFFLAG_MINIMIZE_FILE_SIZE    0x8000000 // minimized the pdf file size
#define PDFFLAG_AES_256              0x10000000  // not yet implemented

#define MAX_WIDTH          2000     // 20110607: increased to 2000 from 1000
#define TE_MAX_TAB_STOPS   20
#define CELL_MARGIN        60      // cell margin in twips

#define OLEPTR_OBJECT      0
#define OLEPTR_STORAGE     1

#define HILIGHT_OFF        0
#define HILIGHT_LINE       1
#define HILIGHT_CHAR       2

#define FLOW_DEF           0
#define FLOW_LTR           1
#define FLOW_RTL           2

#define PARA_BOX_SPACE       20   // space before/after the para border
#define PARA_BORDER_WIDTH    30   // space reserved for a single line paragraph border

#define MERGEPRINT_NO_EVAL_MSG 0x1
#define MERGEPRINT_NO_CLIP     0x2

#define FONTINFO_UCBASE      1
#define FONTINFO_CHARSET     2
#define FONTINFO_PICT_WIDTH  3
#define FONTINFO_PICT_HEIGHT 4
#define FONTINFO_ULINE_COLOR 5
#define FONTINFO_AUX_ID      6
#define FONTINFO_FLAGS       7
#define FONTINFO_FRAME_TYPE  8
#define FONTINFO_FRAME_ID    9
#define FONTINFO_OFFSET      10
#define FONTINFO_IS_PICT     11
#define FONTINFO_IS_OLE      12
#define FONTINFO_IS_OCX      13
#define FONTINFO_FIELD_ID    14
#define FONTINFO_INS_REV_ID  15
#define FONTINFO_DEL_REV_ID  16
#define FONTINFO_CHAR_SCALEX 17
#define FONTINFO_CHAR_SPACE  18
#define FONTINFO_IS_RTL      19
#define FONTINFO_SIZE        20
#define FONTINFO_STYLE       21
#define FONTINFO_COLOR       22
#define FONTINFO_BK_COLOR    23
#define FONTINFO_WLINE_COLOR 24
#define FONTINFO_FLOW        25
#define FONTINFO_HAS_COMMENTS 26
#define FONTINFO_HILIGHT_COLOR 27
#define FONTINFO_FMT_REV_ID  28

#define PARAINFO_TEXT_FLOW    1
#define PARAINFO_BORDER_COLOR 2
#define PARAINFO_BK_COLOR     3   // background color
#define PARAINFO_SPC_BEF      4
#define PARAINFO_SPC_AFT      5
#define PARAINFO_SPC_BET      6
#define PARAINFO_LINE_SPACE   7
#define PARAINFO_FLAGS        8
#define PARAINFO_HEADING_LEVEL 9  // heading level 1 to 9, 0 means not a heading para

#define PARAINFO_ERROR     -999999

#define UNDO_INSERT        'I'
#define UNDO_OBJECT_INSERT 'O'
#define UNDO_DELETE        'D'
#define UNDO_FONT          'F'
#define UNDO_PARA          'P'
#define UNDO_REPLACE       'R'
#define UNDO_ROW_DEL       'T'
#define UNDO_ROW_INS       'S'
#define UNDO_CELL_DEL      'U'
#define UNDO_CELL_INS      'V'
#define UNDO_FRAME         '1'
#define UNDO_FRAME_LIMITED '2'
#define UNDO_PICT_SIZE     '3'
#define UNDO_TABLE_ATTRIB  '4'
#define UNDO_TAG_INSERT    '5'
#define UNDO_TAG_DELETE    '6'
#define UNDO_LIST_LEVEL    '7'
#define UNDO_NEW_STYLE     '8'  // Win32 specic: new stylesheet item
#define UNDO_EDIT_STYLE    '9'  // win32 specific


#define UOP_OTHER       0
#define UOP_NONE        1
#define UOP_INSERT_TEXT 2
#define UOP_DELETE_TEXT 3
#define UOP_FORMAT_TEXT 4
#define UOP_INSERT_STYLE 5
#define UOP_DELETE_STYLE 6
#define UOP_STYLE_ATTRIB 7
#define UOP_STYLE        8
#define UOP_INSERT_IMAGE 9
#define UOP_DELETE_IMAGE 10
#define UOP_IMAGE_ATTRIB 11
#define UOP_CHAR_FMT     12
#define UOP_PARA_FMT     13
#define UOP_BLT_NBR      14
#define UOP_TEXT_FIELD_ATTRIB 15
#define UOP_INSERT_TEXT_FIELD 16
#define UOP_DELETE_TEXT_FIELD 17
#define UOP_DELETE_REPLACE    18


#define SWRAP_NO_WRAP      1
#define SWRAP_AROUND       2
#define SWRAP_IGNORE       3
#define SWRAP_TIGHT        4
#define SWRAP_THRU         5    // works like SWRAP_AROUND for SHPTYPE_TEXT_BOX, and like SWRAP_IGNORE for other shapes

#define SHPTYPE_NONE       -1
#define SHPTYPE_ROUND_RECT 2
#define SHPTYPE_ELLIPSE    3
#define SHPTYPE_DIAMOND    4             // implemented as flow char decision
#define SHPTYPE_OCTAGON    10
#define SHPTYPE_ARROW      13
#define SHPTYPE_LINE       20
#define SHPTYPE_CAN        22
#define SHPTYPE_RECT       1
#define SHPTYPE_BENT_CONNECT3 34         // bent connector #3
#define SHPTYPE_PICT_FRAME 75
#define SHPTYPE_LBRACKET   85            // left bracket
#define SHPTYPE_RBRACKET   86            // right bracket
#define SHPTYPE_CHART_DECISION 110       // flow char decision
#define SHPTYPE_RR_CALLOUT 62            // round rect callout
#define SHPTYPE_CHART_ALT_PROCESS 176    // flow chart alternate process, draws like round rectangle
#define SHPTYPE_CHART_ONLINE_STORAGE 130 // flow chart - online storage
#define SHPTYPE_CHART_MAG_DRUM    133    // flow chart magnetic drum
#define SHPTYPE_CHART_PUNCHED_CARD 121   // flow-chart punched card
#define SHPTYPE_OCX        201
#define SHPTYPE_TEXT_BOX   202

#define SSINFO_NAME        1
#define SSINFO_CHAR_SPACE  2
#define SSINFO_CHAR_OFFSET 3
#define SSINFO_NEXT        4
#define SSINFO_OUTLINE_LEVEL 5
#define SSINFO_BASED_ON    6

#define INFO_TITLE         0
#define INFO_SUBJECT       1
#define INFO_AUTHOR        2
#define INFO_MANAGER       3
#define INFO_COMPANY       4
#define INFO_OPERATOR      5
#define INFO_CATEGORY      6
#define INFO_KEYWORDS      7
#define INFO_COMMENT       8
#define INFO_PWHASH        9     // 20130722: changed from INFO_DOCCOMM to INFO_PWHASH
#define INFO_HLINKBASE    10
#define INFO_SSUSER       11     // 20160525
#define INFO_MAX          12     // 20080519: ReadCfmt needs to be changed if INFO_MAX is incremented

#define TEXT_HORZ          0
#define TEXT_TOP_TO_BOT    1
#define TEXT_BOT_TO_TOP    2

#define TP_TOTAL_LINES     1
#define TP_TOTAL_PFMTS     2
#define TP_TOTAL_FONTS     3
#define TP_TOTAL_STYLES    4
#define TP_TOTAL_PAGES     5
#define TP_TOTAL_PARA_FRAMES 6
#define TP_TOTAL_CHAR_TAGS 7
#define TP_TOTAL_IMAGE_MAPS 8
#define TP_TOTAL_BLTS      9
#define TP_TOTAL_LISTS     10
#define TP_TOTAL_LIST_OR   11
#define TP_TOTAL_TABS      12
#define TP_TOTAL_TABLE_ROWS 13
#define TP_TOTAL_CELLS     14
#define TP_TOTAL_SECTS     15
#define TP_CUR_LINE        16
#define TP_CUR_COL         17
#define TP_CUR_SECT        18
#define TP_SELECTION_TYPE  19
#define TP_SELECTION_START_LINE  20
#define TP_SELECTION_START_COL   21
#define TP_SELECTION_END_LINE    22
#define TP_SELECTION_END_COL     23
#define TP_WATERMARK_WASH        24
#define TP_WATERMARK_PICT        25
#define TP_PAGE_BK_COLOR         26
#define TP_TOTAL_REVIEWERS       27
#define TP_MOUSE_ON_TEXT_LINE    28
#define TP_WIN_ORG_Y             30

#define TP_MOUSE_FIRST           31
#define TP_MOUSE_X               31
#define TP_MOUSE_Y               32
#define TP_MOUSE_LINE            33
#define TP_MOUSE_COL             34
#define TP_MOUSE_FONT_ID         35
#define TP_MOUSE_PICT_ID         36
#define TP_MOUSE_FIELD_ID        37
#define TP_MOUSE_FRAME_ID        38    // paragraph frame id
#define TP_MOUSE_COMMENT_ID      39     // get the comment under the mouse, 20180802
#define TP_MOUSE_LAST            39

#define TP_DEF_CHARSET           60
#define TP_TOTAL_CHARS           61
#define TP_PREVIEW_ZOOM_PCT      62
#define TP_TABLE_COLS_SELECTED   63
#define TP_TABLE_ROWS_SELECTED   64
#define TP_HAS_TRACK_CHANGES     65    // return true if the document contains unaccepted track-chnages
#define TP_CUR_REV_ID            66    // current reviever id if track-change is enabled
#define TP_INIT_LIST_INDENT      67     // initial list indent
#define TP_FIXED_BULLET_SIZE     68     // fixed bullet size in twips
#define TP_DRAGGING_TEXT         69     // true when the text is being dragged
#define TP_SHOW_HIDDEN_TEXT      70     // true when showing hidden text
#define TP_TEXT_DEF_BK_COLOR     71
#define TP_JUST_LINE_BREAK_LINE  72
#define TP_UNDO_REF              73
#define TP_EMF_SCALE_PCT         74
#define TP_USE_W2016_FEATURES    76     // 20190305: use Word 2016 features

#define TPS_INIT_LIST_INDENT     1     // initial list indent
#define TPS_FIXED_BULLET_SIZE    2     // fixed bullet size in twips
#define TPS_JUST_LINE_BREAK_LINE 3
#define TPS_PAGE_NUM_FORMAT      4     // page number format string, example:  '\* GB4' for the chinese page numbers
#define TPS_TABLE_GRID_COLOR     5     // table grid color
#define TPS_EMF_SCALE_PCT        6
#define TPS_USE_W2016_FEATURES   8     // 20190305: use Word 2016 features

#define CP_FIX_WIDTH       0        // fix cell width
#define CP_PARENT_CELL     1        // parent cell id
#define CP_LEVEL           2        // nesting level
#define CP_TEXT_ROTATION   3        // text rotation constants
#define CP_WIDTH           4        // cell width
#define CP_ROW             5        // id of the row which includes the cell
#define CP_ID              6        // curent cell id
#define CP_NEXT            7        // next cell id
#define CP_PREV            8        // previous cell id
#define CP_ROW_WIDTH       9        // width of the row containing the cell
#define CP_PAD_LEFT       10        // left padding in twips
#define CP_PAD_RIGHT      11        // right padding in twips
#define CP_PAD_TOP        12        // top padding in twips
#define CP_PAD_BOT        13        // bottom padding in twips
#define CP_TABLE_PICT     14        // table picture id
#define CP_CELL_PICT      15        // cell picture id
#define CP_TEXT_ANGLE     16        // text angle
#define CP_FLAGS          17        // flags
#define CP_MARGIN         18        // cell margin
#define CP_ROW_SPAN       19        // row span
#define CP_COL_SPAN       20        // col span

#define CP_ERROR         -999999    // error code returned by TerGetCellParam2 function

#define RP_FIRST_CELL     0         // first cell id for the row
#define RP_LAST_CELL      1         // last cell id for the row
#define RP_TOP_ROW_HT     2         // height of the top part of a split row
#define RP_BOT_ROW_HT     3         // height of the top part of a split row
#define RP_FLAGS          4         // row flags
#define RP_ROW_ID         5         // row id
#define RP_INDENT         6         // row indent
#define RP_CELL_MARGIN    7         // default cell margin
#define RP_MIN_HEIGHT     8         // minimum height
#define RP_FLOW           9         // FLOW_ constant
#define RP_LEFT_PAD      10         // left pad
#define RP_RIGHT_PAD     11         // right pad
#define RP_TOP_PAD       12         // top pad
#define RP_BOT_PAD       13         // bot pad
#define RP_PREV_ROW      14         // previous row id
#define RP_NEXT_ROW      15         // next row id


#define FP_TEXT_ROTATION   1        // text rotation constant
#define FP_WRAP_STYLE      2        // text wrap style
#define FP_YBASE           3        // BASE_ constants
#define FP_FILL_PATTERN    4        // fill pattern
#define FP_TEXT_DIST       5        // text distance from frame
#define FP_ARROW_TYPE      6        // PF2_START_ARROW, PF2_END_ARROW, or 0
#define FP_X               7        // x position in current base positioning - same as ParaFrame[].x
#define FP_Y               8        // y position in current base positioning - same as ParaFrame[].y
#define FP_ZORDER          9        // Z Order
#define FP_PICT           10        // picture id for the frame
#define FP_SHAPE_TYPE     11        // shape type
#define FP_FLAGS          12        // frame flags PARA_FRAME_ constants
#define FP_FLAGS2         13        // frame flags PF2_ constants
#define FP_PAGE_NO        14        // page number
#define FP_LINE_THICKNESS 15        // line thickness twips
#define FP_LINE_COLOR     16        // line color
#define FP_FILL_COLOR     17        // fill color
#define FP_WIDTH          18        // width of the object in twips
#define FP_HEIGHT         19        // height in twips
#define FP_LINE_TYPE      20        // height in twips
#define FP_CANVAS         21        // canvas para-frame id
#define FP_SIDE_MARGIN    22        // side margin value
#define FP_TOP_MARGIN     23        // top margin value
#define FP_BOT_MARGIN     24        // bottom margin value
#define FP_ERROR        9999        // error return by the TerGetFrameParam function

#define SP_FLAGS           1        // text rotation constant
#define SP_LINE_STEP       2        // line step when section line numbering is enabled
#define SP_BORDER_TYPE     3        // border type
#define SP_BORDER_WIDTH    4        // border width
#define SP_BORDER_SPACE    5        // border space
#define SP_BORDER_COLOR    6        // border color
#define SP_FIRST_PAGE_HDR_HT  7     // first page header height
#define SP_FIRST_PAGE_BODY_HT 8     // first page body height
#define SP_FIRST_PAGE_FTR_HT  9     // first page header height
#define SP_IN_USE            10     // in-use flag
#define SP_PREV_SECT         11     // previous section id
#define SP_NEXT_SECT         12     // next section id
#define SP_AUX_ID            13     // aux id
#define SP_LINE_BET_COL      14     // line between columns
#define SP_LEFT_MARG         15     // left margin
#define SP_RIGHT_MARG        16     // right margin
#define SP_TOP_MARG          17     // top margin
#define SP_BOT_MARG          18     // bottom margin
#define SP_HDR_MARG          19     // distance from the top of the page where the page header begins
#define SP_FTR_MARG          20     // distance from the bottom of the page where the page footer begins
#define SP_GUTTER_MARG       21     // gutter margin
#define SP_NUM_COLS          22     // space number of columns, 20141125
#define SP_COL_SPACE         23     // space between the columns in twips, 20141125

#define PP_PAGE_HDR_HT  1           // page header height
#define PP_PAGE_BODY_HT 2           // page body height
#define PP_PAGE_FTR_HT  3           // page header height
#define PP_DISP_NO      4           // page number for display
#define PP_NO           5           // current page number
#define PP_TOP_SECT     6           // section for the top of the page
#define PP_FIRST_LINE   7           // first line of the page
#define PP_LAST_LINE    8           // last line of the page
#define PP_FLAGS        9           // page flags
#define PP_PAGE_BODY_AVAIL_HT 10    // available height (in twips) in the body of the page
#define PP_HDR_CHAR           11    // the _CHAR for the applicable header for the page, 0 if no header
#define PP_FTR_CHAR           12    // the _CHAR for the applicable footer for the page, 0 if no footer

#define LP_LINE_FLAGS      1        // line flags LFLAG_
#define LP_LINE_FLAGS2     2        // line flags LFLAG2_
#define LP_LINE_LEN        3        // line length
#define LP_LIST_NBR        4        // list number associate with the line
#define LP_LIST_FONT       5        // font id to print the list
#define LP_CELL_ID         6        // cell id for the line
#define LP_PARA_FRAME_ID   7        // para frame id
#define LP_LIST_ID         8        // list id
#define LP_LIST_OR_ID      9        // list or id
#define LP_LIST_LEVEL     10        // list level
#define LP_LINE_NUM       11        // current line number
#define LP_PARA_MARK      12        // para-mark found at the end of this line
#define LP_LIST_TEXT_WIDTH 13       // width of list text in twips
#define LP_HEIGHT          14       // Line height in twips
#define LP_LIST_BULLET_SYM 15       // list bullet symbol
#define LP_LIST_TEXT       16       // list text (TerGetListParamStr method)
#define LP_PARA_FIRST_LINE 17       // first line for the paragraph which contains the given line
#define LP_PARA_LAST_LINE  18       // last line for the paragraph which contains the given line
#define LP_SECT_ID         19       // section id for the line

#define LP_ERROR        9999        // error return by the TerGetLineParam function

#define STP_AUTHOR         1        // story author
#define STP_AUTH_INIT      2        // story author initials
#define STP_TEXT           3        // story text
#define STP_DATE           4        // date/time of string (returned in a string)
#define STP_RTF_ID         5        // unique RTF id of the story

#define WRAP_OFF           0        // suspend wrapping temporarily
#define WRAP_MIN           1        // re-wrap minimum number of lines
#define WRAP_PARA          2        // re-wrap all lines in the current paragraph
#define WRAP_WIN           3        // re-wrap all lines visible in the current window
#define WRAP_PAGE          4        // wrap a page

#define APPLY_IGNORE       0        // ignore text data
#define APPLY_MOD_CUR_LINE 1        // apply the text data to the current line
#define APPLY_BEF_CUR_LINE 2        // insert after the current line
#define APPLY_AFT_CUR_LINE 3        // insert after the current line

#define SAVE_TER           0        // save in TER format
#define SAVE_TEXT          1        // save in text format
#define SAVE_TEXT_LINES    2        // text format with line breaks
#define SAVE_RTF           3        // save in Rich Text Format
#define SAVE_DEFAULT       4        // save in the format of the input file
#define SAVE_HTML          5        // save in html format, needs HTML add-on to work
#define SAVE_UTEXT         6        // save in the unicode text format
#define SAVE_DOCX          7        // word docx format
#define SAVE_DOC           8        // word doc format

#define ULINE              0x1
#define BOLD               0x2
#define ITALIC             0x4
#define STRIKE             0x8
#define SUPSCR             0x10
#define SUBSCR             0x20
#define HIDDEN             0x40
#define PICT               0x80
#define ULINED             0x100
#define PROTECT            0x200
#define FNOTE              0x400
#define FNOTETEXT          0x800
#define FNOTEREST          0x1000
#define CHAR_BOX           0x2000
#define HLINK              0x4000
#define ENOTETEXT          0x8000   // endnote text
#define CAPS               0x10000
#define SCAPS              0x20000
#define LEFT_LINE          0x40000
#define DOUBLE_STRIKE      0x80000
#define ULINE_DOTTED      0x100000
#define COMMENT           0x200000  // 20110616
#define EMBOSS            0x400000
#define FNOTEAUTO         0x800000    // auto-numberer footnote/endnote
#define STYLE_DEL         0x20000000  // pseudo style bit used by html add-on
#define STYLE_INS         0x40000000  // psuedo style bit used by html add-on


#define SID_NORMAL         -9999     // normal style id (index 0)
#define SID_CUR            -9998     // current style being created

#define FNOTEALL           (FNOTE|FNOTETEXT|FNOTEREST|ENOTETEXT)
#define FNOTENONE          (~((UINT)(FNOTEALL)))

#define DEFAULT_PFMT       0x0

#define CENTER             0x1
#define RIGHT_JUSTIFY      0x2
#define DOUBLE_SPACE       0x4
#define BULLET             0x8
#define PARA_BOX_TOP       0x10
#define PARA_BOX_BOT       0x20
#define PARA_BOX_LEFT      0x40
#define PARA_BOX_RIGHT     0x80
#define PARA_BOX_DOUBLE    0x100
#define PARA_BOX_THICK     0x200
#define PARA_BOX_ATTRIB    0x3F0
#define LEFT               0x400
#define JUSTIFY            0x800
#define PAGE_HDR           0x1000
#define PAGE_FTR           0x2000
#define PAGE_HDR_FTR       0x3000
#define PARA_KEEP          0x4000
#define PARA_KEEP_NEXT     0x8000
#define PARA_BOX_BETWEEN   0x10000
#define AUTO_SPACE_BEFORE  0x20000
#define AUTO_SPACE_AFTER   0x40000
#define HTML_TEMP_PARA     0x80000
#define PARA_CONTEXTUAL_SPACE  0x100000         // no space between the paragraph of the same syle
#define JUSTIFY_DIST           0x200000         // used in conjuction with the JUSTIFY bit, justifies the last line as well

#define TEXT_VALIGN_BASE   0               // vertical alignment of text in a line, baseline
#define TEXT_VALIGN_TOP    1               // top align
#define TEXT_VALIGN_BOT    2               // bottom align
#define TEXT_VALIGN_CENTER 3               // center align

#define ROWFLAG_HDR        0x4     // header row, 0x1, 0x2, 0x400, 0x800 taken by CENTER,RIGHT_JUSTIFY,LEFT and JUSTIFY
#define ROWFLAG_HAS_SUBTABLE 0x8   // this row contains subtables
#define ROWFLAG_SPLIT      0x10    // this row is split at page break
#define ROWFLAG_KEEP       0x2000  // keep this row in one page
#define ROWFLAG_PREEXIST   0x4000  // this row existed before an RTF read began
#define ROWFLAG_NEW_TABLE  0x8000  // row begins a new table
#define ROWFLAG_RTL        0x10000  // rtl row
#define ROWFLAG_BREAK      0x20000 // break the table at this row for calculating the cell widths
#define ROWFLAG_KEEP_CALC  0x40000 // calculate effective row keep flag during pagination
#define ROWFLAG_AUTO_FIT   0x80000 // auto-fit the cells
#define ROWFLAG_AUTO_WIDTH_RTF 0x100000  // row which has rtf type auto width
#define ROWFLAG_TWIPS_WIDTH    0x200000  // preferred twips twips width specified
#define ROWFLAG_LAST_ROW       0x400000  // last row of a table
#define ROWFLAG_LAYOUT_FIXED   0x800000  // fixed layout as indicated by the html 'table-layout: fixed' property
#define ROWFLAG_HTML_TABLE    0x1000000  // a table read from html
#define ROWFLAG_PCT_WIDTH     0x2000000  // percentage width
#define ROWFLAG_HAD_ZERO_WIDTH_CELL 0x4000000  // this row/table has a zero width cell when reading from xml/rtf
#define ROWFLAG_NO_PREF_WIDTH  0x8000000  // no preference specified for the width
#define ROWFLAG_TFOOT         0x10000000  // html table footer (temporary flag)


#define PARA_BOX           (0xF0|PARA_BOX_BETWEEN)

#define PFLAG_FRAME        0x1     // used only during RTF read
#define PFLAG_CELL         0x2     // used only during RTF read
#define PFLAG_RESERVED1    0x4     // for internal use
#define PFLAG_RESERVED2    0x4     // for internal use

#define PFLAG_NO_WRAP      0x10     // turn-off word wrapping
#define PFLAG_WIDOW        0x20     // Window orphan control
#define PFLAG_PAGE_BREAK   0x40     // page break before the paragraph
#define PFLAG_ENDNOTE      0x80     // endnote paragraph
#define PFLAG_NO_NUM_LIST  0x100    // this paragraph uses a no-bullet list
#define PFLAG_NO_SNAP_TO_GRID 0x200 // don't snap the lines in the para to the section line grid

#define FFLAG_ITALIC_OH     0x1
#define FFLAG_OCX_SRV_ERROR 0x2
#define FFLAG_CTL_VISIBLE   0x4
#define FFLAG_CTL_DRAWN     0x8
#define FFLAG_DRAW_PENDING  0x10    // drawing of this item pending
#define FFLAG_SEL           0x20    // temporary selection flag
#define FFLAG_PICT_DRAWN    0x40    // picture visible on the screen
#define FFLAG_HIDDEN_INFO   0x80    // hidden information is active for a hidden font
#define FFLAG_USER          0x100   // font created using TerCreateFont, not subject to reclaiming of resources
#define FFLAG_SCAPS         0x200   // size reduced for scaps adjustment
#define FFLAG_AUTO_SPELL    0x400
#define FFLAG_EQ_OBJECT     0x800   // denotes an equation object
#define FFLAG_RESIZED       0x1000  // ole object resized by the user
#define FFLAG_CHECKED       0x2000  // temporary font id 'checked' flag used by locate function
#define FFLAG_WASHED        0x4000  // true if a picture is washed
#define FFLAG_FIELD_LOCKED  0x8000  // field locked, 20130702
#define FFLAG_FORCE_RTLCH   0x10000 // override to rtlch
#define FFLAG_FORCE_LTRCH   0x20000 // override to ltrch
#define FFLAG_BAD_FONT      0x40000  // bad printer font
#define FFLAG_PREEXIST      0x80000  // true for the picture before the most recent paste operation

#define TAB_LEFT            0
#define TAB_RIGHT           1
#define TAB_CENTER          2
#define TAB_DECIMAL         3
#define TAB_CLEAR           4        // clear tab at this location, used in para styles

#define TAB_NONE            0         // only one value applicable
#define TAB_DOT             1
#define TAB_HYPH            2
#define TAB_ULINE           4

#define CLR_WHITE          0xFFFFFF  // white color
#define CLR_WHITE_FORCE    0xFEFEFE  // white color to be enforced
#define CLR_WHITE_AUTO     0xFDFDFD  // white color to be enforced
#define CLR_BLACK          0x0       // black color
#define CLR_AUTO           0x010101  // auto text color

#define TER_WORD_WRAP       0x1        // TER custom control styles
#define TER_PRINT_VIEW      0x2
#define TER_HSCROLL         0x4
#define TER_VSCROLL         0x8
#define TER_SHOW_STATUS     0x10
#define TER_SHOW_RULER      0x20
#define TER_BORDER_MARGIN   0x40
#define TER_OUTPUT_RTF      0x80
#define TER_USE_PARAMS      0x100
#define TER_READ_ONLY       0x200
#define TER_PAGE_MODE       0x400
#define TER_SHOW_TOOLBAR    0x800
#define TER_INVISIBLE       0x1000
#define TER_FITTED_VIEW     0x2000
#define TER_DESIGN_MODE     0x4000
#define TER_USE_EXT_STYLES  0x8000    // extended styles (TEREX_ style bits) are passed using the lpParam parameter of the CreateWindow SDK function
#define TER_NUM_STYLES      16

// list of extended styles - passed using the lpParam parameter of the CreateWindow SDK function - also set the TER_USE_EXT_STYLES bit
#define TEREX_SHOW_VRULER   0x1

#define SRCH_SCROLL         0x1
#define SRCH_SEARCH         0x2
#define SRCH_REPLACE        0x4
#define SRCH_RETRIEVE       0x8
#define SRCH_CASE           0x10
#define SRCH_WORD           0x20
#define SRCH_SKIP_HIDDEN_TEXT 0x40
#define SRCH_BACK           0x80
#define SRCH_NO_REPLACE_PROT_TEXT 0x100
#define SRCH_IS_MBCS        0x200     // when the srch string contains mbcs characters

#define ALIGN_BOT            0        // align picture bottom to base line
#define ALIGN_MIDDLE         1        // center picture vertically to baseline
#define ALIGN_TOP            2        // align picture top to base line

#define PFRAME_NONE          0        // not a picture frame
#define PFRAME_LEFT          1        // left alignment picture frame
#define PFRAME_RIGHT         2        // right alignment picture frame
#define PFRAME_FLOAT         3        // not left or right aligned frame

#define POS_BEG              0        // position at the beginning of text
#define POS_END              1        // position at the end of text

#define DOB_TEXT_BOX         1        // text box
#define DOB_RECT             2        // rectangle
#define DOB_LINE             3        // line

#define DOB_LINE_NONE        0        // no line or border
#define DOB_LINE_SOLID       1        // solid line
#define DOB_LINE_DOTTED      2        // dotted line

#define SSTYPE_CHAR        1          // character type style sheet
#define SSTYPE_PARA        2          // paragraph type style sheet

#define BASE_PAGE      0              // object y position relative to the top of the page
#define BASE_MARG      1              // object y position relative to the top margin
#define BASE_PARA      2              // object y position relative to the anchor paragraph

#define WINDOW_EXT   250              // window extension to be used before playing a TER metafile

#define SEL_CELLS      1
#define SEL_COLS       2
#define SEL_ROWS       3
#define SEL_ALL        4

#define BKPICT_STRETCH 1
#define BKPICT_TILE    2

#define RHDR_CHAR           2        // right page header character
#define RFTR_CHAR           3        // right page footer character
#define ZWNJ_CHAR           4        // zero-width non-joiner - used to unligate
#define HPARA_CHAR          5        // hidden para character
#define HYPH_CHAR           6        // optional hyphen
#define LHDR_CHAR           7        // left page header character
#define LFTR_CHAR           8        // left page footer character
#define PAGE_CHAR           12       // new page character
#define NBSPACE_CHAR        14       // non-breaking space character
#define LINE_CHAR           15       // line break character
#define FTR_CHAR            16       // page footer begin/end char
#define HDR_CHAR            17       // page header begin/end char
#define ROW_CHAR            18       // new table row character
#define CELL_CHAR           19       // new table cell character
#define SECT_CHAR           20       // new section character
#define PARA_CHAR           21       // new paragraph character
#define COL_CHAR            22       // new column character
#define NBDASH_CHAR         23       // non-breaking dash character
#define PICT_CHAR           24       // picture holder charcter
#define FHDR_CHAR           25       // first page header character
#define FFTR_CHAR           26       // first page footer character
#define HIDDEN_CHAR         28       // invisible character
#define LAST_CTRL_CHAR      28       // last control character

#define CHARID_CLEAR_LEFT   1        // clear-left
#define CHARID_CLEAR_RIGHT  2        // clear-right
#define CHARID_CLEAR_ALL    3        // clear-all


#define BRDRTYPE_SINGLE           0
#define BRDRTYPE_DBL              1
#define BRDRTYPE_TRIPLE           2
#define BRDRTYPE_SHADOW           3
#define BRDRTYPE_THICK_THIN       4
#define BRDRTYPE_THICK_THIN_THICK 5
#define BRDRTYPE_THIN_THICK       6
#define BRDRTYPE_THIN_THICK_THIN  7
#define BRDRTYPE_NONE             8
#define BRDRTYPE_THICK            9
#define BRDRTYPE_LAST             9

#define TFLAG_RESIZE_BITMAP      0x1    // resize bitmap when inserted in a frame
#define TFLAG_METRIC             0x2    // show ruler in cm
#define TFLAG_RETURN_MSG_ID      0x4    // saves the msg ids to return to the user program.
#define TFLAG_APPLY_PRT_ORIENT   0x8    // apply current printer orientation to the document
#define TFLAG_APPLY_PRT_PROPS    0x8    // renamed - apply current printer orientation to the document
#define TFLAG_IGNORE_PICT_LINK   0x10   // ignore picture link names for writing to the disk
#define TFLAG_DISABLE_ACCEL      0x20   // Disable the accelerators
#define TFLAG_USE_NEXT_ID        0x40   // use next id for cell,row, etc.
#define TFLAG_SHOW_CARET         0x80   // display cater even in the read-only mode
#define TFLAG_UNPROTECTED_DEL    0x100  // unprotected block deletes
#define TFLAG_NO_HOUR_GLASS      0x200  // don't display hour glass cursor
#define TFLAG_NO_CHILD_TOP       0x400  // don't bring child (TER as child) to top
#define TFLAG_NO_WRAP            0x800  // to temporarily turnoff word wrapping
#define TFLAG_ACTIVATE_MDI_CHILD 0x1000 // explicity activate the current MDI child when TER gains focus
#define TFLAG_COMP_WORD97        0x2000 // follow word 97 compatible behavior
#define TFLAG_EXCLUDE_HIDDEN_SEL 0x4000 // exclude hidden text from selection
#define TFLAG_AUTO_VSCROLL_BAR   0x8000 // automatic vertical scroll bar
#define TFLAG_NO_PALETTE         0x10000L // do not use palettes
#define TFLAG_KEEP_PICT_ASPECT   0x20000L // maintain the picture aspect ration on resize
#define TFLAG_KEEP_FRAME_ASPECT  0x40000L // maintain the frame aspect ration on resize
#define TFLAG_PICT_IN_FRAME      0x80000L // insert picture in a frame
#define TFLAG_NO_PRINTER         0x100000L // don't open any printer
#define TFLAG_NO_DRAG_TEXT       0x200000L // disable dragging of text
#define TFLAG_NO_EDIT_OLE        0x400000L // disable editing of ole objects
#define TFLAG_BETTER_256         0x800000L // better 256 color pallet at the cost of picture loading performance
#define TFLAG_NO_EDIT_PICT       0x1000000L // disable editing of picture objects
#define TFLAG_SHOW_BREAKS        0x2000000L // show break lines even in the ReadOnly mode
#define TFLAG_SELECT_FULL_HLINK  0x4000000L // select hyperlink completely
#define TFLAG_BUF_DISP           0x8000000L // do display through a memory buffer
#define TFLAG_NO_OLE             0x10000000L // disable ole
#define TFLAG_ROW_PASTE          0x20000000L // enable table row pasting
#define TFLAG_NO_AUTO_FULL_CELL_SEL 0x40000000L // do not automatically select the cell marker
#define TFLAG_SWAP_DECIMAL       0x80000000L // swap decimal/comma

#define TFLAG2_COMP_WPF          0x1         // follow word perfect compatible behavior
#define TFLAG2_RETAIN_BKND       0x2         // retain the background
#define TFLAG2_USE_PAL_FOR_TEXT  0x4         // use the current pallet to draw the text
#define TFLAG2_CAN_MERGE_PROT_TEXT     0x8   // can merge protected text
#define TFLAG2_BKPICT_OVER_PAGE_BORDER 0x10  // write background picture over the frame border
#define TFLAG2_XPARENT_WRITE     0x20        // write transparently to the screen
#define TFLAG2_NO_CARET          0x40        // don't show caret even in the edit mode
#define TFLAG2_SHOW_SECT_PAGE_NO 0x80        // show the section page numbers on the status bar, instead of the sequential page numbers
#define TFLAG2_NO_CURSOR_CHANGE  0x100       // do not change cursor over the editor
#define TFLAG2_VERT_THUMB_TRACK  0x200       // update screen during thumbtracking
#define TFLAG2_NO_AUTO_REPAGE    0x400       // do not allow automatic repagination
#define TFLAG2_NO_BKP_FILE       0x800       // don't create the backup file when saving
#define TFLAG2_SELECT_FRAME_PICT 0x1000      // select the frame picture instead of the frame when clicked on a frame with a picture.
#define TFLAG2_HIDE_PAGE_BREAK   0x2000      // don't display the page break line
#define TFLAG2_PROTECT_FORMAT    0x4000      // protect the format of the protected text
#define TFLAG2_NO_HIDDEN_RTF_TEXT 0x8000     // don't save hidden text to the rtf file
#define TFLAG2_NO_SHADE_FIELD_TEXT 0x10000   // don't shade the field text
#define TFLAG2_IGNORE_TIMER      0x20000     // ignore timer
#define TFLAG2_NO_AUTO_HDR_FTR   0x40000     // do not diplay hdr/footer automatically at file input or paste
#define TFLAG2_WRITE_FIRST_RTF_COLOR 0x80000 // write the first rtf color
#define TFLAG2_FULL_REPAINT      0x100000    // upgarde line painting to full painting
#define TFLAG2_KEEP_PRINTER_OPEN 0x200000    // keep the printer open after the last TE window is closed
#define TFLAG2_ALT_PARA_SYM      0x400000    // display alternate paragraph symbol
#define TFLAG2_ALT_LINE_SYM      0x800000    // display alternate line break symbol
#define TFLAG2_NO_LINE_FITTING   0x1000000   // don't attempt to fit inter screen lines to printer line length
#define TFLAG2_NO_PRT_CANCEL_DLG 0x2000000   // don't show printing cancel dialog box
#define TFLAG2_INDENT_FRAMES     0x4000000   // indent the frames aint with the text
#define TFLAG2_INDENT_TABLES     0x8000000   // indent the table rows aint with the text
#define TFLAG2_NO_ADJUST_CURSOR  0x10000000  // do not adjust cursor for the hidden text
#define TFLAG2_CURSOR_BEF_HIDDEN 0x20000000  // when adjusting cursor, place it before the hidden text
#define TFLAG2_NO_CURSOR_ON_PROTECT 0x40000000  // do not let the cursor stay on the hidden text

#define TFLAG3_WRAP_SPACES       0x1         // wrapp additional spaces to the next line.
#define TFLAG3_NO_EDIT_TABLE_COL 0x2         // do not allow table column width/indentation editing using mouse
#define TFLAG3_TABLE_STATUS_LINE 0x4         // modify the status lines when tables are encountered
#define TFLAG3_PLAIN_TABLE_BORDER 0x8        // no 3d table border for the HTML tables
#define TFLAG3_GRAY_READ_ONLY    0x10        // gray the control in the read only mode
#define TFLAG3_CURSOR_IN_CELL    0x20        // restrict the cursor to current cell
#define TFLAG3_EXACT_CELL_WIDTH  0x40        // strictly honor exact cell width for the HTML table
#define TFLAG3_NO_SCROLL         0x80        // display only the top of the document
#define TFLAG3_NO_FULL_CELL_COPY 0x100       // do not copy the cell marker when only one cell selected
#define TFLAG3_HTML_CONT_TABLE   0x200       // write two contiguous rows as one table
#define TFLAG3_SELECT_FIRST_FIELD 0x400      // select first form field when the document is open
#define TFLAG3_MULTIPLE_RTF_GROUPS 0x800     // allow multiple RTF groups
#define TFLAG3_OLD_WORD_FORMAT   0x1000      // write old word format rtf syntax
#define TFLAG3_EMBEDDED_TABLES   0x2000      // allow embedded tables
#define TFLAG3_DATA_FIELD_INPUT  0x4000      // data field input mode
#define TFLAG3_GET_BUF_HDR_FTR   0x8000      // get header/footer from rtf buffer insertion if hdr/ftr does not exist in the document
#define TFLAG3_HTML_READ         0x10000     // in html read
#define TFLAG3_NO_RTF_BKND_COLOR 0x20000     // do not read/write background color to the RTF file
#define TFLAG3_NO_SAVE_UNDO      0x40000     // do not save for undo
#define TFLAG3_LARGE_PARA_BORDER 0x80000     // paragraph border includes the paragraph space bef/aft
#define TFLAG3_STYLES_ON_TOOLBAR 0x100000    // enable style sheet selection on the toolbar
#define TFLAG3_SHOW_FRAMES       0x200000    // debug tool - show frame borders
#define TFLAG3_LINE_SCROLL       0x400000    // scroll one line at a time on arrow up/down
#define TFLAG3_PRINT_BKND_PICT   0x800000    // print background picture
#define TFLAG3_PASTE_RTF_CODE    0x1000000   // paste rtf codes in text format
#define TFLAG3_CLIP_CELL_OVERFLOW 0x2000000  // clip the text that does not fit in the cell (during printing)
#define TFLAG3_EXACT_SCREEN_FONT 0x4000000   // create exact screen font
#define TFLAG3_ZERO_CELL_HEIGHT  0x8000000   // set zero height for empty cells
#define TFLAG3_READ_PNG          0x10000000  // read png from the rtf file
#define TFLAG3_NO_TEXT_COLOR_ADJ 0x20000000  // don't adjust text color for the background color
#define TFLAG3_NO_MOUSE_SEL      0x40000000 // disable text selection by mouse

#define TFLAG4_COUNT_PCHAR_AS_CRLF  0x1         // count para char as two character in the the absolute to row/col conversion
#define TFLAG4_SKIP_PROT_TEXT       0x2         // do not allow the cussor on the protected text
#define TFLAG4_HIDE_HIDDEN_PARA_MARK 0x4        // hide the paragraph marker which has hidden attribute
#define TFLAG4_READONLY_CONTROLS    0x8         // disable embedded controls in TerSetReadOnly function
#define TFLAG4_NO_REPAGINATE        0x10        // hold repagination
#define TFLAG4_SMOOTH_SCROLL        0x20        // smooth scrolling on page boundaries during text selection using mouse
#define TFLAG4_NO_BUFFERED_SCROLL   0x40        // disable buffered scrolling
#define TFLAG4_TEXT_HIDDEN          0x80        // change the hyperlink format to text followed by hidden code
#define TFLAG4_AUTO_SPELL          0x100        // turn-on the auto speller feature
#define TFLAG4_BINARY_RTF_PICT     0x200        // write rtf pictures in the binary format
#define TFLAG4_UNDO_WINDOW_OVERFLOW 0x400       // undo the previous insertion/replace function if text overflows the window
#define TFLAG4_IME_UNICODE         0x800        // convert dbcs characters in IME to unicode
#define TFLAG4_MOD_END_MARK_FONT   0x1000       // allow deletion of end marker
#define TFLAG4_ONE_ROW_TOOLBAR     0x2000       // use only the second row of the toolbar
#define TFLAG4_NO_OLE_DROP         0x4000       // no ole drop
#define TFLAG4_REPORT_EASE_MODE    0x8000       // being access by ReportEase
#define TFLAG4_ALWAYS_INVOKE_OLE   0x10000      // allow editing of ole objects in read-only mode as well.
#define TFLAG4_DISABLE_DATE_UPDATE 0x20000      // Diable updating of date
#define TFLAG4_SAVE_BMP_AS_PNG     0x40000      // save bmp as png
#define TFLAG4_SAVE_SHAPE_WITH_DRAW_OBJECT 0x80000 // save shape oject with drawing object
#define TFLAG4_HTML_INPUT          0x100000     // the input is in the html format
#define TFLAG4_NO_DRAG_PROT_TEXT   0x200000     // do not allow drag/drop of protected text.
#define TFLAG4_FULL_DRAG_PROT_TEXT 0x400000     // allow full drag/drop of protected text.
#define TFLAG4_NO_MERGE_TABLE      0x800000     // do not allow deletion of paramarker before the table
#define TFLAG4_NO_TOC_UPDATE       0x1000000    // do not update table of contents
#define TFLAG4_NO_RESET_DC         0x2000000    // do not call ResetDC for printing - some fax/printing drivers do not handle ReestDC properly
#define TFLAG4_NO_SHARE_BORDER     0x4000000    // do not share cell borders
#define TFLAG4_ADJ_LEFT_TABLE_COL  0x8000000    // Adjust only the left column of the table
#define TFLAG4_DONT_FIX_NEG_INDENT 0x10000000   // Do not provide fix for negative indentation
#define TFLAG4_PASTE_LAST_PARA_PROP 0x20000000   // apply last paragraph properties from the rtf paste to an empty paragrapy
#define TFLAG4_PRINT_WMF_AS_BMP    0x40000000   // print the metafile as bmp

#define TFLAG5_NO_EXT_DROP         0x1          // do not allow dropping of external files
#define TFLAG5_GROUP_UNDO          0x2          // group all opeations in one undo
#define TFLAG5_NO_EXACT_ROW_HEIGHT 0x4          // translate the exact row height to 'minmum row height' during rtf read
#define TFLAG5_RTL_CURSOR          0x8          // reverse the behavior of left and right cursor keys
#define TFLAG5_NO_KB_SEL           0x10         // no text selection using keyboard
#define TFLAG5_WRITE_DOB           0x20         // write the drawing objects in the old format
#define TFLAG5_NO_OBJ_IN_STATUS_LINE 0x40       // do not count object when dislaying the status lines
#define TFLAG5_NO_CLEAR_SPL_HIST   0x80         // do not clear spell-checking history buffer between the sessions
#define TFLAG5_NO_NORMALIZE_FNOTE  0x100        // do not adjust block to fully contain the footnote
#define TFLAG5_INPUT_TO_UNICODE    0x200        // convert user-input or rtf input text to unicode
#define TFLAG5_NO_NORMALIZE_FIELD  0x400        // do not adjust block to fully contain the data field
#define TFLAG5_BEF_AND_AFT_HIDDEN  0x800        // allow cursor on the first hidden character and after the hidden text
#define TFLAG5_NO_DRAW_IMAGE       0x1000       // disable the TerDrawImage function.
#define TFLAG5_SHOW_PAGE_SETUP     0x2000       // show page-setup instead of print-setup in the printer-setup dialog
#define TFLAG5_FULL_REPAGINATE     0x4000       // fully repaginate the document inthe beginning irrespective of the size of the document
#define TFLAG5_PNG_RGB             0x8000       // save pictures in higher quality (RGB)
#define TFLAG5_NO_SHOW_SPACE_SYM  0x10000       // do not show the space symbol when ShowParaMark is turned on
#define TFLAG5_OLD_HLINK          0x20000       // support old style hyperlink
#define TFLAG5_NO_DRAG_ROW_LINE   0x40000       // do not allow the dragging of the row line to resize the row height
#define TFLAG5_NO_SHARE           0x80000       // no share resources
#define TFLAG5_SHOW_PAGE_BREAK    0x100000      // show page break all the time
#define TFLAG5_VARIABLE_PAGE_SIZE 0x200000      // Variable page size
#define TFLAG5_SAVE_PICT_AS_WMF   0x400000      // save png, jpg, gif as wmf for compatibility with older RTF readers
#define TFLAG5_NO_DRAG_CELL_LINE  0x800000      // do not allow the dragging of the cell divider line to resize the cell width and row indentation
#define TFLAG5_RULER_INDENT_FIXED 0x1000000     // apply fix indentation when the ruler indentation marks are moved
#define TFLAG5_TOP_ROW_TOOLBAR    0x2000000     // display only the top row of the toolbar
#define TFLAG5_NO_ADJ_FOR_TABLE   0x4000000     // do not adjust the selection for table
#define TFLAG5_UNLIMITED_OLE_SPACE 0x8000000    // provide for unlimited ole object space
#define TFLAG5_OLD_RULER           0x10000000   // use the old ruler
#define TFLAG5_FRAME_TEXT_ONLY     0x20000000   // write frame text only without the frame definition
#define TFLAG5_PROTECT_DATA_FIELD  0x40000000   // protect data field

#define TFLAG6_USE_PEN_FOR_BORDER  0x1          // use pen for frame border drawing during printing
#define TFLAG6_WRITE_DBCS          0x2          // write dbcs characters for the unicode character in the RTF file
#define TFLAG6_WRITE_DEFAULT_COLOR 0x4          // write the default color for the first color
#define TFLAG6_HI_RES              0x8          // use high resolutinon for font creation and disable the printer
#define TFLAG6_DONT_WRITE_PICT_PATH 0x10        // do not write picture path when writingh out linked pictures
#define TFLAG6_DONT_PROCESS_TAB    0x20         // this flags stops the processing of the tab key
#define TFLAG6_SHOW_PICT_IN_PIXEL_SIZE 0x40     // display picture in real pixel sizehttps://www.mapdinc.net/webte.aspx
#define TFLAG6_DONT_PROCESS_BULLET_KEYS 0x80    // do not use enter/tab/backtab keys for bullet processing
#define TFLAG6_XLATE_UNICODE       0x100        // do unicode translation, useful when the langauge does not tranlate to single byte character set, such as Hinde, Tamil
#define TFLAG6_IN_TEST_MODE      0x200          // in test mode
#define TFLAG6_IN_PLACE_ACTIVATE   0x400        // activate ole objects in-place
#define TFLAG6_ALLOW_CELL_OVERFLOW 0x800        // allow the excess cell text to overflow the cell
#define TFLAG6_INSERT_DROP_PICT_AS_LINK 0x1000  // link to the dropped picture files (instead of embedding it)
#define TFLAG6_WRAP_AT_WINDOW_WIDTH 0x2000      // wrap the text at window width - applicable to PageMode only (not fitted view)
#define TFLAG6_SAVE_TEXT_BK_COLOR   0x4000      // save text background color (TextDefBkColor) to the rtf file.
#define TFLAG6_LIST_TO_TEXT_IN_HTML 0x8000      // convert list to text while saving to the html format
#define TFLAG6_SUPPORT_DRAGON_SPEECH 0x10000    // enable use of Dragon speech library
#define TFLAG6_NO_LINK_MSG          0x20000     // do not display message when mouse hovers overs a text line
#define TFLAG6_NO_TRACK_MSG         0x40000     // do not display a message when mouse hovers over a track-change text
#define TFLAG6_OLE_DROP_SOURCE      0x80000     // use ole DropSource when dragging TE text
#define TFLAG6_CENTER_DLGS_ON_SCR  0x100000     // center the dialog boxes on the screen
#define TFLAG6_PRINT_EMF_AS_BMP    0x200000     // print the metafile as bmp
#define TFLAG6_PASTE_UNICODE       0x400000     // try CF_TEXT first as CF_UNICODE text
#define TFLAG6_ALT_UNI_CHARWIDTH   0x800000     // alternate (faster) way of calculating unicode character width
#define TFLAG6_TRACK_API           0x1000000    // track modification by insertion and deletion API's
#define TFLAG6_MBCS_HTML_OUTPUT    0x2000000    // write mbcs (instead of unicode) on html output
#define TFLAG6_SWAP_CR_LINE_BREAK  0x4000000    // generate line-break when Return is pressed, and generate Return when Shift-Return is pressed
#define TFLAG6_USE_ANSI_FONT       0x8000000    // use ansi fonts for the ansi characters for any task-bar language selection
#define TFLAG6_WORDPAD_COMPATIBLE_PICT 0x10000000 // write wordpad compatible picture format to the rtf file
#define TFLAG6_DEL_CELL_TEXT       0x20000000   // on deletion, delete cell contents but not the cell structure
#define TFLAG6_RIGHT_JUST_RTL      0x40000000   // always drat the rtl text right-justified

#define TFLAG7_NO_RTL_FONT         0x1          // do not create rtl fonts
#define TFLAG7_V8_NUMBERING        0x2          // use TE v8 logic for paragraph numbering for backward compatibility
#define TFLAG7_ALT_BKSP            0x4          // simulate backspace using left+del actions
#define TFLAG7_SKIP_HIDDEN_PARA_NBR 0x8         // skip numbering for the hidden paragraph
#define TFLAG7_AUTO_NEW_ROW        0x10         // create new row automatically when tab is pressed on the last cell of a table
#define TFLAG7_HIDE_TC_FIELD       0x20         // show tc field contents
#define TFLAG7_SKIP_WORD_WRAP      0x40         // skip word-wrap function temporarily
#define TFLAG7_DRAW_OLD_VSCROLL    0x80         // disables vertical scroll bar if page text is less than window
#define TFLAG7_ALT_HILIGHT_METHOD  0x100        // Slightly modified text highlighting method
#define TFLAG7_OLD_PICT_IN_FRAME   0x200        // use old method of automatically creating a frame around an inserted picture
#define TFLAG7_NO_TRACK_CHANGE_LINE 0x400       // do not draw the track change line
#define TFLAG7_SHRINK_PICT_TO_PAGE  0x800       // shirnk large pictures to fit in page
#define TFLAG7_SP                   0x1000
#define TFLAG7_ANCHOR_WITHIN_PARA   0x1000      // allow text anchor within paragraph
#define TFLAG7_AUTO_PARA_RTL        0x2000      // automatic set para rtl when rtl text is entered
#define TFLAG7_SHOW_SPACES_AT_PARA_END 0x4000    // show any underline spaces before the line end
#define TFLAG7_DISABLE_RULER        0x8000      // disable editing on ruler
#define TFLAG7_AUTO_SET_RTL        0x10000      // set text to rtl automatically if it contains rtl text
#define TFLAG7_ALWAYS_FIRE_MODIFY  0x20000      // always fire the modified event
#define TFLAG7_WRITE_LISTTEXT      0x40000      // write list text group
#define TFLAG7_EXT_DROP_COPY       0x80000      // when making a drop to an external application, always consider it as a copy operation
#define TFLAG7_INT_DROP_MOVE       0x100000     // when making a drop within the same TE control, always conderer it as a move operation
#define TFLAG7_SET_BOX_CLIPPING    0x200000     // draw cell/para-frame within its own frame box
#define TFLAG7_PASTE_OBJECT        0x400000     // paste ole object from clipboard if available
#define TFLAG7_NO_SPELLCHECK_FIELDS 0x800000    // do not spell-check field text
#define TFLAG7_DRAGON_SPEECH_FOCUS 0x1000000    // Force focus after undo
#define TFLAG7_RECORD_CUR_PARA_PROPS 0x2000000  // TRUE to record current paragrah attribute in the style being recorded
#define TFLAG7_RECORD_CUR_CHAR_PROPS 0x4000000  // TRUE to record current character attribute in the style being recorded
#define TFLAG7_COMP_TE13             0x8000000  // TE v13 compatible RTF import
#define TFLAG7_NO_INTERNET          0x10000000  // Disable internet access
#define TFLAG7_NO_TABLE_AUTO_WIDTH  0x20000000  // Disable table auto-width feature
#define TFLAG7_LOAD_EMPTY_TEXT_FIELD 0x40000000   // show empty text input field as a series of underscores

#define TFLAG8_AUTO_REFORMAT_TABLES  0x1         // automatically reformat the auto-width tables
#define TFLAG8_HIDE_EMPTY_CELLS_ON_PRINT 0x2     // hide empty cells when printing the document
#define TFLAG8_DONT_SELECT_LAST_CHAR     0x4     // don't select the last character of the document on select_all
#define TFLAG8_ENABLE_GDIPLUS            0x8     // enable gdi plus
#define TFLAG8_USE_PRINTER_FONTS         0x10    // use printer fonts, 201128
#define TFLAG8_FIX_NEG_INDENT            0x20    // fix negative indent during rtf read
#define TFLAG8_IGNORE_LASTROW            0x40    // ignore the \lastrow rtf tag
#define TFLAG8_HIDE_PAGE_BLANK_AREA      0x80       // for short documents disable the display of non-text area by hiding the vertical scroll bar
#define TFLAG8_HTML_TEXT                0x100    // control contains html text
#define TFLAG8_NO_BOX_CLIPPING          0x200    // do not clip horizontal text/table overflowing a frame
#define TFLAG8_WRAP_ON_HYPHEN           0x400    // word wrap on hyphen
#define TFLAG8_MERGE_TABLES_ON_PASTE    0x800    // merge the pasted table with the previous table
#define TFLAG8_INSERT_ROWS_ON_PASTE    0x1000    // insert the table rows on paste instead of overlaying it
#define TFLAG8_COMP_V14                0x2000    // read sse file generated by TE v14.0.42 and TE 14.0.43 (revid=65)
#define TFLAG8_NO_TWIPS                0x4000    // translate certain dialog units from twips to inches/cm
#define TFLAG8_HTML_RTF_CONV           0x8000    // hosted in html - rtf converter product
#define TFLAG8_GET_MOUSELEAVE         0x10000    // Get ACTION_MOUSELEAVE message in the preprocess event when mouse leaves the client area of the control
#define TFLAG8_WRITE_HTML_BULLET_CHAR 0x20000    // replace char 183 by &bull; in html output
#define TFLAG8_WRITE_DOC_RTF          0x40000    // Write the RTF file generated during doc to rtf conversion to disk file called test.rtf
#define TFLAG8_DISABLE_ALT_RTF_FONT   0x80000    // disable alternate RTF font names
#define TFLAG8_WRITE_HTML_OBJECT     0x100000    // write the object tag during html out
#define TFLAG8_ALLOW_NARROW_PAGE     0x200000    // in image converter
#define TFLAG8_DONT_CREATE_BITMAP    0x400000    // Don't create a temporary bitmap object when picture is inserted
#define TFLAG8_WRITE_MERGE_TAG       0x800000    // write the deprecated merge tag
#define TFLAG8_DONT_HIDE_HIDDEN_CHAR 0x1000000   // dont' hide the HIDDEN_CHAR when writing to rtf
#define TFLAG8_DONT_SPELL_CHECK_HDR_FTR 0x2000000  // don't spell check header/footer
#define TFLAG8_GET_TRACKING_CODES       0x4000000  // get tracking code unconditionally
#define TFLAG8_NO_GDIPLUS_FOR_EMF       0x8000000  // don't use GDI plus for emf display
#define TFLAG8_HIDE_PPV_EDIT_BUTTON    0x10000000  // hide the print-preview close/edit button
#define TFLAG8_ALLOW_TEXT_BEF_PROT_FIELD  0x20000000  // allow text before the protected field
#define TFLAG8_DONT_USE_KB_LANG           0x40000000  // don't apply kb font to inserted text

#define TFLAG9_SKIP_STRIKE_TEXT       0x1        // dont' write strike/dbl-strike text to plain clipboard text
#define TFLAG9_FIRE_FONT_CHECK        0x2        // fire the font check event
#define TFLAG9_NO_NESTED_TABLE_WIDTH_ADJ 0x4     // don't adjust the width of the nested tables to fit into the main table
#define TFLAG9_WRAP_LONG_HTML_WORD    0x8        // wrap a long word in a fixed with html cell by allowing the word to wrap instead of cell to widen
#define TFLAG9_TREAT_DATA_FIELD_AS_ATOM  0x10    // tream data-field as an atom
#define TFLAG9_NO_COMMENTS               0x20    // dont support comments
#define TFLAG9_OLD_TABLE_WIDTH_CALC      0x40    // used old table width calculations to be compatible with TE 17.0.4.5
#define TFLAG9_SHRINK_LIST_TABLE         0x80    // shrink the list table during the rtf output
#define TFLAG9_ALWAYS_WRITE_ROW_PROPS   0x100    // always write row properties
#define TFLAG9_NO_SHADE_DYNAMIC_FIELDS  0x200    // don't shade the dynamic fields
#define TFLAG9_SAME_CURSOR_POS_AFTER_ZOOM 0x400  // don't let the cursor position change after zooming
#define TFLAG9_ALWAYS_FIRE_STATUS_EVENT   0x800  // always fire status event
#define TFLAG9_ALWAYS_EMBED_TABLES        0x1000  // always embed tables during clipboard paste
#define TFLAG9_NEW_RTF_LISTS              0x2000  // create new set of lists when rtf data is pasted
#define TFLAG9_TOC_TO_TEXT                0x4000  // convert table-of-content to plain text
#define TFLAG9_CONVERT_COMBO_BOX          0x8000  // convert box-box to plain-text showing the combo-box selection string
#define TFLAG9_DONT_PASTE_TAGS           0x10000  // don't paste tags and bookmarks
#define TFLAG9_ENABLE_POPUP_MENU         0x20000  // enable showing of pop-up menu
#define TFLAG9_USE_ORIG_JPG_FOR_PDF      0x40000  // use original jpeg data for pdf
#define TFLAG9_RETAIN_PROTECT_STYLE      0x80000  // retain the PROTECT style when a paragraph style is applied
#define TFLAG9_DONT_COLOR_PARA_SPACING  0x100000  // don't apply color to the paragarph before and after space
#define TFLAG9_WORD2007_PAGE_BREAK      0x200000  // Word 2007 compatible page breaks
#define TFLAG9_FORCE_STYLE              0x400000  // set to true to force the new style attributes
#define TFLAG9_SHOW_FIELD               0x800000  // show field name/data on right click
#define TFLAG9_RTL_UNICODE_FILE        0x1000000  // tell TE to apply rtl to the unicode text being read
#define TFLAG9_CLIP_PICTURE            0x2000000  // clip emf pictures to prevent drawing outside the picture rectangle
#define TFLAG9_DONT_COUNT_LAST_BLANK_PAGE  0x4000000  // tell TE not to include the last blank page in the page count display
#define TFLAG9_DONT_PROTECT_PARA_BEF_TABLE 0x8000000  // dont protect the para marker before the table from deletion when included in a selection
#define TFLAG9_FIRE_ADJUST_COLOR          0x10000000  // fire the adjust color event
#define TFLAG9_HIDE_PRINT_BUTTON          0x20000000  // hide the print button on the print-preview bar
#define TFLAG9_INVOKE_HYPERLINK           0x40000000  // automatically invoke the hyperlink

#define TFLAG10_DONT_MARK_WITH_SEL_COL    0x1         // 2014
#define TFLAG10_DONT_USE_BKSP_FONT        0x2         // don't use the backspace font
#define TFLAG10_DONT_PAD_TABLE_HEIGHT     0x4         // don't add the bottom padding to the exact height table rows
#define TFLAG10_MERGE_NESTED_RTF_PROPS    0x8         // merge nested rtf color tables
#define TFLAG10_EXTEND_AUTO_VSCROLL      0x10         // extend the auto-vertical-scroll bar feature
#define TFLAG10_NO_HLINK_BOOKMARK        0x20         // do not generate bookmark for internal hyperlinks
#define TFLAG10_NO_LAST_PARA_MARKER      0x40         // don't read or write the last para-markte to the rtf file
#define TFLAG10_DONT_COMBINE_UNDOS       0x80         // don't combine undos
#define TFLAG10_AUTO_HSCROLL_BAR        0x100         // automatic horizontal scroll bar
#define TFLAG10_DOTTED_GRID_LINES       0x200         // show the dotted table grid lines
#define TFLAG10_NO_CRLF                 0x400         // don't insert cr/lf in the RTF text
#define TFLAG10_WRITE_FIX_WIDTH_TABLE   0x800         // disard auto-width property when writing RTF
#define TFLAG10_USE_LAST_PARA_PROPS    0x1000         // When last paragraph marker is deleted upon RTF read, use its property for the resulting last paragraph
#define TFLAG10_WRITE_DOCX_CUSTOM_TAGS 0x2000         // write custom tags to support ss tags such as AuxId,
#define TFLAG10_WRITE_RANDOM_LIST_TMPL_ID 0x4000      // randomize the list template id when writing the RTF output
#define TFLAG10_DST                       0x8000      // enable dst specific changes
#define TFLAG10_LOCK_DATA_FIELD          0x10000      // write the fldlock tag for the data fields
#define TFLAG10_LEGACY_SECT_PROPS        0x20000      // restore section properties input to pre 20140116
#define TFLAG10_SHRINK_RTF_IMAGES        0x40000      // shrink images to fit during rtf input
#define TFLAG10_PREFER_PLACEHOLDER_PICT  0x80000      // use placeholder pictures if available for the linked images
#define TFLAG10_NO_PICT_READ_MSG         0x100000     // do not show the message encountered during picture data import error
#define TFLAG10_BOOKMARK_TO_PDF          0x200000     // show RTF bookmark in PDF bookmark-outline window
#define TFLAG10_INSERT_AT_FIELD_DATA_BEGIN 0x400000   // Allow the text to be inserted at the beginning of a data field
#define TFLAG10_TO_PNG_AT_DISP_SIZE      0x800000     // convert from bmp to png at display size
#define TFLAG10_APPEND_TO_FIELD_DATA     0x1000000    // Allow adding text to field data at the end of the field data
#define TFLAG10_NO_EQ_SUPPORT            0x2000000    // treat equation as data fields
#define TFLAG10_HIDDEN_IN_GROUP          0x4000000    // during RTF output, plance the hidden text in its own group
#define TFLAG10_SHOW_HIDDEN_PARA         0x8000000    // show the hidden paragraph
#define TFLAG10_UPRIGHT_CHARS            0x10000000   // draw upright characters even when the flow is vertical
#define TFLAG10_NO_DOCX_ACTIVEX          0x20000000   // don't import ActiveX control form the docx file
#define TFLAG10_READONLY_WIN_MSG         0x40000000   // don't let windows message to modify text in the readonly mode

#define TFLAG11_NO_AUTO_PARA_STYLE_ON_TEXT  0x1       // don't automcatically apply paragraph style on text (during word-wrapping)
#define TFLAG11_DONT_SHRINK_FONT_TABLE      0x2       // don't shrink the font table when an editor window closes
#define TFLAG11_NO_SHPPICT                  0x4       // do not write the shppict tag
#define TFLAG11_NO_EXACT_LINE_SPACING       0x8       // do not honor exact line height
#define TFLAG11_NO_CHAR_BKND                0x10      // do not read \chcpbat tag
#define TFLAG11_NO_BAD_PTR_CHECK            0x20      // don't use the IsBadReadPtr or IsBadWritePtr flags
#define TFLAG11_NO_PASTE_PAPER_PROPS        0x40      // do not paste section paper poperties
#define TFLAG11_NO_ALTERNATING_BULLETS      0x80      // don't alternate bullet/hollow-bullet for the list levels
#define TFLAG11_ALWAYS_ENABLE_NEW_CMD      0x100      // alwasy enable the ID_NEW command
#define TFLAG11_DONT_KEEP_TOGETHER_LONG_TABLES 0x200  // turn-off keep-row-together for long tables
#define TFLAG11_DONT_BALANCE_FAR_EAST_TEXT  0x400     // don't balance far-east text
#define TFLAG11_NO_GIF_ANIM                 0x800     // disable animiation of gif files
#define TFLAG11_NO_PREF_WIDTH_CALC          0x1000    // do not apply preferable width calculation for the tables during RTF read
#define TFLAG11_NBRS_TO_LEFT                0x2000    // move the large number in a old number list toward left (instead of right)
#define TFLAG11_DONT_FIX_RTF_TABLE          0x4000    // don't fix table to text, or text to table error in RTF
#define TFLAG11_CHAR_UCBASE                 0x8000    // use character level ucbase
#define TFLAG11_PASTE_RTF_SHPTXT_IN_TABLE   0x10000   // allow pasting of shptxt within RTF into a table cell, 20180525
#define TFLAG11_FRAME_BEF_TABLE             0x20000   // 20180703: do not insert any new frame between table rows
#define TFLAG11_NO_INITIAL_FOCUS            0x40000   // do not focus on TE window when calling CreateTerWindow function
#define TFLAG11_NO_TAB_CHAR                 0x80000   // do not process WM_CHAR with character value 9 (tab) as a tab key hit
#define TFLAG11_NO_DEFAULT_SHPTXT          0x100000   // do not honor shptxt unless shapetype is specified

#define CFLAG_SEL1            0x1      // cell selection flag
#define CFLAG_SEL2            0x2      // another cell selection flag
#define CFLAG_MERGED          0x4      // to be merged with the previous cell
#define CFLAG_AUTO_WIDTH      0x8      // width will be adjusted in the fitted view
#define CFLAG_ROW_SPANNED     0x10     // this cell is spanned by a row above
#define CFLAG_HTML            0x20     // this cell beints to an html table
#define CFLAG_COL_SPANNED     0x40     // this cell is spanned by a column before
#define CFLAG_HTML_HDR        0x80     // html header cell
#define CFLAG_FIX_WIDTH       0x100    // fixed width specified
#define CFLAG_FIX_WIDTH_PCT   0x200    // fixed width percentage specified
#define CFLAG_PREEXIST        0x400    // preexisting cells (used only during rtf read)
#define CFLAG_RTF_SEL         0x800    // use to mark the cells during rtf write
#define CFLAG_VALIGN_CTR      0x1000   // Vertical center align cell
#define CFLAG_VALIGN_BOT      0x2000   // vertical bottom align cell
#define CFLAG_FORCE_BKND_CLR  0x4000   // use bknd color even when it is same as the default background color
#define CFLAG_MARGIN_OVERRIDE 0x8000   // this cell has different margin than specified by the row
#define CFLAG_VALIGN_BASE     0x10000  // align the base of the top line with other cell which have this flag
#define CFLAG_3D              0x20000  // draw 3d border in html mode
#define CFLAG_AUTO_WIDTH_RTF    0x40000  // cell which has rtf type auto width
#define CFLAG_HAS_NESTED_TABLES 0x80000  // cell which include nested tables
#define CFLAG_ROW_SPANNED_LAST 0x100000  // last row-spanned cell
#define CFLAG_ADDED_CELL       0x200000  // this cell was added for equating columns on each row of the table
#define CFLAG_HIDDEN           0x400000  // hidden cell
#define CFLAG_HAS_FRAMES       0x800000  // has cell-layout frames
#define CFLAG_NO_WRAP         0x1000000  // don't wrap the text inside the cell
#define CFLAG_WRAP_ON_CHAR    0x2000000  // allow the break inside word for cell-width calculation


#define LFLAG_PARA           0x1      // paragraph or cell break line
#define LFLAG_BREAK          0x2      // any other break line
#define LFLAG_PARA_FIRST     0x4      // first para line
#define LFLAG_CONTROL        0x8      // line has embedded control
#define LFLAG_FNOTE          0x10     // contains a footnote
#define LFLAG_SOFT_COL       0x20     // soft column break
#define LFLAG_NBSPACE        0x40     // line has non-break space characters
#define LFLAG_LINE           0x80     // line break
#define LFLAG_HTML_RULE      0x100    // is html horizontal rule
#define LFLAG_BOX_TOP        0x200    // draw top para border before this line
#define LFLAG_BOX_BOT        0x400    // draw bot para border before this line
#define LFLAG_SECT           0x800    // section break line
#define LFLAG_RHDR           0x1000   // right page header
#define LFLAG_NBDASH         0x2000   // line has non-break dash characters
#define LFLAG_PICT           0x4000   // line contains an aligned picture
#define LFLAG_RFTR           0x8000   // right footer
#define LFLAG_FNOTETEXT      0x10000  // contains a footnote text
#define LFLAG_FHDR           0x20000  // fist page hdr
#define LFLAG_FFTR           0x40000  // fist page ftr
#define LFLAG_HDR            0x80000  // regular page hdr
#define LFLAG_FTR            0x100000 // regular page ftr
#define LFLAG_HYPH           0x200000 // regular page ftr
#define LFLAG_LHDR           0x400000 // left header
#define LFLAG_LFTR           0x800000 // left header
#define LFLAG_TOC            0x1000000 // has table of contents
#define LFLAG_LIST           0x2000000 // line contains the list number to display
#define LFLAG_HPARA          0x4000000 // line contains a hidden para marker
#define LFLAG_LISTNUM        0x8000000 // has list number field in it
#define LFLAG_SELECTED      0x10000000 // result of LineSelected function
#define LFLAG_ASSUMED_TAB   0x20000000 // this cell line assumes a decimal tab in the beginning of the line
#define LFLAG_AUTONUMLGL    0x40000000 // has an autonumlgl field in the line


#define LFLAG_HDR_FTR     (LFLAG_HDR|LFLAG_FTR)
#define LFLAG_LHDR_LFTR   (LFLAG_LHDR|LFLAG_LFTR)
#define LFLAG_RHDR_RFTR   (LFLAG_RHDR|LFLAG_RFTR)
#define LFLAG_FHDR_FFTR   (LFLAG_FHDR|LFLAG_FFTR)
#define LFLAG_HDRS_FTRS   (LFLAG_HDR|LFLAG_FTR|LFLAG_LHDR|LFLAG_LFTR|LFLAG_RHDR|LFLAG_RFTR|LFLAG_FHDR|LFLAG_FFTR)
#define LFLAG_HDRS        (LFLAG_HDR|LFLAG_LHDR|LFLAG_RHDR|LFLAG_FHDR)
#define LFLAG_FTRS        (LFLAG_FTR|LFLAG_LFTR|LFLAG_RFTR|LFLAG_FFTR)

#define LFLAG2_SPELL_CHECKED    0x1    // this line has been spell checked
#define LFLAG2_ENOTETEXT        0x2    // contains a enotetext line
#define LFLAG2_TC               0x4    // HAS tc field
#define LFLAG2_HIDDEN_CHAR      0x8    // has a HIDDEN_CHAR
#define LFLAG2_BOX_BETWEEN      0x10   // draw 'between' para border after this line
#define LFLAG2_RTL              0x20   // right to left line
#define LFLAG2_DEL_REV          0x40   // line contain text deleted by a reviewer
#define LFLAG2_INS_REV          0x80   // line contain text deleted by a reviewer
#define LFLAG2_PARA_RTL        0x100   // segment placement within the line is right-to-left
#define LFLAG2_TEMP_HYPH       0x200   // temporary hyphen character at the end of the line
#define LFLAG2_PICT_TEXT       0x400   // line includes an anchor for a text box object
#define LFLAG2_LEFT_LINE       0x800   // indicates text with LEFT_LINE
#define LFLAG2_FRAME_TOP       0x1000   // first line of a screen frame
#define LFLAG2_SHADE_BEGIN     0x2000  // shading begins at this line
#define LFLAG2_SHADE_END       0x4000  // shading ends at this line
#define LFLAG2_SPACE_TAKING_FRAME 0x8000  // line has a space taking frame
#define LFLAG2_SEQ               0x10000  // line has one or more seq fields
#define LFLAG2_FRAME_HYPH        0x20000  // hyphen on the partial-word before the frame
#define LFLAG2_HAS_LINKED_STYLE  0x40000  // this line has character style linked to a paragraph style
#define LFLAG2_HAS_ASIAN         0x80000  // this line contains asian characters

#define INFO_TAB            0x1
#define INFO_SECT           0x2
#define INFO_PAGE           0x4
#define INFO_COL            0x8
#define INFO_CELL           0x10
#define INFO_ROW            0x20
#define INFO_TABLE          0x40
#define INFO_JUST           0x80
#define INFO_FRAME          0x400
#define INFO_SPACE_LINE     0x800
#define INFO_PAGE_NUMBER    0x1000

#define PARA_FRAME_HPAGE      0x1        // align relative to the left edge of the page
#define PARA_FRAME_USED       0x2
#define PARA_FRAME_RIGHT_JUST 0x4
#define PARA_FRAME_CENTER     0x8
#define PARA_FRAME_SET_WIDTH  0x10
#define PARA_FRAME_VPAGE      0x20       // align relative to the top edge of the page
#define PARA_FRAME_VMARG      0x40       // align relative to the top margin of the page
#define PARA_FRAME_TEXT_BOX   0x80       // is a text box drawing object
#define PARA_FRAME_LINE       0x100      // is a line object
#define PARA_FRAME_RECT       0x200      // is a rectangle object
#define PARA_FRAME_BOXED      0x400      // object with borders or solid line
#define PARA_FRAME_DOTTED     0x800      // dotted lines
#define PARA_FRAME_SELECT     0x1000     // used for temporary selection
#define PARA_FRAME_NO_WRAP    0x2000     // don't wrap text around this frame
#define PARA_FRAME_WRAP_IGNORE 0x4000    // wrap through the frame
#define PARA_FRAME_POSITIONED 0x8000     // TRUE after a paragraph frame is positioned
#define PARA_FRAME_PAGE_BREAK 0x10000    // this picture frame causes a page break
#define PARA_FRAME_CONV       0x20000    // this frame/text box was converted during rtf read
#define PARA_FRAME_NO_LINE    0x40000    // do not draw the line object
#define PARA_FRAME_IGNORE_X   0x80000    // ignore the x position
#define PARA_FRAME_IGNORE_Y   0x100000   // ignore the y position
#define PARA_FRAME_SHPGRP     0x200000   // part of a shape group
#define PARA_FRAME_WATERMARK  0x400000   // is watermark pictur frame
#define PARA_FRAME_FILL_PICT  0x800000   // Fill the background with picture
#define PARA_FRAME_IN_CELL    0x1000000  // shape placed relative to the containing cell
#define PARA_FRAME_VCENTER    0x2000000  // vertically centered frame
#define PARA_FRAME_FIXED_HEIGHT 0x4000000  // fixed height
#define PARA_FRAME_BEHIND_TEXT  0x8000000  // behind text
#define PARA_FRAME_VLINE       0x10000000  // vertical position relative to line
#define PARA_FRAME_HCHAR       0x20000000  // horizontal position relative to character
#define PARA_FRAME_HCOL        0x40000000  // horizontal position relative to column

#define PARA_FRAME_OBJECT     (PARA_FRAME_TEXT_BOX|PARA_FRAME_LINE|PARA_FRAME_RECT)

#define PF2_END_ARROW          0x1        // draw arrow head at the end point
#define PF2_START_ARROW        0x2        // draw arrow head at the start point
#define PF2_FLIPH              0x4        // indicates a horizontal flip
#define PF2_FLIPV              0x8        // indicates a vertical flip
#define PF2_VBOTTOM           0x10        // bottom aligned frame
#define PF2_PVPARA            0x20        // set when \pvpara encountered
#define PF2_CANVAS            0x40        // is canvas
#define PF2_INLINE            0x80        // inline
#define PF2_HTML_RULE         0x100       // html ruler
#define PF2_ANCHOR_IN_CELL    0x200       // anchor for this shape is inside a table cell
#define PF2_SET_HEIGHT        0x400       // set height for the frame automatically
#define PF2_HIDDEN            0x800       // hidden para-frame
#define PF2_LEFT             0x1000       // left justified
#define PF2_NO_DELETE        0x2000       // do not allow deletion of this frame
#define PF2_NO_MOVE          0x4000       // do not allow movement
#define PF2_NO_SIZE          0x8000       // do not allow sizing
#define PF2_HTML            0x10000       // the shape created by html add-on, 20090527
#define PF2_POLYLINE        0x20000       // is polyline of count 2
#define PF2_TABLE_FRAME     0x40000       // is an rtf table table frame
#define PF2_NO_OVERLAP      0x80000       // avoid overlap for this frame
#define PF2_SIZE_TO_TEXT   0x100000       // modify the shape size to fit the text
#define PF2_EMPTY_TEXT_BOX 0x200000       // an empty text-box converted to a rectangle
#define PF2_WRAP_AROUND    0x400000       // specified SWRAP_AROUND wrap style
#define PF2_VTOP           0x800000       // 20160620: changed from PF2_POSV_COL; posv position set to 2 (column)
#define PF2_WRAP_TIGHT     0x1000000      // wrap tightly with no margin on both sides of the box
#define PF2_BEHIND_DOC     0x2000000      // behind the document, fBehindDocument
#define PF2_CALCX_SET      0x4000000      // CalX value set in PosPictFrames to be used in SwitchParaFrames method
#define PF2_RIGHT_MARG     0x8000000      // position relative to the right margin
#define PF2_OVERLAY       0x10000000      // this frame does not affect the page text
#define PF2_VBOT_MARG     0x20000000      // relative to bottom margin, 20170413

#define REL_SCREEN            0
#define REL_WINDOW            1
#define REL_TEXT_BOX          2
#define REL_TEXT_ORIG         3

#define ACTION_COMMAND        1
#define ACTION_VSCROLL        2
#define ACTION_HSCROLL        3
#define ACTION_CHAR           4
#define ACTION_LBUTTONDOWN    5
#define ACTION_RBUTTONDOWN    6
#define ACTION_LBUTTONUP      7
#define ACTION_RBUTTONUP      8
#define ACTION_LBUTTONDBLCLK  9
#define ACTION_RBUTTONDBLCLK  10
#define ACTION_SIZE           11
#define ACTION_SETFOCUS       12
#define ACTION_KILLFOCUS      13
#define ACTION_MOUSEMOVE      14
#define ACTION_QUERYENDSESSION 15
#define ACTION_CHECKBOX        16
#define ACTION_MOUSELEAVE      17
#define ACTION_MBUTTONDOWN     18
#define ACTION_MBUTTONUP       19
#define ACTION_MBUTTONDBLCLK   20
#define ACTION_ROW_INDENT      21
#define ACTION_ROW_HEIGHT      22
#define ACTION_CELL_WIDTH      23
#define ACTION_PICT_SIZE       24
#define ACTION_FRAME_SIZE      25
#define ACTION_REPLACESEL      26           // 20140624: to detect dragon EM_REPLACESEL message
#define ACTION_DRAG_DEL        27           // 20141003: text being deleted during drag/drop
#define ACTION_DRAGON          28           // 20141010: preprocess event type for dragon notification message received by TE

#define BLT_ROUND             1             // 20101228: incremented the values so that 0 is not used for BLT_ROUND
#define BLT_DIAMOND           2
#define BLT_SQUARE            3
#define BLT_HOLLOW_SQUARE     4
#define BLT_4_DIAMONDS        5
#define BLT_ARROW             6
#define BLT_CHECK             7

#define BLTFLAG_HIDDEN        0x1
#define BLTFLAG_USED          0x2    // 20110909: temporary flag during rtf output

#define NBR_DEC               0     // decimal numbering
#define NBR_UPR_ALPHA         1
#define NBR_LWR_ALPHA         2
#define NBR_UPR_ROMAN         3
#define NBR_LWR_ROMAN         4
#define NBR_DEFAULT           5

#define LIST_DEC              0
#define LIST_UPR_ROMAN        1
#define LIST_LWR_ROMAN        2
#define LIST_UPR_ALPHA        3
#define LIST_LWR_ALPHA        4
#define LIST_ORDINAL          5
#define LIST_CARDINAL         6
#define LIST_ORDINAL_TEXT     7

#define LIST_KANJI_DBNUM2     11       // seesm to be the same as LIST_CHINESE_NUM

#define LIST_KANJI_NUM        16
#define LIST_KANJI_NUM_LAST   17

#define LIST_KOREAN2          24

#define LIST_CHINESE_NUM      26
#define LIST_CHINESE_NUM_LAST 29

#define LIST_CHINESE_ZOD      30
#define LIST_CHINESE_ZOD_LAST 35    // 20081229: changed from 32 to 35

#define LIST_CHINESE_DBL      37
#define LIST_CHINESE_DBL_LAST 40

#define LIST_HEBREW           45

#define LIST_DEC_PAD          22
#define LIST_BLT              23
#define LIST_NO_NUM          255

#define LISTFLAG_RESTART_SEC 0x1
#define LISTFLAG_NEW_LIST    0x2   // 20120320: used during rtf read to indicate a new list

#define LISTAFT_TAB           0
#define LISTAFT_SPACE         1
#define LISTAFT_NONE          2

#define LISTLEVEL_RESTART     0x1   // restart numbering when a different ListOr is encountered for the same list - restarting happens only once for each ListOr
#define LISTLEVEL_OLD         0x2   // converted from word 6.0
#define LISTLEVEL_RESTARTED   0x4   // used temporarily during list number calculation
#define LISTLEVEL_LEGAL       0x8   // convert previous levels to arabic
#define LISTLEVEL_REFORMAT    0x10  // format override
#define LISTLEVEL_NO_RESET    0x20  // don't reset numbering when lowerlevel (parent) level encountered
#define LISTLEVEL_CENTER      0x40  // center aligned bullet
#define LISTLEVEL_RIGHT       0x80  // right aligned bullet

#define LISTOR_FOUND          0x1   // user temporarily during list number calculation

#define PID_LINE              0
#define PID_PARA              1
#define PID_BULLET            2
#define PID_TAB               3
#define PID_STYLE             4      // style id

#define TER_FILE              1
#define TER_BUF               2

#define SCOPE_BEGIN           0
#define SCOPE_FORWARD         1
#define SCOPE_BACKWARD        2
#define SCOPE_ANY             3

#define ANIM_CONTINUOUS       -2

#define SECT_ALL              -1
#define SECT_CUR              -2

#define SECT_NEW_PAGE        0x1
#define SECT_RESTART_PAGE_NO 0x2
#define SECT_HAS_TITLE_PAGE  0x4
#define SECT_EXACT_MARGT     0x8    // exact top margin
#define SECT_EXACT_MARGB     0x10   // exact bottom margin
#define SECT_BRDR_HEADER     0x20   // border around header
#define SECT_BRDR_FOOTER     0x40   // border around footer
#define SECT_VALIGN_CTR      0x80   // center the page
#define SECT_VALIGN_BOT     0x100   // bottom align the page
#define SECT_LINE           0x200   // show line numbering
#define SECT_SNAP_LINE_GRID 0x400   // snap to line grid
#define SECT_LINE_BET_COL   0x800   // line between columns
#define SECT_HAS_FACING_PAGES 0x1000  // section includes facing pages
#define SECT_VAR_COL_WIDTH    0x2000  // section has variable column width
#define SECT_START_ON_EVEN_PAGE 0x4000 // start new section on a even display page number
#define SECT_START_ON_ODD_PAGE 0x8000  // start new section on a odd display page number
#define SECT_GUTTER_ADDED     0x10000  // true after adding the gutter margin value
#define SECT_UNLOCKED         0x20000  // unlocked from document level protection

#define PARAM_IGNORE          -31234

#define FIELD_PAGE_NUMBER    1        // field id for the page field
#define FIELD_TEXTBOX        2        // textbox field
#define FIELD_CHECKBOX       3        // checkbox field
#define FIELD_LISTBOX        4        // combbox field - old name
#define FIELD_COMBOBOX       4        // combobox field
#define FIELD_PAGE_COUNT     5        // total number of pages in the document
#define FIELD_NAME           6        // field name
#define FIELD_DATA           7        // field data
#define FIELD_DATE           8        // date/time field
#define FIELD_TOC            9        // table of content
#define FIELD_PRINTDATE     10        // printdate field
#define FIELD_LISTNUM       11        // list number field
#define FIELD_AUTONUMLGL    12        // autonumgl field
#define FIELD_TC            13        // TC tag for TOC content
#define FIELD_HLINK         14        // hyperlink field
#define FIELD_XE            15        // index entry field
#define FIELD_PAGE_REF      16        //  page reference field
#define FIELD_SECT_PAGE_COUNT 17      // total number of pages in the current section
#define FIELD_USER1         18        // user field
#define FIELD_REF           19        // bookmark reference field
#define FIELD_INCLUDEPICTURE 20       // use to preserve the html picture which can be read successfully
#define FIELD_SEQ            21       // sequence field
#define FIELD_FILE_NAME      22       // file name field
#define FIELD_FORMULA        23
#define FIELD_DOC_PROP       24       // doc property


#define TER_FIRST            0
#define TER_LAST             1
#define TER_NEXT             2
#define TER_PREV             4
#define TER_CUR              5

#define WC_SELECTION         0x1
#define WC_INCLUDE_HDR_FTR   0x2
#define WC_INCLUDE_HIDDEN    0x4

#define TERTAG_USER              0         // placed by the calling application
#define TERTAG_BKM               1         // bookmark tag
#define TERTAG_TOC               2         // used to tag the table of contents
#define TERTAG_HEADING           3         // used to tag the heading lines
#define TERTAG_SECT              4         // saves the section id
#define TERTAG_HPARA             5         // Stores the hidden para id
#define TERTAG_HPARA2            6         // Stores the para id in the hidden field data and other items

#define MENU_FILE           0
#define MENU_EDIT           1
#define MENU_VIEW           2
#define MENU_INSERT         3
#define MENU_FONT           4
#define MENU_PARAGRAPH      5
#define MENU_TABLE          6
#define MENU_OTHER          7
#define MENU_HELP           8

#define OCX_METHOD           0
#define OCX_SET_PROP         1
#define OCX_GET_PROP         2
#define OCX_SET_PROP_REF     3

#define OCX_NONE             0
#define OCX_BOOL             1
#define OCX_LONG             2
#define OCX_STRING           3
#define OCX_DISPATCH         4

#define TLB_LINE             1              // vertical line
#define TLB_TYPEFACE         2
#define TLB_POINTSIZE        3
#define TLB_BOLD             4
#define TLB_ITALIC           5
#define TLB_ULINE            6
#define TLB_ALIGN_LEFT       7
#define TLB_ALIGN_RIGHT      8
#define TLB_ALIGN_CENTER     9
#define TLB_ALIGN_JUSTIFY    10
#define TLB_INC_INDENT       11
#define TLB_DEC_INDENT       12
#define TLB_STYLE            13
#define TLB_ZOOM             14
#define TLB_CUT              15
#define TLB_COPY             16
#define TLB_PASTE            17
#define TLB_SPACER           18              // icon separator
#define TLB_NEW              19
#define TLB_OPEN             20
#define TLB_SAVE             21
#define TLB_PRINT            22
#define TLB_HELP             23
#define TLB_PAR              24
#define TLB_PREVIEW          25
#define TLB_NUMBER           26
#define TLB_BULLET           27
#define TLB_UNDO             28
#define TLB_REDO             29
#define TLB_FIND             30
#define TLB_DATE             31
#define TLB_PAGE_NUM         32
#define TLB_PAGE_COUNT       33
#define TLB_PAINT_FORMAT     34
#define TLB_BULLET_DROPDOWN  35
#define MAX_TLB              36     // one more than the last

/******************************************************************************
    Message ids
*******************************************************************************/
#define MSG_NO_ERROR              0
#define MSG_BAD_BMP_FILE          1
#define MSG_BAD_FNOTE_MARKER      2
#define MSG_BAD_OBJ_SIZE          3
#define MSG_BAD_PRINTER_DRV       4
#define MSG_CELL_DATA_MISSING     5
#define MSG_CELL_WITHOUT_ROW      6
#define MSG_CHARSTYLE_IN_USE      7
#define MSG_CHAR_FMT_MISSING      8
#define MSG_CLIPBOARD_BUSY        9
#define MSG_CLIPBOARD_NO_DATA     10
#define MSG_CLIPBOARD_NO_FMT      11
#define MSG_COUNT_MISMATCH        12
#define MSG_CREATE_NEW_FILE       13
#define MSG_END_BACKWARD_SEARCH   14
#define MSG_END_FORWARD_SEARCH    15
#define MSG_ERR_ADDING_STRING     16
#define MSG_ERR_ADDING_VALUE      17
#define MSG_ERR_ADVISE_CONNECT    18
#define MSG_ERR_ADV_CREATE        19
#define MSG_ERR_BLOCK_SIZE        20
#define MSG_ERR_BMP_CREATE        21
#define MSG_ERR_CTL_CREATE        22
#define MSG_ERR_DATA_RETRIEVE     23
#define MSG_ERR_DIB_CREATE        24
#define MSG_ERR_END_PAGE          25
#define MSG_ERR_END_PRINTER       26
#define MSG_ERR_FILE_LENGTH       27
#define MSG_ERR_FILE_OPEN         28
#define MSG_ERR_FILE_READ         29
#define MSG_ERR_FILE_SEEK         30
#define MSG_ERR_FILE_WRITE        31
#define MSG_SEL_PROTECTED         32
#define MSG_SPELL_OVER            33
#define MSG_STYLESHEET_MISSING    34
#define MSG_TAB_TBL_MISSING       35
#define MSG_TBL_DATA_MISSING      36
#define MSG_TYPE_STYLE_NAME       37
#define MSG_UNDO_EMPTY            38
#define MSG_UNEXPECTED_EOF        39
#define MSG_SEL_SPAN_HDRFTR       40
#define MSG_SECT_TBL_MISSING      41
#define MSG_ERR_FONT_CREATE       42
#define MSG_ERR_FONT_SELECT       43
#define MSG_ERR_INIT_BMP          44
#define MSG_ERR_INIT_OLE          45
#define MSG_ERR_INIT_PRINTER      46
#define MSG_ERR_INSTANCE          47
#define MSG_ERR_LOAD_ACCEL        48
#define MSG_ERR_MAIL_MERGE        49
#define MSG_ERR_MEM_LOCK          50
#define MSG_ERR_META_ACCESS       51
#define MSG_ERR_META_BAD_FILE     52
#define MSG_ERR_META_COPY         53
#define MSG_ERR_META_CREATE       54
#define MSG_ERR_META_READ         55
#define MSG_ERR_META_RECREATE     56
#define MSG_ERR_OBJ_DATA          57
#define MSG_ERR_OBJ_SAVE          58
#define MSG_ERR_OBJ_SIZE          59
#define MSG_ERR_OLE_CLSID         60
#define MSG_ERR_OLE_DATA_CONV     61
#define MSG_ERR_OLE_LOAD          62
#define MSG_ERR_OLE_SAVE          63
#define MSG_ERR_OLE_USER          64
#define MSG_ERR_OLE_VERSION       65
#define MSG_ERR_PEN               66
#define MSG_ERR_PICT_FILE_FMT     67
#define MSG_ERR_PICT_FILE_OPEN    68
#define MSG_ERR_PICT_FILE_READ    69
#define MSG_ERR_PRESENT_DATA      70
#define MSG_ERR_SITE_CREATE       71
#define MSG_ERR_START_PRINTER     72
#define MSG_ERR_STORAGE_CREATE    73
#define MSG_ERR_STORAGE_RETRIEVE  74
#define MSG_ERR_TEXT_METRIC       75
#define MSG_ERR_VIEW_RETRIEVE     76
#define MSG_FILE_INFO_MISSING     77
#define MSG_FILE_SIGN_MISSING     78
#define MSG_FONT_TBL_INCOMPL      79
#define MSG_INVALID_NUMBER        80
#define MSG_INVALID_PRINT_RECT    81
#define MSG_INVALID_SECT_DATA     82
#define MSG_INVALID_SELECT        83
#define MSG_KEEP_HDRFTR_LINE      84
#define MSG_LINE_TOO_LONG         85
#define MSG_LINE_TRUNCATED        86
#define MSG_MARGIN_TOO_LARGE      87
#define MSG_MAX_LINES_EXCEEDED    88
#define MSG_MERGE_DATA_TOO_LONG   89
#define MSG_MISSING_ROW_MARKER    90
#define MSG_NODEL_HDRFTR_BODY     91
#define MSG_NOT_TE_FILE           92
#define MSG_NO_HILIGHT            93
#define MSG_NO_OLE_CLASS          94
#define MSG_NO_RANGE_PRINTING     95
#define MSG_NO_SERVER             96
#define MSG_NO_STRING             97
#define MSG_NULL_FIELD            98
#define MSG_OLEERR_NEED_SHARE     99
#define MSG_OLEERR_NO_CLASS      100
#define MSG_OUT_OF_CELL_SLOT     101
#define MSG_OUT_OF_CHAR_STACK    102
#define MSG_OUT_OF_COMP_DC       103
#define MSG_OUT_OF_DC            104
#define MSG_OUT_OF_DRAG_OBJ      105
#define MSG_OUT_OF_FONT_SLOT     106
#define MSG_OUT_OF_GROUP         107
#define MSG_OUT_OF_MEM           108
#define MSG_OUT_OF_PARA_SLOT     109
#define MSG_OUT_OF_PARAFID_SLOT  110
#define MSG_OUT_OF_RANGE         111
#define MSG_OUT_OF_ROW_SLOT      112
#define MSG_OUT_OF_STYLESHEET    113
#define MSG_OUT_OF_TAB_POS       114
#define MSG_OUT_OF_TAB_TABLE     115
#define MSG_OUT_OF_TASK          116
#define MSG_OUT_OF_WIN_SLOTS     117
#define MSG_PARASTYLE_IN_USE     118
#define MSG_PARA_FMT_MISSING     119
#define MSG_PARA_TBL_INCOMPL     120
#define MSG_PFRAME_DATA_MISSING  121
#define MSG_PRINT_AREA_SMALL     122
#define MSG_PROTECTED            123
#define MSG_READ_ABORTED         124
#define MSG_REPLACE_STRING       125
#define MSG_SAVE_INCOMPL         126
#define MSG_SAVE_MODS            127
#define MSG_SECTION_FULL         128
#define MSG_BAD_WIN_HANDLE       129
#define MSG_BAD_VERSION          130
#define MSG_NODEL_MIX_HTML       131
#define MSG_ERR_TOO_MANY_FILES   132
#define MSG_ERR_FILE_ACCESS      133
#define MSG_REDO_EMPTY           134
#define MSG_OUT_OF_BLT_TABLE     135
#define MSG_BULLET_MISSING       136
#define MSG_BAD_JPG_FILE         137
#define MSG_ERR_JPG_HUFF         138
#define MSG_ERR_JPG_MARKER       139
#define MSG_ERR_JPG_NO_HUFF      140
#define MSG_TAG_TABLE_MISSING    141
#define MSG_ERR_ENH_META_HDR     142
#define MSG_GET_ENH_META         143
#define MSG_MAX_WIN_LINES        144
#define MSG_SOFT_PAGE_BREAK      145
#define MSG_SECT_BREAK           146
#define MSG_PAGE_BREAK           147
#define MSG_COL_BREAK            148
#define MSG_PAGE_HDR             149
#define MSG_PAGE_FTR             150
#define MSG_ROW_BREAK            151
#define MSG_DEL_DRAW_OBJ         152
#define MSG_DEL_FRAME            153
#define MSG_IRREVERSIBLE_DEL     154
#define MSG_ERR_PRINT            155
#define MSG_FIRST_HDR            156
#define MSG_FIRST_FTR            157
#define MSG_DEL_FIRST_HDR        158
#define MSG_DEL_FIRST_FTR        159
#define MSG_BAD_PNG_DATA         160
#define MSG_PRINTING_CANCELLED   161
#define MSG_SMALL_CELL_MARGIN    162
#define MSG_READ_ONLY            163
#define MSG_NO_PRINTER           164
#define MSG_DEL_TOC              165
#define MSG_NO_RTF_INFO_BLOCK    166
#define MSG_NO_LIST_BLOCK        167
#define MSG_NO_LIST_OR_BLOCK     168
#define MSG_DEL_HDR              169
#define MSG_DEL_FTR              170
#define MSG_ERR_JPG_MCU          171
#define MSG_OUT_OF_IMAGE_MAP_TABLE 172
#define MSG_COLUMNS              173
#define MSG_GIF_FILES            174
#define MSG_ENH_METAFILES        175
#define MSG_BMP_FILES            176
#define MSG_METAFILES            177
#define MSG_JPG_FILES            178
#define MSG_PNG_FILES            179
#define MSG_PICTURE_SIZE         180
#define MSG_SINGLE               181
#define MSG_15LINES              182
#define MSG_DBL_LINE             183
#define MSG_EXACTLY              184
#define MSG_MULTIPLE             185
#define MSG_LINES                186
#define MSG_POINTS               187
#define MSG_TAB_POS              188
#define MSG_MARGIN               189
#define MSG_PNG_ABORT            190
#define MSG_FATAL_ERROR          191
#define MSG_FILE_OPEN            192
#define MSG_ERROR                193
#define MSG_SPL_DONE             194
#define MSG_BAD_RTF              195
#define MSG_UNKNOWN              196
#define MSG_ATLEAST              197
#define MSG_PAGE_BOX             198
#define MSG_IGNORE_ALL           199
#define MSG_ADD                  200
#define MSG_SB_INS               201
#define MSG_SB_OT                202
#define MSG_SB_PAGE              203
#define MSG_SB_LINE              204
#define MSG_SB_ROW               205
#define MSG_SB_COL               206
#define MSG_PP_ONE_PAGE          207
#define MSG_PP_TWO_PAGES         208
#define MSG_PP_PRINT             209
#define MSG_PP_EDIT              210
#define MSG_PP_PG                211
#define MSG_PP_FITTED            212
#define MSG_TIFF                 213
#define MSG_TIF_FILES            214
#define MSG_INVOKE_TEXT_LINK     215
#define MSG_NO_REVIEWER_BLOCK    216
#define MSG_INSERTED_BY          217
#define MSG_DELETED_BY           218
#define MSG_NO_CHANGED_TEXT      219
#define MSG_ACCEPT_CHANGES       220
#define MSG_CHANGES_COUNT        221
#define MSG_MENU_EDIT_FRAME      222
#define MSG_MENU_EDIT_LIST       223
#define MSG_MENU_EDIT_HDR_FTR    224
#define MSG_MENU_EDIT_FNOTE      225
#define MSG_MENU_EDIT_TRACK      226
#define MSG_MENU_INSERT_BREAK    227
#define MSG_MENU_INSERT_FNOTE    228
#define MSG_REJECT_CHANGES       229
#define MSG_REJECT_COUNT         230
#define MSG_DATA_TOO_BIG         231
#define MSG_PAGE_LHDR            232
#define MSG_PAGE_LFTR            233
#define MSG_PAGE_RHDR            234
#define MSG_PAGE_RFTR            235
#define MSG_XML_READER           236
#define MSG_OLD_XML_LIB          237
#define MSG_HTML_ADD_ON          238
#define MSG_FMT_BY               239
#define MSG_PDF                  240
#define MSG_PARA_FMT_BY          241
#define MSG_LOAD_LIBRARY         242
#define MSG_ST_EVAL_EXPIRED      243
#define MSG_ST_BAD_LICENSE       244
#define MSG_OLD_DOC_FILE         245
#define MSG_ENCRYPTED_DOC_FILE   246
#define MSG_ALL_PICT_FILES       247

#define MAX_MSGS                 250


/******************************************************************************
    WIN32 specific defines
*******************************************************************************/
#if defined (WIN32)
   #define TER_HUGE
#else
   #define TER_HUGE huge
#endif

/******************************************************************************
    More constant definitions
*******************************************************************************/
typedef LRESULT (FAR PASCAL  *VBX_CALLBACK)(HWND, UINT,WPARAM,LPARAM);
typedef LRESULT (FAR PASCAL  *MSG_CALLBACK)(HWND, UINT,WPARAM,LPARAM);
typedef int     (FAR PASCAL  *PRINT_CALLBACK)(HWND,HWND);
typedef BOOL    (FAR PASCAL  *PDC_CALLBACK)(HWND,HDC,int,int,int);

/****************************************************************************
   Instructions for packing the following structure
*****************************************************************************/
#ifndef RC_INVOKED
   #pragma pack(1)
#endif

/******************************************************************************
   Argument Structure:
   A set of control variables are passed by the user program to the
   'CreateTerWindow' routine. The variables are passed using the structure
   'arg_list',  as described below. The user program passes the POINTER to
   this structure.
   This file must be included by your application module that calls the
   TER routine.
*******************************************************************************/
struct arg_list {
    int    x;         /* Initial x position of the editing window,
                         you may specify CW_USEDEFAULT to use default values.*/
    int    y;         // Initial y position of the editing window.
    int    width;     /* Initial width of the window in device units,
                         you may specify CW_USEDEFAULT to use default values.*/
    int    height;    /* Initial height of the editing window.  When you
                         use CW_USEDEFAULT for 'width', the 'height' is
                         ingnored.*/
    int   LineLimit; /* Number of lines allowed in the editor window.
                         Set to 0 to have unlimited number of lines*/

    BOOL   WordWrap;  /* Set this flag to true (1),  if you wish to enable the
                         word wrapping feature. */
    BOOL   PrintView; /* Set this flag to true if you wish the lines on
                         the screen to be wrapped current page margins.
                         Otherwise, the lines are wrapped at the end of
                         the window. This variable is ignored if 'WordWrap'
                         is set to FALSE */
    BOOL   PageMode;  /* Set this flag to true if you wish to edit one page
                         at a time */
    BOOL   FittedView;// Set this flag to enable special PageMode where the
                      // text wraps within the window width
    BOOL   ShowStatus;// show status line ?
    BOOL   ShowMenu;  // show the menu bar ?
    BOOL   ShowHorBar;// show the horizonatal scroll bar
    BOOL   ShowVerBar;// show the vertical scroll bar
    BOOL   ruler;     // True to show the ruler
    BOOL   ToolBar;   // True to show the tool bar
    BOOL   UserCanClose;// TRUE allows the user to close the window
    BOOL   BorderMargins;// display margins around the window borders
    BOOL   ReadOnly;    // TRUE to create a read only session

    int   InitLine;  // Line number to position at the beginning.
    BYTE   InputType; /* This flag specifies the input type. If you wish to
                         edit a file, set the input_type to 'F'. Conversely,
                         if you wish to pass the text for editing in a buffer,
                         set this field to 'B'.*/

    BYTE   file[299];/*  20091022: increased from 131 to 299; If the input type is set to 'F',  specify the file
                         name for editing in this field. */

                     // ===== Buffer input fields only =======
    HGLOBAL hBuffer; /*  Specify the global memory handle containing the
                         input text data.  This handle becomes the property
                         of the editor.  Your program must never try to lock
                         or free this handle */
    int BufferLen;  //  Buffer length in number of characters.
    BYTE delim;      /*  Line delimiter character.  This character must be
                         used to delimit individual lines within the
                         text buffer.  This character is normally typically set
                         to 13 (carriage return) */

    BYTE   padding1[3]; // This field is not used

    int    SaveFormat;// The format of the output file: SAVE_TER, SAVE_TEXT,
                      // SAVE_RTF and SAVE_AS_INPUT

    HINSTANCE hInst;  //  Handle of the current instanaces.
    HWND   hParentWnd;// Handle to the parent window
    HWND   hTextWnd; //  Ter main window handle, will be filled by TER later
    DWORD  style;    //  Editor window style
    BYTE   FontTypeFace[28]; // Default type face, example: TmwRmn Courier, etc
    int    PointSize;// point size of the default font face

    BOOL       open;     // TRUE indicates an open window
    int        modified; // For internal use
    BOOL       vruler;   // sbow vertical ruler
    };


/******************************************************************************
   Field Data Structure:
   This structure is used to retrieve (GetTerFields()) and set (SetTerFields())
   control fields for a TER window.
*******************************************************************************/
struct StrTerField {
   /* The following fields are read/write fields.  To update a field,
      you must retrieve the current values by calling the GetTerFields function.
      Modify the fields that you wish to, and then call the SetTerFields
      function to make the new value effective
   **************************************************************************/
      int      size;              // size of this structure, used for version matching

      int      CurColW,           // current window column position
               PaintEnabledW,     // FALSE=disables the painting and word wrapping
               WrapFlagW;         // wrap control, see WRAP_ constants

      int     CurRowW,           // current window row position
               BeginLineW,        // line number of the first window line
               CurLineW;          // current line number in the file

      COLORREF TextBkColorW,      // background color for text
               StatusBkColorW,    // background color of the status line
               StatusColorW;      // foreground color of the status line

      int      HilightTypeW,      // line or character block, see HILIGHT_ constants
               HilightBegColW,    // beginning col
               HilightEndColW;    // ending col

      int     HilightBegRowW,    // beginning row
               HilightEndRowW;    // ending row

      BOOL     StretchHilightW;   // TRUE = highlight being stretch

      // please do not use following two fields as they are being phased out.
      // To get the text and font information, use TerGetLine function instead.
      BYTE     text[1000];       // 20110607: changed from MAX_WIDTH to 1000 to leave it at 1000 for compatibility, these fields are deprecated; line text data, NULL terminated
      BYTE     font[1000];       // font id for every character in the 'text' array

      int      pfmtW;             // paragraph id of the current line
      int      LineLenW;          // length of the 'text' array

      int      TextApply;        /* use this variable to specify how the 'text'
                                    and 'font' data should be applied to the
                                    current TER window, see APPLY_ constants */

      BOOL     ReclaimResourcesW;  // reuse unused font and para ids

      BOOL     ModifyProtectColorW,// modify the color or the protected text
               LinkDblClickW,      // TRUE to activate hyperlink on double click, otherwise use single click
               ShowProtectCaretW;  // TRUE to show caret on the protected text

      UINT     LinkStyleW;         // character style of the hyperlink phrase
      COLORREF LinkColorW;         // color of the linked phrase

      BOOL     SnapToGridW,        // TRUE to snap ruler items to an invisble grid
               HtmlModeW,          // TRUE when html mode in effect
               ShowTableGridLinesW;// TRUE to show table grid lines

   /* The following are the read only fields.  TER will ignore any
      modification to these fields.
   **************************************************************************/
      HWND     hTerWndW;          // handle to the editor window
      HDC      hTerDCW;           // handle to TER class DC
      RECT     TerRectW,          // entire client window rectangal
               TerWinRectW;       // text window rectangal

      int     TotalLinesW,       // total lines in the file
               MouseLineW,        // text line position of mouse
               MaxColBlockW;      // biggest column block allowed

      int      TotalPfmtsW,       // total paragraph ids in use by the current window
               TotalFontsW,       // Total font objects in use by the current window
               TotalStylesW,      // Total number of styles

               WinWidthW,         // current window in columns
               WinHeightW,        // current window height in number of rows
               TerWinOrgXW,       // window origin x co-ordinates
               MouseColW;         // text column position of mouse

      BOOL     modified;          // data modified, user needs to select the 'save' option to save data
      BOOL     WordWrapW;         // TRUE when wordwrap turned on

      int      ParaLeftIndentW;   // paragraph left indent in twips
      int      ParaRightIndentW;  // paragraph right indent in twips
      int      ParaFirstIndentW;  // paragraph first line indent in twips
      UINT     ParaFlagsW;        // paragraph flags,includes such flags as double spacing,centering, right justify etc
      int      ParaTabIdW;        // paragraph tab id, index into the tab table
      int      ParaCellIdW;       // paragraph cell id that the paragraph beints to
      UINT     ParaShadingW;      // paragraph shading (0 to 10000)
      int      ParaFrameIdW;      // paragraph frame id
      int      ParaSpaceBeforeW;  // paragraph space before the paragraph in twips
      int      ParaSpaceAfterW;   // paragraph space after the paragraph in twips
      int      ParaSpaceBetweenW; // paragraph space between the paragraph in twips
      int      ParaStyleIdW;      // paragraph style id
      int      ParaAuxIdW;        // paragraph auxiliary id
      int      pflagsW;           // paragraph PFLAG_ constants

      int      CurSectW;          // current section number

      int      LeftMarginW;       // section left margin in twips
      int      RightMarginW;      // section right margin in twips
      int      TopMarginW;        // section top margin in twips
      int      BotMarginW;        // section bottom margin in twips
      int      columnsW;          // number of columns in the current section

      int      CurPageW;          // current page number
      int      TotalPagesW;       // total pages

      int      MouseXW;           // last mouse x position
      int      MouseYW;           // last mouse y position

      BOOL     PrintViewW;        // TRUE when the print view mode is turned on
      BOOL     PageModeW;         // TRUE when the page mode is turned on
      BOOL     FittedViewW;       // TRUE when the fitted view is turned on
      BOOL     ShowParaMarkW;     // TRUE when showing the paramarkers
      BOOL     ShowHiddenTextW;   // TRUE when showing the hidden text

      int      CurCtlIdW;         // currently selected control id
      UINT     ParaFrameFlagsW;   // Para frame flags
    };

/******************************************************************************
   Hyperlink Data Structure:
   This structure is used to pass hyperlink data to your application.
*******************************************************************************/
struct StrHyperLink {
      HWND    hWnd;               // Message windows
      BYTE    code[MAX_WIDTH+2];  // hyperlink code
      BYTE    text[MAX_WIDTH+2];  // hyperlink text
      BOOL    DoubleClick;        // TRUE if mouse double clicked, otherwise single click
      WORD    codeW[MAX_WIDTH+2];  // hyperlink code in unicode format, 20100402
      WORD    textW[MAX_WIDTH+2];  // hyperlink text in unicode format
    };

struct StrAdjustColor {
      HWND     hWnd;               // Message windows
      int      ColorType;               // color type
      COLORREF ForeColor;          // foreground color
      COLORREF BackColor;          // background color
    };

/******************************************************************************
   Background picture draw message structure
*******************************************************************************/
struct StrBkndPict {
      HDC     hDC;                // DC to draw the image
      RECT    rect;               // rectangle to fill the image with
    };

/******************************************************************************
   Print request parameter structure
   This structure is used to call the 'TerMergePrint' function to print
   a buffer or file containing text data in supported formats (RTF, native TER,
   and Ascii).
*******************************************************************************/
struct StrPrint {
    BYTE   InputType; /* This flag specifies the input type. If you wish to
                         specify a disk file name, set the input_type to 'F'.
                         Conversely, if you wish to pass the text for in a buffer,
                         set this field to 'B'.*/
    BYTE   file[299];/*  If the input type is set to 'F',  specify the input
                         file name in this field. */

                     // ===== Buffer input fields only =======
    HANDLE  hBuffer; /*  Specify the global memory handle containing the
                         input text data. */
    int BufferLen;  //  Buffer length in number of characters.
    BYTE delim;      /*  Line delimiter character used to delimit the lines
                         in the input buffer.  This character can be a CR or
                         any other character. Not used for an RTF buffer */
    BYTE   padding1[3];// This field is not used


    HDC    hDC;       // Printer or Window device context to print to.
                      // If NULL, the default printer
                      // device is opened.  The device context must be set to
                      // the pixel mapping mode.
    LPRECT rect;      // Printing area specified in mm (millimeter) units.
                      // If NULL, the entire page with default margins is used.
                      // The NULL value is not valid when printing to a
                      // window device context
    int   StartPos;  // Starting character position.  Set to 0 to begin from
                      // the first page.
    BOOL   OnePage;   // Set to TRUE to print one (initial) page only.  The
                      // printed page is NOT spooled to the printer.
    int   NextPos;   // (OUTPUT) When OnePage is TRUE, the TerMergePrint function
                      // returns the character where the next page should begin.
                      // This value is set to 0 after the entire buffer is printed

                     // ===== Mail merge fields ==================
    LPBYTE  MergeFields;      // pointer to a list of mail merge field names.
                             // The fields must be separated  by a '|' character.
                             // The list must be terminated by a NULL character
    LPBYTE  MergeData;        // pointer to a list of mail merge data values.
                             // Each data vlue must be separated  by a '|' character.
                             // The list must be terminated by a NULL character
                             // The number of data elements in the MergeData
                             // MUST be same as the number of elements in the
                             // MergeFields array

                     // ===== Other fields ==================
    BOOL   PrintHiddenText;  // TRUE to print any hidden text
    HINSTANCE hInst;         // Instanaces handle of your program
    HWND   hParentWnd;       // A window handle in your application to receive mail merge messages

    int    NextY;            // (OUTPUT) The DLL returns the Y position on the paper

    HDC    hMetaDC;          // Metafile device context to print to.  Set to NULL
                             // print to the hDC specified above or to the default
                             // printer.  When hMetaDC is not NULL, the hDC is
                             // used as an attribute device context.

    };

struct StrTab {              // tab table
    int  count;              // number of tabs
    int  pos[TE_MAX_TAB_STOPS]; // tab stop position in twips
    int  type[TE_MAX_TAB_STOPS];// tab type each stop, TAB_LEFT, TAB_RIGHT
    BYTE flags[TE_MAX_TAB_STOPS]; // Other TAB_ constants
    };                       // pointer to the tab table

/****************************************************************************
   Instructions to resume the default structure packing.
*****************************************************************************/
#ifndef RC_INVOKED
   #pragma pack()
#endif

/******************************************************************************
               TER Messages
*******************************************************************************/

/*******************************************************************************
   TER_CLOSE:
   Ter sends this message to the parent window (your application window)
   before closing.  The wParam variables contains the handle of the TER
   window.  lParam is not used.

   If your application is using a GlobalBuffer, you can retrieve the updated
   buffer when receiving this message. Use the GetTerBuffer() function to
   retrived the global handle to updated text data.
*******************************************************************************/
#define TER_CLOSE    (WM_USER+1700)

/*******************************************************************************
   TER_MODIFIED:
   Ter sends this message to the parent window once when the editor text is
   modified. The wParam variable contains the handle of the TER window.
*******************************************************************************/
#define TER_MODIFIED (WM_USER+1701)

/*******************************************************************************
   TER_LINK:
   Ter sends this message to the parent window when the user clicks on
   the hyperlink text.
*******************************************************************************/
#define TER_LINK (WM_USER+1702)

/*******************************************************************************
   TER_MERGE:
   Ter sends this message to the parent window to get the mail merge field
   data for a field name.  The TerMergePrint function first checks the
   supplied list of mail merge code.  Only if the required code is not
   found in the input list, it sends this message.
   The 'wParam' parameter contains the handle to the TER window, and
   the 'lParam' parameter contains the pointer to the field name.
   Your applicaton should return the pointer to the field text, or NULL if text not available.
*******************************************************************************/
#define TER_MERGE (WM_USER+1703)

/*******************************************************************************
   TER_NOT_SAVED:
   Ter sends this message to the parent window (your application window)
   if the user abandons the modifications.
   The wParam variables contains the handle of the TER window.  lParam is not used.
   The TER_CLOSE message always follows this message.
*******************************************************************************/
#define TER_NOT_SAVED    (WM_USER+1704)

/*******************************************************************************
   TER_UPDATE_TOOLBAR:
   This messages notifies your application to update any external toolbar that
   your application might be using.
*******************************************************************************/
#define TER_UPDATE_TOOLBAR   (WM_USER+1705)
#define TER_UPDATE_STATUSBAR (WM_USER+1706)

#define TER_ACTION           (WM_USER+1707)
#define TER_PREPROCESS       (WM_USER+1708)
#define TER_XLATE_PICT       (WM_USER+1709)

#define TER_HTML_SIZE        (WM_USER+1710)

#define TER_ANIM_PICT        (WM_USER+1711)
#define TER_REPAINT          (WM_USER+1712)
#define TER_DROP             (WM_USER+1713)
#define TER_DRAG             (WM_USER+1714)
#define TER_BEFORE_DROP      (WM_USER+1715)
#define TER_PAGE_SIZE_CHANGING (WM_USER+1716)
#define TER_CREATED          (WM_USER+1717)
#define TER_SAVE_UNDO        (WM_USER+1718)
#define TER_USER_FIELD1      (WM_USER+1719)
#define TER_BKND_PICT        (WM_USER+1720)
#define TER_USER_DROP        (WM_USER+1721)
#define TER_FONT_CHECK       (WM_USER+1722)
#define WMTER_UNI_CHAR       (WM_USER+1723)
#define TER_ADJUST_COLOR     (WM_USER+1724)

#define TER_DRAGON           (WM_USER+1725)    // input message from Dragon
#define TER_RESOLVE_IMAGE_PATH (WM_USER+1726)  // the application must return 1 if the picture path is override, otherwise return 0

#define TER_TSF_NEW_TEXT     (WM_USER+1727)    // pass the tsf text to caller before inserting into the text
#define TER_TSF_PHRASE_ENDED (WM_USER+1728)    // tell the caller that TSF phrase has ended

/******************************************************************************
                     Editor Function Prototype
   When calling TER from a C program, leave the TER_CPLUSPLUS symbol undefined.

   When calling TER from a C++ program, define the TER_CPLUSPLUS as following:

   #define TER_CPLUSPLUS extern "C"
   #include "ter.h"
*******************************************************************************/
#ifndef TER_CPLUSPLUS
   #if defined(__cplusplus)
      #define TER_CPLUSPLUS extern "C"
      #define TER_LPDATAOBJECT LPVOID
   #else
      #define TER_CPLUSPLUS
      #define TER_LPDATAOBJECT LPDATAOBJECT
   #endif
#endif

#if defined (TOC)
   #define DWORD_PTR DWORD
#endif

TER_CPLUSPLUS HWND   WINAPI  CreateTerWindow(struct arg_list *);
TER_CPLUSPLUS BOOL   WINAPI  CloseTer(HWND,BOOL);
TER_CPLUSPLUS HGLOBAL WINAPI  GetTerBuffer(HWND, int *);
TER_CPLUSPLUS BOOL   WINAPI  SetTerBuffer(HWND,HGLOBAL,int,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  GetTerFields(HWND,struct StrTerField *);
TER_CPLUSPLUS BOOL   WINAPI  SetTerFields(HWND,struct StrTerField *);
TER_CPLUSPLUS BOOL   WINAPI  InsertRtfBuf(HWND,BYTE TER_HUGE *,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerFont(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerDefaultFont(HWND,LPBYTE,int,UINT,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerPointSize(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerCharStyle(HWND,UINT,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerColor(HWND,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerBkColor(HWND,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  InsertTerText(HWND,BYTE TER_HUGE *,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SelectTerText(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerCursorPos(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  GetTerCursorPos(HWND,int *,int *);
TER_CPLUSPLUS BOOL   WINAPI  SetTerParaFmt(HWND,UINT,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ParaIndentTwips(HWND,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ParaLeftIndent(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ParaRightIndent(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ParaHangingIndent(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ParaNormal(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  DeselectTerText(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTab(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ClearTab(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ClearAllTabs(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMergeFields(HWND,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMergePrint(struct StrPrint *);
TER_CPLUSPLUS BOOL   WINAPI  TerMergePrintVB(struct StrPrint *,LPRECT,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerPageBreak(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPrint(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPrintPreviewMode(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPrintPreview(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerColBreak(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableRefresh(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateStyle(HWND,UINT,int *,int *,int *);
TER_CPLUSPLUS BOOL   WINAPI  TerSectBreak(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetModify(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetOutputFormat(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaShading(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  LoadTerControl(void);
TER_CPLUSPLUS int    WINAPI  GetTerLine(HWND,int,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  SetTerLine(HWND,int,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  GetFontInfo(HWND,int,LPBYTE,LPINT,UINT *);
TER_CPLUSPLUS BOOL   WINAPI  SaveTerFile(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  ReadTerFile(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetTextColor(HWND,int,LPDWORD,LPDWORD);
TER_CPLUSPLUS UINT   WINAPI  TerMenuEnable(HWND,int);
TER_CPLUSPLUS UINT   WINAPI  TerMenuSelect(HWND,int);
TER_CPLUSPLUS int   WINAPI  TerRowColToAbs(HWND,int,int);
TER_CPLUSPLUS void   WINAPI  TerAbsToRowCol(HWND,int,int *,int *);
TER_CPLUSPLUS BOOL   WINAPI  TerPrintPreview(HWND,HDC,RECT *,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMargin(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetReadOnly(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableSpeedKey(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRewrap(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSearchReplace(HWND,LPBYTE,LPBYTE,UINT,int,int *,int *);
TER_CPLUSPLUS int    WINAPI  TerPastePicture(HWND,UINT,HGLOBAL,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetHypertext(HWND,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerCreateTable(HWND,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerPictureFromFile(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertParaFrame(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMoveParaFrame(HWND,int,int,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  GetTerFieldsAlt(HWND,struct StrTerField *,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaSpacing(HWND,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerDataVersion(void);
TER_CPLUSPLUS BOOL   WINAPI  TerAppendText(HWND,BYTE TER_HUGE *,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertText(HWND,BYTE TER_HUGE *,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerCreateFont(HWND,int,BOOL,LPBYTE,int,UINT,COLORREF,COLORREF,int,int);
TER_CPLUSPLUS int    WINAPI  TerCreateParaId(HWND,int,BOOL,int,int,int,int,int,int,UINT,UINT,int,int,int,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetAppMemory(HWND,int);
TER_CPLUSPLUS LPVOID WINAPI  TerGetAppMemory(HWND);
TER_CPLUSPLUS int    WINAPI  TerSetDefTabWidth(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertObjectId(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRegisterVbxCallback(HWND,VBX_CALLBACK);
TER_CPLUSPLUS VBX_CALLBACK WINAPI  TerGetVbxCallback(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerRegisterMsgCallback(HWND,MSG_CALLBACK);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPictInfo(HWND,int,UINT *,LPRECT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictInfo(HWND,int,UINT,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictSize(HWND,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerPictureFromWmf(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertControl(HWND,LPBYTE,DWORD,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPrinter(HWND,LPBYTE,LPBYTE,LPBYTE,HGLOBAL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosHdrFtr(HWND,int,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosTable(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRepaint(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParentPtr(HWND,void *);
TER_CPLUSPLUS LPVOID WINAPI  TerGetParentPtr(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertFootnote(HWND,LPBYTE,LPBYTE,UINT,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateStyleChar(HWND,UINT,BOOL,int *,int *,BOOL);
TER_CPLUSPLUS int    WINAPI  TerScrLineHeight(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPreview(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSect(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFontId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPaper(HWND,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertDrawObject(HWND,int,int,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetCurFont(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetEffectiveFont(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBullet(HWND,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerEditStyle(HWND,BOOL,LPBYTE,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectCharStyle(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectParaStyle(HWND,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetFontStyleId(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerSetZoom(HWND,int);
TER_CPLUSPLUS int   WINAPI  TerGetPageFirstLine(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTab(HWND,int,int,BYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetPageSect(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectOrient(HWND,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetPageOrient(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerRowPosition(HWND,UINT,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRowHeight(HWND,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFrameYBase(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetObjectAttrib(HWND,int,int,int,COLORREF,BOOL,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBkPictId(HWND,int,UINT,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertPictureFile(HWND,LPBYTE,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTableColWidth(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertTableCol(HWND,BOOL,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertTableRow(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerCellBorder(HWND,int,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerCellShading(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosLineAtTop(HWND,int,BOOL);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags(HWND,BOOL,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerGetFrameSize(HWND,int,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetTabStop(HWND,int,int,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerAppendTextEx(HWND,BYTE TER_HUGE *,int,int,int,int,BOOL);
TER_CPLUSPLUS HGLOBAL WINAPI  TerGetRtfSel(HWND,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetParaInfo(HWND,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,UINT *,LPINT,LPINT,LPINT,UINT *);
TER_CPLUSPLUS BOOL   WINAPI  TerGetLineInfo(HWND,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPDWORD,UINT *);
TER_CPLUSPLUS int    WINAPI  TerGetLastMessage(LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerResetLastMessage();
TER_CPLUSPLUS BOOL   WINAPI  TerPictLinkName(HWND,int,BOOL,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetCellInfo(HWND,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,UINT *);
TER_CPLUSPLUS int    WINAPI  TerGetControlId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerRepaginate(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetReadOnly(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaAuxId(HWND,int,int,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSavePict(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaId(HWND,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerCreateCellId(HWND,BOOL,int,int,int,int,int,int,int,int,int,int,int,int,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharAuxId(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertLine(HWND,BYTE TER_HUGE *,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteCells(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkFontTable(void);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPaperEx(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS int   WINAPI  TerMergePrintRep(HDC,LPBYTE,HGLOBAL,DWORD,RECT *,LPBYTE,LPBYTE,int,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteBlock(HWND,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetLine(HWND,int,LPBYTE,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLine(HWND,int,LPBYTE,LPWORD);
TER_CPLUSPLUS HGLOBAL WINAPI  TerGetTextSel(HWND,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerTextPosToPix(HWND,int,int,int,LPINT,LPINT);
TER_CPLUSPLUS HGLOBAL WINAPI  TerFileToMem(LPBYTE,DWORD *);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectPrint(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerPosFrame(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosBodyText(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPixToTextPos(HWND,int,int,int,LPDWORD,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetNextFontAux1Id(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerGetFontAux1Id(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPflags(HWND,UINT,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerCommand(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefPrinter(LPBYTE,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertRtfFile(HWND,LPBYTE,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerNormalizeBlock(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSearchString(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosPage(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharSet(HWND,BYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPagePos(HWND,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPagePos(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectEx(HWND,int,int,BOOL,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetHypertextEx(HWND,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetPageOrientEx(HWND,int,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerHtmlCellWidthFlag(HWND,int,UINT,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetNewFrameDim(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBorderColor(HWND,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerCellColor(HWND,int,COLORREF,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertPictureFileXY(HWND,LPBYTE,BOOL,int,BOOL,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBulletEx(HWND,BOOL,BOOL,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetBulletInfo(HWND,int,int,LPINT,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerCreateBulletId(HWND,BOOL,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBulletId(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerPictureFromJpg(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefTextColor(HWND,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetWrapWidth(HWND,int,int,BOOL);
TER_CPLUSPLUS DWORD  WINAPI  TerOverrideStyles(DWORD);
TER_CPLUSPLUS HWND   WINAPI  TerCreateWindowAlt(int,int,int,int,BOOL,HWND,DWORD);
TER_CPLUSPLUS int    WINAPI  TerInsertLineObject(HWND,int,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerCreateParaIdEx(HWND,int,BOOL,int,int,int,int,int,int,UINT,UINT,int,int,int,UINT,int,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaBkColor(HWND,BOOL,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerIgnoreCommand(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerFlushUndo(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetWinBorder(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerLineSelected(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerCellVertAlign(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectCol(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteHypertext(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetCellBorderWidth(HWND,int,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetAccelHandle(HWND,HANDLE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetSectInfo(HWND,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerCreateTabId(HWND,struct StrTab *);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags2(HWND,BOOL,DWORD);
TER_CPLUSPLUS int    WINAPI  TerCreateParaFrameId(HWND,int,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerSetTag(HWND,int,int,LPBYTE,LPBYTE,int,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerPosTag(HWND,int,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPrintEx(HWND,BOOL,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetDrawObjectInfo(HWND,int,LPINT,LPINT,LPINT,COLORREF *,COLORREF *,UINT *);
TER_CPLUSPLUS int    WINAPI  TerGetDispPageNo(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerIsPrinting(HWND);
TER_CPLUSPLUS int    WINAPI  TerInsertOleObject(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerAdjustHtmlTable(HWND);
TER_CPLUSPLUS int    WINAPI  TerXlateControlId(HWND,int);
TER_CPLUSPLUS HDC    WINAPI  TerGetBufferDC(HWND);
TER_CPLUSPLUS int   WINAPI  TerGetCaretPos(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerGetHypertext2(HWND,int,int,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMarginEx(HWND,int,int,int,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRowPositionEx(HWND,UINT,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMovePictFrame(HWND,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetMarginEx(HWND,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetTag(HWND,int,int,LPBYTE,LPBYTE,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetObjectAttribEx(HWND,int,int,int,COLORREF,BOOL,COLORREF,int);
TER_CPLUSPLUS int    WINAPI  TerGetSeqSect(HWND,int);
TER_CPLUSPLUS int   WINAPI  TerSplitMbcs(HWND,BYTE TER_HUGE *,BYTE TER_HUGE *,BYTE TER_HUGE *);
TER_CPLUSPLUS int    WINAPI  TerMakeMbcs(HWND,LPBYTE,LPBYTE,LPBYTE,int);
TER_CPLUSPLUS int    WINAPI  TerGetLineEx(HWND,int,LPBYTE,LPBYTE,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLineEx(HWND,int,LPBYTE,LPBYTE,LPWORD);
TER_CPLUSPLUS int    WINAPI  TerPictureFromGif(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRegisterPrintCallback(PRINT_CALLBACK);
TER_CPLUSPLUS int   WINAPI  TerMbcsLen(HWND,BYTE TER_HUGE *);
TER_CPLUSPLUS WORD   WINAPI  TerMbcsChar(HWND,BYTE TER_HUGE *,int);
TER_CPLUSPLUS int    WINAPI  TerInsertBookmark(HWND,int,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteBookmark(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerPosBookmark(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetBookmark(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerCreateFirstHdrFtr(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteFirstHdrFtr(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosHdrFtrEx(HWND,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetRtfDocInfo(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRtfDocInfo(HWND,int,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerPictureFromEmf(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertField(HWND,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetField(HWND,int,int,int,BYTE TER_HUGE *);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateField(HWND,int,LPBYTE,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPrint2(HWND,BOOL,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerChangeField(HWND,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteField(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTextCase(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharSpace(HWND,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFontSpace(HWND,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetFontSpace(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerOverridePageSize(int,int);
TER_CPLUSPLUS int   WINAPI  TerGetWordCount(HWND,UINT);
TER_CPLUSPLUS int    WINAPI  TerPageFromLine(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFontStyleId(HWND,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerClosePrinter(void);
TER_CPLUSPLUS int    WINAPI  TerCreateFont2(HWND,int,BOOL,LPBYTE,int,UINT,COLORREF,COLORREF,int,int,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHdrRow(HWND,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetInitTypeface(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerDocName(HWND,BOOL,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRowKeep(HWND,int,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetFontFieldId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSect2(HWND,int,int,BOOL,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  GetFontInfo2(HWND,int,LPBYTE,LPINT,UINT *);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags3(HWND,BOOL,DWORD);
TER_CPLUSPLUS int    WINAPI  TerGetTagEx(HWND,int,int,int,LPBYTE,LPBYTE,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerPosTagEx(HWND,int,int,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetTablePos(HWND,LPINT,LPINT,LPINT);
TER_CPLUSPLUS UINT   WINAPI  TerAnd(UINT,UINT);
TER_CPLUSPLUS UINT   WINAPI  TerOr(UINT,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSpellCheck(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPageBorderDim(HWND,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerInsertTextInputField(HWND,LPBYTE,LPBYTE,int,BOOL,LPBYTE,int,UINT,COLORREF,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertCheckBoxField(HWND,LPBYTE,int,BOOL,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetParaInfo2(HWND,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,UINT *,LPINT,LPINT,LPINT,UINT *,DWORD *, COLORREF *);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteStyle(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefDir(HWND,LPBYTE,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharLang(HWND,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetFontLang(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefLang(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFocus(HWND);
TER_CPLUSPLUS int    WINAPI  TerGetStyleId(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateFontId(HWND,int,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerCreateBulletId2(HWND,BOOL,int,int,int,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBullet2(HWND,BOOL,BOOL,int,int,int,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerLocateInputField(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetInputFieldInfo(HWND,int,LPBYTE,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetCheckboxInfo(HWND,int,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetTextFieldInfo(HWND,int,LPBYTE,LPINT,LPINT,LPBYTE,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCheckboxInfo(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetInputFieldInfo(HWND,int,LPBYTE,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTextFieldInfo(HWND,int,LPBYTE,int,int,LPBYTE,int,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetSelection(HWND,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetStyleInfo(HWND,int,LPBYTE,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectRow(HWND,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertOleFile(HWND,LPBYTE,BOOL,BOOL,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetVisibleCol(HWND,int,int);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags4(HWND,BOOL,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteHdrFtr(HWND,BYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetTableLevel(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetRowInfo(HWND,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCaretPos(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateToolbar(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerPosAfterTable(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetParaInfo3(HWND,int,BOOL,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,UINT *,LPINT,LPINT,LPINT,UINT *,DWORD *, COLORREF *);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaSpacing2(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerQueryExit(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertFootnote2(HWND,LPBYTE,LPBYTE,UINT,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerEditList(HWND,BOOL,int,BOOL,LPBYTE,BOOL,DWORD);
TER_CPLUSPLUS int    WINAPI  TerEditListOr(HWND,BOOL,int,BOOL,int,BOOL,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerEditListLevel(HWND,BOOL,int,int,int,int,int,LPBYTE,int,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaList(HWND,BOOL,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerCreateListBulletId(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetStatusColor(HWND,COLORREF,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerMenuSelect2(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerMenuEnable2(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCellInfo2(HWND,int,COLORREF,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerEditTooltip(HWND,int,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetBulletInfo2(HWND,int,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaIndent(HWND,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetListInfo(HWND,int,LPBYTE,LPINT,LPDWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerGetListOrInfo(HWND,int,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetListLevelInfo(HWND,BOOL,int,int,LPINT,LPINT,LPINT,LPBYTE,LPINT,LPDWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteObject(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetListInfo2(HWND,int,LPBYTE,LPINT,LPDWORD,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSpellCheckerPopped(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerCellBorderColor(HWND,int,COLORREF,COLORREF,COLORREF,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetCellBorderColor(HWND,int,COLORREF *,COLORREF *,COLORREF *,COLORREF *);
TER_CPLUSPLUS BOOL   WINAPI  TerGetParaInfo4(HWND,int,BOOL,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,UINT *,LPINT,LPINT,LPINT,UINT *,DWORD *, COLORREF *, LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerRecreateToolbar(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerHideToolbarIcon(int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetPictOffset(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictOffset(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateHyperlinkText(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateHyperlinkCode(HWND,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerInsertHyperlink(HWND,LPBYTE,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerFindHlinkField(HWND,LPBYTE,LPBYTE,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPageCount(HWND,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateFieldChar(HWND, int, LPBYTE, BOOL, int *, int *, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosTable2(HWND,int,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetTablePos2(HWND,LPINT,LPINT,LPINT,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectBorder(HWND,int,int,int,int,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectPageSize(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerCellWidth(HWND,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosTable3(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetTableId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTableId(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerCreateOcxObject2(HWND,LPBYTE,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetOcxIntProp(HWND,int,LPBYTE,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetOcxTextProp(HWND,int,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerRotateFrameText(HWND,BOOL,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictFrame2(HWND,int,int,int,int,BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetParam(HWND,int);
TER_CPLUSPLUS LPVOID WINAPI  TerGetOlePtr(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFrameMarginDist(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerSetUndoRef(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerLparam2String(int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerString2Lparam(LPBYTE,int);
TER_CPLUSPLUS BOOL   WINAPI  TerScrToTwipsX(HWND,int,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerScrToTwipsY(HWND,int,LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetTabStop2(HWND,int,int,int,LPINT,LPINT,LPINT);
TER_CPLUSPLUS int    WINAPI  TerSearchReplace2(HWND,LPBYTE,LPBYTE,UINT,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaTextFlow(HWND,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectTextFlow(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRowTextFlow(HWND,BOOL,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDocTextFlow(HWND,BOOL,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetWaveUnderline(HWND,int,int,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerApplyHyperlink(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerCreateBulletId3(HWND,BOOL,int,int,int,LPBYTE,LPBYTE,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBullet3(HWND,BOOL,BOOL,int,int,int,LPBYTE,LPBYTE,UINT,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPictAltInfo(HWND,int,BOOL,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictCropping(HWND,int,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPictCropping(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMaxUndo(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectCellText(HWND,BOOL);
TER_CPLUSPLUS HINSTANCE WINAPI  TerPdfStart(LPBYTE,LPINT,LPBYTE,LPBYTE,int,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL WINAPI    TerPdfEnd(HINSTANCE,int);
TER_CPLUSPLUS BOOL WINAPI    TerPdfPrintPage(HWND,int,int);
TER_CPLUSPLUS BOOL WINAPI    TerPdfSetDllName(LPBYTE);
TER_CPLUSPLUS BOOL WINAPI    TerSetParamRect(HWND,int,int,int,int);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags5(HWND,BOOL,DWORD);
TER_CPLUSPLUS BOOL WINAPI    TerGetCellInfo2(HWND,int,COLORREF *,LPINT);
TER_CPLUSPLUS BOOL WINAPI    TerIsTableSelected(HWND);
TER_CPLUSPLUS int  WINAPI    TerCreateFont3(HWND,int,BOOL,LPBYTE,int,UINT,COLORREF,COLORREF,int,int,int,int,int,UINT);
TER_CPLUSPLUS BOOL WINAPI    TerSetCtlColor(HWND,COLORREF,BOOL);
TER_CPLUSPLUS BOOL WINAPI    TerInsertTextU(HWND,WORD TER_HUGE *,int,int,BOOL);
TER_CPLUSPLUS int WINAPI    TerGetFontParam(HWND,int,int);
TER_CPLUSPLUS BOOL WINAPI    TerSelectTable(HWND,int,BOOL);
TER_CPLUSPLUS BOOL WINAPI    TerSetSect3(HWND,int,int,BOOL,int,int,int,int);
TER_CPLUSPLUS int WINAPI     TerGetRowCellCount(HWND,BOOL);
TER_CPLUSPLUS HGLOBAL WINAPI  TerGetTextSelU(HWND,LPINT);
TER_CPLUSPLUS int WINAPI     HandleToIntArray(LPWORD,int,HANDLE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPrinter(HWND,LPBYTE,LPBYTE,LPBYTE);
TER_CPLUSPLUS int  WINAPI    TerGetHdrFtrPos(HWND,int);
TER_CPLUSPLUS int  WINAPI    TerHdrFtrExists(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteCellText(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPageNumFmt(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetPageNumFmt(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetUlineColor(HWND,BOOL,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerAddToolbarIcon(HWND,int,int,int,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetListBullet(HWND, BOOL, int, int, int, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetListLevel(HWND, int, int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetListBullet2(HWND, BOOL, int, int, int, LPBYTE, LPBYTE, LPBYTE,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetBulletInfo3(HWND,int,int,LPINT,LPINT,LPINT,LPINT,LPINT,LPINT,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetSectBins(HWND, int, LPINT, LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetLineWidth(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerGetParaParam(HWND,int,BOOL,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLinkPictDir(HWND, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefTabType(HWND,int);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags6(HWND,BOOL,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetStyleParam(HWND,int,int,int,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerCancelEditStyle(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetObjectWrapStyle(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetStyleParam(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetFrameParam(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetWatermarkPict(HWND,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertPageRef(HWND,LPBYTE,BOOL,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerCellRotateText(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaBorderColor(HWND,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCustomMessage(int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerCellBorder2(HWND,int,int,int,int,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLinkDblClick(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetCellParam(HWND,int,int,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetStCharSet(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerGetLineU(HWND,int,LPWORD,LPWORD);
TER_CPLUSPLUS DWORD_PTR  WINAPI  TerPdcStart(LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerPdcEnd(DWORD_PTR);
TER_CPLUSPLUS BOOL   WINAPI  TerPdcPrintPage(HWND,DWORD_PTR,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLicenseKey(LPBYTE);
TER_CPLUSPLUS DWORD_PTR  WINAPI  TerPdcStart2(LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,DWORD,DWORD,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFrameTextDist(HWND, int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableTracking(HWND,BOOL,LPBYTE,BOOL,DWORD,COLORREF,DWORD,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerFindNextChange(HWND,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerAcceptChanges(HWND, BOOL, BOOL, BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetLineParam(HWND, int, int);
TER_CPLUSPLUS int    WINAPI  TerGetSectParam(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectLineNbr2(HWND,int, BOOL, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMenuItemDesc(HWND, int, LPBYTE);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags7(HWND, BOOL, DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetToolbarComboWidth(HWND, int, int, BOOL);
TER_CPLUSPLUS int    WINAPI  TerRejectChanges(HWND, BOOL, BOOL, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharScaleX(HWND,BOOL, int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableDashes(HWND,LPBYTE,int,int,BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetFontParam(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerIsModified(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerEngageCaret(HWND,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertHyperlinkU(HWND, LPWORD, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateHyperlinkTextU(HWND, LPWORD,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetHypertextU(HWND, int, int, LPWORD, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectFrameText(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectParaText(HWND, BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetInputFieldId(HWND, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetReviewerInfo(HWND, int, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetEffectiveFont(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerGetCellParam2(HWND hWnd, int type, int CellId);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertFieldU(HWND,LPBYTE, LPWORD, BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetFieldU(HWND, int, int, int, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetUserFieldU(HWND,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetWaveUnderline2(HWND, COLORREF, int, int, int, BOOL, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMarkCells(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableScrollBar(HWND, BOOL, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetRefParamStr(HWND, int, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectParam(HWND,int, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerReformatTable(HWND, BOOL);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags8(HWND, BOOL, DWORD);
TER_CPLUSPLUS int    WINAPI  TerEditStyleU(HWND,BOOL, LPWORD, BOOL, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetStyleParamU(HWND,int, int, int, LPWORD, BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetStyleInfoU(HWND, int, LPWORD,LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetStyleIdU(HWND, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteStyleU(HWND, int, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetBorderLineColor(HWND,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteReviewer(HWND, int);
TER_CPLUSPLUS int    WINAPI  TerGetTagPos(HWND,int, LPBYTE,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetTagPos2(HWND,int, LPBYTE,int, int *, LPINT);
TER_CPLUSPLUS int    WINAPI  TerInsertComboBoxField(HWND, LPBYTE, LPBYTE, LPBYTE,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerWrsSetLicenseKey(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTcField(HWND hWnd,int level, BOOL repaint);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertToc2(HWND hWnd, int TocType, LPBYTE styles, int MinLevel, int MaxLevel, BOOL repaint);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableMbcs(HWND hWnd,BOOL enable);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefListFormat(HWND, int, int, LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerInsertPictureFileXY2(HWND, LPBYTE,BOOL, int, BOOL, BOOL, int, int);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags9(HWND, BOOL, DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerRestrictFont(HWND, int, int, UINT, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetUserFont(HWND, LPBYTE, int, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertLineU(HWND,LPWORD,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  ReadTerFileU(HWND, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerDocNameU(HWND, BOOL, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  SaveTerFileU(HWND, LPWORD);
TER_CPLUSPLUS HGLOBAL WINAPI  TerFileToMem2U(HWND, LPWORD, DWORD *);
TER_CPLUSPLUS BOOL   WINAPI  TerPictLinkNameU(HWND,int,BOOL,LPWORD);
TER_CPLUSPLUS int    WINAPI  TerInsertPictureFileU(HWND,LPWORD,BOOL, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertRtfFileU(HWND,LPWORD, int, int, BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertOleFileU(HWND,LPWORD, BOOL, BOOL, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerStResetUserDict(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRowParam(HWND, int, int, int);
TER_CPLUSPLUS int    WINAPI  TerInsertOleFileDlgU(HWND,BOOL,LPWORD, BOOL, BOOL, int, int);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags10(HWND, BOOL, DWORD);
TER_CPLUSPLUS DWORD  WINAPI  TerSetFlags11(HWND, BOOL, DWORD);

TER_CPLUSPLUS HANDLE WINAPI     StrToHandle(BYTE TER_HUGE *,int);        // needed for Visual Basic interface only
TER_CPLUSPLUS BOOL   WINAPI     HandleToStr(BYTE TER_HUGE *,int,HANDLE); // needed for Visual Basic interface only
TER_CPLUSPLUS HANDLE WINAPI     StrToHandleInChunks(BYTE TER_HUGE *,int,HANDLE,int,int);
TER_CPLUSPLUS BOOL   WINAPI     HandleToStrInChunks(BYTE TER_HUGE *,int,HANDLE,int,int);
TER_CPLUSPLUS LRESULT CALLBACK  VbxProcessMessage(HWND,UINT,WPARAM,LPARAM,LPINT);

// The following functions are for use by the HTML add-on
TER_CPLUSPLUS BOOL   WINAPI  TerEquateHtmlTable(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlTblWidth(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCellInfo(HWND,int,COLORREF,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictPctSize(HWND,int,int,int,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerPictureFromOther(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetAnimInfo(HWND,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerAddAnimPict(HWND,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerSetPictFrame(HWND,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetNextParaAux1Id(HWND,DWORD);
TER_CPLUSPLUS DWORD  WINAPI  TerGetParaAux1Id(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSavePictDIB(HWND,int,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetPictFrame(HWND,int);
TER_CPLUSPLUS int   WINAPI  TerGetControlPos(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerDifTableRows(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerIsTableWider(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkTable(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerCommand2(HWND,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetLevelCell(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerLineInfoFlags(HWND,int,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerIsSspAvail(void);
TER_CPLUSPLUS int    WINAPI  TerCreateImageMap(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerAddImageMapRect(HWND,int,LPBYTE,LPBYTE,LPBYTE,int,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictMapId(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerImageMapNameToId(HWND,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetPictMapId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetImageMapInfo(HWND,int,LPBYTE,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetImageMapRectInfo(HWND,int,int,LPBYTE,LPBYTE,LPBYTE,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetFontFieldCode(HWND,int,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetFieldFont(HWND,int,int,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetFieldFontU(HWND,int,int,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCellBorderColor(HWND,int,COLORREF,COLORREF,COLORREF,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFontField(HWND,int,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMapRectInfo(HWND,int,int,LPBYTE,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetBkPictId(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSearchReplaceU(HWND,PWCHAR,PWCHAR,UINT,int,int *,int *);
TER_CPLUSPLUS BOOL   WINAPI  TerAppendTextU(HWND,LPWORD,int,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerTab2Spaces(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerCreateListBulletId2(HWND,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetListId(HWND,LPBYTE);
TER_CPLUSPLUS int   WINAPI  TerGetListLine(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerOcxPropInfo(HWND,int,int,LPINT,LPBYTE,LPINT,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetOleClass(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerTableOutlineBorder(HWND,int,int,COLORREF,BOOL);
TER_CPLUSPLUS BYTE   WINAPI  TerHtmlCharSet(HWND, BOOL, BYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlTblCellSpacing(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerTableOutlineBorder2(HWND,int, int, COLORREF, int, COLORREF, int, COLORREF, int, COLORREF, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPictBkColor(HWND,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlColSpan(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlCellPadding(HWND,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerSetParaIdTextFlow(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRowFlags(HWND, int, UINT, UINT, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlCellHeight(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSpannedCellProp(HWND,int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlCellPaddingH(HWND, int, int, int);
TER_CPLUSPLUS int    WINAPI  TerSetParaIdBorderColor(HWND, int, COLORREF, int);
TER_CPLUSPLUS BOOL   WINAPI  TerHtmlSetBasePictFile(HWND, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerHtmlGetBasePictFile(HWND, LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerNewDivId(HWND,int, int, int, int, COLORREF);
TER_CPLUSPLUS int    WINAPI  TerSetParaIdDiv(HWND, int, int, BOOL);
TER_CPLUSPLUS int    WINAPI  TerCreateHtmlRule(HWND, int, int, int, COLORREF, int);
TER_CPLUSPLUS int    WINAPI  TerCreateHtmlRule2(HWND, int, int, int, COLORREF, int, BOOL, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerIsAvailableFont(HWND,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerCreateShape(HWND, int, int, int, int, int, int, int, COLORREF, int, int, BOOL, LPINT, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerAppendTextEx2(HWND,BYTE TER_HUGE *,int,int,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerAppendTextU2(HWND,LPWORD,int,int,int,int,int,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerStrToUnicode(HWND, LPBYTE, LPWORD, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlColSpan2(HWND, int, LPINT, LPINT);
TER_CPLUSPLUS int    WINAPI  TerHtmlNegativeIndent(HWND);
TER_CPLUSPLUS WORD   WINAPI  TerGetFlowFont(HWND, int, int);
TER_CPLUSPLUS int    WINAPI  TerNewDivId2(HWND, int, int, int, int, COLORREF,UINT);
TER_CPLUSPLUS int    WINAPI  TerSetFontStyle(HWND, int, UINT, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerIsMixPara(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerIsDeletedLine(HWND, int);
TER_CPLUSPLUS int    WINAPI  TerLineSpaceAfter(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHilightColor(HWND, BOOL, COLORREF, BOOL, BOOL);
TER_CPLUSPLUS VOID   WINAPI  TerHtsSetInitAlign(HWND, int);
TER_CPLUSPLUS int    WINAPI  TerHtsGetInitAlign(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerRowHeightHtml(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaBorderSpace(HWND,int, int, int, int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerSetParaIdBorderSpace(HWND, int , int , int , int , int );
TER_CPLUSPLUS int    WINAPI  TerSetParaIdBorderWidth(HWND, int, int);



// Undocumented functions - do not use them without consultation with Sub Systems, Inc.
TER_CPLUSPLUS BOOL   WINAPI  TerQuickRepaint(HWND);
TER_CPLUSPLUS LPBYTE WINAPI  TerMbcsExt(HWND,LPBYTE,LPBYTE);
TER_CPLUSPLUS LPBYTE WINAPI  TerMbcsDir(HWND,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefCellMargin(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetCharDim(HWND,int,UINT,LPINT,LPINT,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetDeviceRes(HWND,LPINT,LPINT,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetTextAreaSize(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerPictureFromPng(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetPrevControlPos(HWND,int);
TER_CPLUSPLUS int   WINAPI  TerGetNextControlPos(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerCreateOcxObject(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInvokeOcx(HWND,int,LPBYTE,UINT,int,DWORD_PTR,LPINT,LPINT,int);
TER_CPLUSPLUS BOOL   WINAPI  TerDrawImage(HWND,HDC,HDC,LPRECT,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInit(HINSTANCE,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerShadeProtectedText(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerBmp2Png(HWND,int,int,LPBYTE,HGLOBAL *,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerInvokeOcx2(HWND,DWORD_PTR,LPBYTE,UINT,int,DWORD_PTR,LPINT,LPINT,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectPrint2(HWND,int);
TER_CPLUSPLUS LPVOID WINAPI  TerGetIDispatch(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteIDispatch(LPVOID);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertDateTime(HWND,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertToc(HWND,BOOL);
TER_CPLUSPLUS int   WINAPI  TerMergePrintRep2(HDC,LPBYTE,HGLOBAL,DWORD,RECT *,LPBYTE,LPBYTE,int,LPINT,HDC);
TER_CPLUSPLUS int   WINAPI  TerMergePrintRE(HDC,LPBYTE,HGLOBAL,DWORD,RECT *,LPBYTE,LPBYTE,int,LPINT,HDC);
TER_CPLUSPLUS BOOL   WINAPI  TerCopyHeadersFooters(HWND,int,int,BOOL,BOOL,BOOL,BOOL,BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetPageOrient2(HWND,int,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDebug(BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInternetOpen(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerInternetClose(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerInternetGet(HWND,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInternetPut(HWND,LPBYTE,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefBkColor(HWND,COLORREF,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerAddToolbarItem(HWND,int,int,LPBYTE,LPBYTE,LPBYTE,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSpellCheckCurWord(HWND,LPARAM);
TER_CPLUSPLUS int   WINAPI  TerMergePrintRep3(HDC,LPBYTE,HGLOBAL,DWORD,RECT *,LPBYTE,LPBYTE,int,LPINT,HDC,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPosTable4(HWND,int,int,int,int,int,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMovePictFrame2(HWND,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateFontFlags(HWND,UINT,BOOL,int *,int *,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPickBknd(HWND);
TER_CPLUSPLUS HGLOBAL WINAPI  TerGetDevmode(HWND);
TER_CPLUSPLUS HINSTANCE WINAPI  TerPdfStart2(LPBYTE,LPINT,LPBYTE,LPBYTE,int,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectAuxId(HWND,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetSectAuxId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSect4(HWND,int,int,BOOL,int,int,int,int,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSavePictJpg(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetOverrideBin(HWND,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetOverrideBin(HWND,BOOL,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetOrigPictSize(HWND,int,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCellSpan(HWND, int, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerOverridePageCount(HWND,int);
TER_CPLUSPLUS int   WINAPI  TerGetCurParaNum(HWND);
TER_CPLUSPLUS int   WINAPI  TerGetParaCount(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerPosAtParaNum(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerBulletToText(HWND,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerTocToText(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerFieldToText(HWND, BOOL,BOOL);
TER_CPLUSPLUS int   WINAPI  TerGetTextHeight(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerRedirectArrowKeys(HWND,BOOL);
TER_CPLUSPLUS HINSTANCE WINAPI  TerPdfStart3(LPBYTE,LPINT,LPBYTE,LPBYTE,int,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,int,int);
TER_CPLUSPLUS int    WINAPI  TerGetBaseLineY(HWND, int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSavePictEmf(HWND, int, LPBYTE);
TER_CPLUSPLUS HINSTANCE WINAPI  TerPdfStart4(LPBYTE,LPINT,LPBYTE,LPBYTE,int,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,LPBYTE,int,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerMoveParaFrame2(HWND,int,int,int,int,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPageOffset(HWND,int,int,LPINT,LPINT,LPINT,LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSpellCheck2(HWND,BOOL,BOOL,BOOL *);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectLineNbr(HWND,int,BOOL,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSavePictGif(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPageBkColor(HWND,COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMergeDelim(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerAddAutoCompWord(HWND,LPBYTE,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetVersion(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharOffset(HWND,int,BOOL);
TER_CPLUSPLUS HMETAFILE WINAPI  TerMergePrintMeta(struct StrPrint *);
TER_CPLUSPLUS BOOL   WINAPI  TerPlayMergeMeta(HDC,HDC,HMETAFILE,int,int,int);
TER_CPLUSPLUS int    WINAPI  TerPictureFromTif(HWND,LPBYTE,int,BOOL);
TER_CPLUSPLUS int    WINAPI  TerDeleteTag(HWND,int,int,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateChangedChar(HWND,int,int,BOOL,int *,int *,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateAuxIdChar(HWND,int,BOOL,int *,int *, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerTest(HWND, int, int, int, LPBYTE, LPBYTE, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectVertAlign(HWND,int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerClearAutoCompList(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetNoDropList(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerPrint3(HWND,BOOL,int,int,int,BOOL,LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerCreateFont4(HWND,int,BOOL,LPBYTE,int,UINT,COLORREF,COLORREF,int,int,int,int,int,UINT,UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharSet2(HWND,BYTE,DWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerHideWindow(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerShowWindow(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerShowSubMenu(HWND, int, int, int);
TER_CPLUSPLUS MSG_CALLBACK WINAPI  TerGetMsgCallback(HWND);
TER_CPLUSPLUS int   WINAPI  TerLow16Bits(int);
TER_CPLUSPLUS int   WINAPI  TerHigh16Bits(int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPageBorderWidth(HWND,int,BOOL);
TER_CPLUSPLUS HENHMETAFILE WINAPI  TerMergePrintMeta2(struct StrPrint *);
TER_CPLUSPLUS BOOL   WINAPI  TerPlayMergeMeta2(HDC,HDC,HENHMETAFILE,LPRECT);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCaretWidth(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetWebFolder(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSavePictPng(HWND, int, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPageSize(HWND,int, LPINT, LPINT, LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableHScrollBar(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetLineCol(HWND, BOOL, LPINT, LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertDynamicField(HWND,int, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertArrowLineObject(HWND, int, int, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateStyle(HWND, BOOL);
TER_CPLUSPLUS HGLOBAL WINAPI  TerPdcEnd2(DWORD_PTR, LPINT);
TER_CPLUSPLUS HANDLE WINAPI   StrToHandleU(LPWORD,int);
TER_CPLUSPLUS BOOL   WINAPI  HandleToStrU(LPWORD,int,HANDLE);
TER_CPLUSPLUS BOOL   WINAPI  TerChangeFieldU(HWND, LPWORD, LPWORD,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  InsertRtfBufU(HWND,LPWORD, int, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlAutoSpacing(HWND, BOOL);
TER_CPLUSPLUS HGLOBAL WINAPI  TerFileToMem2(HWND, LPBYTE, DWORD *);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkPictureToPage(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerPdcPrintPage2(HWND,DWORD_PTR,int, int);
TER_CPLUSPLUS int    WINAPI  TerSetParaIdWidthHeight(HWND, int, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkPageToFit(HWND, BOOL);
TER_CPLUSPLUS HBITMAP WINAPI  TerPageBitmapHin(HWND, int, int, int);
TER_CPLUSPLUS HENHMETAFILE WINAPI  TerPageMetafileHin(HWND, int, int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerCreateLeftRightHdrFtr(HWND,int);
TER_CPLUSPLUS int    WINAPI  TerInsertDrawObject2(HWND, int, int, int, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCellParam(HWND,int, int, int, BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetPageParam(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCharFlow(HWND, int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInsertUserField(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetUserField(HWND,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSaveUndo(HWND, int,int,int,int,BYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerCreateTable2(HWND, int, int, BOOL, BOOL);
TER_CPLUSPLUS HGLOBAL WINAPI  TerGetTextSelNR(HWND);
TER_CPLUSPLUS int    WINAPI  TerGetRefParam(HWND, int);
TER_CPLUSPLUS HGLOBAL WINAPI  TerGetTextSelUNR(HWND);
TER_CPLUSPLUS int    WINAPI  TerPrintf(LPBYTE fmt,...);
TER_CPLUSPLUS int    WINAPI  TerInsertPictureFromMemory(HWND,LPBYTE, int, int, BOOL);
TER_CPLUSPLUS int    WINAPI  TerOcxPropInfo2(HWND,int,int,LPINT,LPBYTE,LPINT,LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRefreshStyles(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFixRes(int);
TER_CPLUSPLUS BOOL   WINAPI  TerDrawImage2(HWND, HDC, HDC, LPRECT, BOOL, LPRECT);
TER_CPLUSPLUS BOOL   WINAPI  TerRecreateColSpan(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerGetRowParam(HWND, int, int, LPINT);
TER_CPLUSPLUS BOOL   WINAPI  TerGetListLevelInfoU(HWND,BOOL,int,int,LPINT,LPINT,LPINT,LPWORD,LPINT,LPDWORD);
TER_CPLUSPLUS int    WINAPI  TerGetLastMessage2(HWND, LPBYTE, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLastMessage2(HWND, int, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerPdcPrintPage3(HWND,DWORD_PTR,int, int, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerIsBlankPage(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetAutoWidth(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateChangedChar2(HWND,int,int,int,BOOL,int *,int *,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertDrawObject3(HWND, int, int, int, int, int, int,int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFrameParam(HWND, int, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerExpandWidthToFit(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerInServer(BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateDynField(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCustomFontList(HWND, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetDefaultCellBorderWidth(HWND, int, COLORREF);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteMenuItem(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRepInfo(HWND,LPBYTE,LPBYTE,LPBYTE,int, int);
TER_CPLUSPLUS int    WINAPI  TerGetTagName(HWND, int, LPBYTE, LPINT);
TER_CPLUSPLUS int    WINAPI  TerGetComboboxInfo(HWND, int, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetComboboxInfo(HWND, int, LPBYTE, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateChangedChar3(HWND, int, int, int,int, BOOL, int *, int *, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerPdcPrintPage4(HWND,DWORD_PTR,int, int, int, int, BOOL, BOOL, HDC *);
TER_CPLUSPLUS BOOL   WINAPI  InsertTerTextU(HWND hWnd, LPWORD textU,BOOL);
TER_CPLUSPLUS int    WINAPI  TerInsertHyperlinkU2(HWND, LPWORD, LPWORD, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerApplyHyperlinkU(HWND, LPWORD,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerUpdateHyperlinkCodeU(HWND, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerGetHypertextU2(HWND, int, int, LPWORD, LPWORD, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetFontFieldCodeU(HWND,int, LPWORD);
TER_CPLUSPLUS int    WINAPI  TerGetFieldFontU(HWND,int, int, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSelectField(HWND,BOOL, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerConnectTextBoxes(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerChangeFieldRtf(HWND, LPBYTE, LPBYTE,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerChangeFieldRtfU(HWND, LPBYTE, LPWORD,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSpoolBegin(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSpoolEnd();
TER_CPLUSPLUS BOOL   WINAPI  TerSetSectColWidth(HWND,int, int, int, int, BOOL);
TER_CPLUSPLUS int    WINAPI  TerGetSectColWidth(HWND,int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMdiParent(HWND,HWND,HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetResourceDLL(HINSTANCE);
TER_CPLUSPLUS BOOL   WINAPI  TerLocateFieldChar2(HWND, int, LPBYTE, BOOL, int *, int *, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerDisableDragDrop(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerEnableDragDrop(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetUserClipFormat(HWND, UINT);
TER_CPLUSPLUS BOOL   WINAPI  TerInputFieldToTextBox(HWND,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerLoadExtFont(HWND, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlAddOnKey(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetStKey(LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetStDictPath(LPBYTE);
TER_CPLUSPLUS TER_LPDATAOBJECT WINAPI  TerGetDropDataObject(HWND);
TER_CPLUSPLUS BOOL   WINAPI  UHandleToStrU(LPWORD,int,HANDLE);
TER_CPLUSPLUS int    WINAPI  TerApplyComment(HWND, BOOL, LPBYTE, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS int    WINAPI  TerApplyCommentU(HWND, BOOL , LPWORD , LPWORD , LPWORD ,BOOL );
TER_CPLUSPLUS BOOL   WINAPI  TerEditComment(HWND, BOOL, int, LPBYTE, LPBYTE, LPBYTE,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPlaceHolderPict(HWND, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLineU(HWND ,int ,LPWORD ,LPWORD );
TER_CPLUSPLUS BOOL   WINAPI  TerPrint3U(HWND, BOOL, int, int, int, BOOL,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerEditCommentU(HWND, BOOL, int, LPWORD, LPWORD, LPWORD,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkTableToPageWidth(HWND, BOOL,BOOL);
TER_CPLUSPLUS LPBYTE WINAPI  TerGetHtmlDocTitle(HWND, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerSetHtmlDocTitle(HWND, LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerReverseSelection(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerGetLineParamStr(HWND, int, int, LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetInputTextAuxId(HWND, int, int, int);
TER_CPLUSPLUS int    WINAPI  TerSetUniFont(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerStopMessages(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerShowPopupMenu(HWND, int, int);
TER_CPLUSPLUS int    WINAPI  TerSetTag2(HWND,int, int,int, LPBYTE, LPBYTE, int, UINT);
TER_CPLUSPLUS int    WINAPI  TerGetPdfPageCount(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetPdfFirstPage(HWND, int);
TER_CPLUSPLUS int    WINAPI  TerGetLineWidth2(HWND, int, BOOL);
TER_CPLUSPLUS HBITMAP WINAPI  TerPageBitmapHin2(HWND, int, int, int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerChangeToolbarIcon(HWND, int, LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetRtfDocInfoU(HWND,int,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerSetRtfDocInfoU(HWND,int,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerAdjustUserColor(HWND,COLORREF *,COLORREF *, int);
TER_CPLUSPLUS BOOL   WINAPI  TerPaintFormat(HWND, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetFontProps(HWND,int, UINT, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParaProps(HWND,int,UINT, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerResetAutoSpell(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerPrintBlankPageBefore(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerResetUserColors(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerMergeFieldsU(HWND,LPWORD,LPWORD, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCustomSymbolFonts(HWND, LPBYTE, LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerSetCommentMinRightMarg(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerDeleteParaFrame(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerChangeFieldPicture(HWND, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerGetPlaceHolderPict(HWND, LPBYTE);
TER_CPLUSPLUS int    WINAPI  TerGetNextTagId(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCustomFontStyles(HWND, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetCustomFontSizes(HWND, LPBYTE, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParam(HWND,int,int);
TER_CPLUSPLUS BOOL   WINAPI  TerSetParamStr(HWND,int,LPBYTE);
TER_CPLUSPLUS BOOL   WINAPI  TerFixZOrder(HWND);
TER_CPLUSPLUS BOOL   WINAPI  TerSetMaxPictRes(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI  TerForceCharStyles(HWND, BOOL, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerLimitPictRes(HWND, int, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerSetLimitPictSize(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkAllPictures(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  SetTerDefaultFont2(HWND, LPBYTE,int, UINT, COLORREF, BOOL, BOOL);
TER_CPLUSPLUS void   WINAPI  TerSetTsfTimeoutPeriod(HWND, BOOL);
TER_CPLUSPLUS void   WINAPI  TerInsertCurTsfPhrase(HWND,LPWORD);
TER_CPLUSPLUS BOOL   WINAPI  TerAdjustPointSize(HWND,int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkAllPictures2(HWND, BOOL, int, int);
TER_CPLUSPLUS BOOL   WINAPI  TerShrinkAllPictures3(HWND, BOOL, int, int, BOOL);
TER_CPLUSPLUS HMETAFILE WINAPI  TerPageMetafileWmf(HWND, int);
TER_CPLUSPLUS BOOL   WINAPI TerSetHtmlInput(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI  TerRegisterPdcCallback(PDC_CALLBACK);
TER_CPLUSPLUS BOOL   WINAPI TerRemoveAllBullets(HWND, BOOL);
TER_CPLUSPLUS BOOL   WINAPI TerAddBullet(HWND,int, LPBYTE, BOOL);
TER_CPLUSPLUS BOOL   WINAPI TerAddBullet2(HWND, int,LPBYTE, int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI TerSetPopupBoxParam(HWND, int, int, BOOL);
TER_CPLUSPLUS BOOL   WINAPI TerSetCustBullet(HWND, int, int,BOOL);
TER_CPLUSPLUS BOOL   WINAPI TerAdjustInputPos(HWND);
TER_CPLUSPLUS int    WINAPI TerUnicodeToStr(HWND, LPWORD, LPBYTE, int);
TER_CPLUSPLUS BOOL   WINAPI TerHideCustomToolbarIcon(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI TerSetTextFieldInfoU(HWND, int, LPWORD, int, int, LPBYTE, int, UINT);
TER_CPLUSPLUS BOOL   WINAPI TerShrinkTableToPageWidth2(HWND, BOOL,BOOL, BOOL);
TER_CPLUSPLUS int    WINAPI TerGetAddlStories(HWND, int, int, LPINT, int);
TER_CPLUSPLUS BOOL   WINAPI TerIsSameStoryFont(HWND, int, int);
TER_CPLUSPLUS BOOL   WINAPI TerGetStoryParam(HWND , int , int, LPWORD, LPINT);
TER_CPLUSPLUS int    WINAPI TerGetCurUndoOp(HWND);
TER_CPLUSPLUS BOOL   WINAPI TerAppendTag(HWND,int, LPBYTE, LPBYTE, int);
TER_CPLUSPLUS BOOL   WINAPI TerSetPageMultiple(HWND,int);
TER_CPLUSPLUS BOOL   WINAPI TerDrawObjectToShape(HWND, int, int);


// The following function are used to support the ocx
TER_CPLUSPLUS BOOL   WINAPI  TerRepaintArea(HWND,LPRECT);
TER_CPLUSPLUS BOOL   WINAPI  TerProcessTab(HWND);
TER_CPLUSPLUS BOOL   WINAPI TerIsInIE(HWND,BOOL);

#endif

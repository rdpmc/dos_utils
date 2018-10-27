REG_OPTION_NON_VOLATILE equ (00000000h)   
REG_OPTION_VOLATILE equ (00000001h)  
CREATE_NEW_CONSOLE                   equ 10h
NORMAL_PRIORITY_CLASS                equ 20h
CSIDL_APPDATA           equ 1ah
SHGFP_TYPE_CURRENT		equ 0
SB_HORZ                              equ 0
SB_VERT                              equ 1
SB_CTL                               equ 2
SB_BOTH                              equ 3
PIPE_ACCESS_INBOUND                  equ 1h
PIPE_ACCESS_OUTBOUND                 equ 2h
PIPE_ACCESS_DUPLEX                   equ 3h
PIPE_CLIENT_END                      equ 0h
PIPE_SERVER_END                      equ 1h
PIPE_WAIT                            equ 0h
PIPE_NOWAIT                          equ 1h
PIPE_READMODE_BYTE                   equ 0h
PIPE_READMODE_MESSAGE                equ 2h
PIPE_TYPE_BYTE                       equ 0h
PIPE_TYPE_MESSAGE                    equ 4h
PIPE_UNLIMITED_INSTANCES             equ 255

 FLAG_ICC_FORCE_CONNECTION equ  0x00000001

KEY_EVENT                            equ 1h
MOUSE_EVENT                            equ 2h
FOREGROUND_BLUE                      equ 1h
FOREGROUND_GREEN                     equ 2h
FOREGROUND_RED                       equ 4h
FOREGROUND_INTENSITY                 equ 8h
BACKGROUND_BLUE                      equ 10h
BACKGROUND_GREEN                     equ 20h
BACKGROUND_RED                       equ 40h
BACKGROUND_INTENSITY                 equ 80h

SM_CXMIN                             equ 28
SM_CYMIN                             equ 29
STD_INPUT_HANDLE                     equ -10
STD_OUTPUT_HANDLE                    equ -11
STD_ERROR_HANDLE                     equ -12
;;;;;;;;;; WININET CONSTS
INTERNET_DEFAULT_FTP_PORT               equ 21 
INTERNET_SERVICE_FTP    equ 1
INTERNET_FLAG_ASYNC                     equ 10000000h 
INTERNET_OPEN_TYPE_DIRECT   equ 1 
FTP_TRANSFER_TYPE_ASCII         equ 1
FTP_TRANSFER_TYPE_BINARY        equ 2

STATUS_PENDING equ 00000103h
STILL_ACTIVE              equ STATUS_PENDING
EXCEPTION_EXECUTE_HANDLER               equ 1
EXCEPTION_CONTINUE_SEARCH               equ  0
EXCEPTION_CONTINUE_EXECUTION            equ -1
FILE_FLAG_DELETE_ON_CLOSE            equ 4000000h
BI_RGB                               equ 0


OBJ_INHERIT             equ 00000002h
OBJ_PERMANENT           equ 00000010h
OBJ_EXCLUSIVE           equ 00000020h
OBJ_CASE_INSENSITIVE    equ 00000040h
OBJ_OPENIF              equ 00000080h
OBJ_OPENLINK            equ 00000100h
OBJ_KERNEL_HANDLE       equ 00000200h
OBJ_VALID_ATTRIBUTES    equ 000003F2h

SERVICE_STOPPED                      equ 1h
SERVICE_START_PENDING                equ 2h
SECTION_QUERY                        equ 1h
SECTION_MAP_WRITE                    equ 2h
SECTION_MAP_READ                     equ 4h
SECTION_MAP_EXECUTE                  equ 8h
SECTION_EXTEND_SIZE                  equ 10h
FILE_MAP_COPY                        equ SECTION_QUERY
FILE_MAP_WRITE                       equ SECTION_MAP_WRITE
FILE_MAP_READ                        equ SECTION_MAP_READ


SERVICE_CONTROL_STOP                 equ 1h
SERVICE_CONTROL_PAUSE                equ 2h
SERVICE_CONTROL_CONTINUE             equ 3h
SERVICE_CONTROL_INTERROGATE          equ 4h
SERVICE_CONTROL_SHUTDOWN             equ 5h
PF_INET          equ        2
FD_READ          equ        001h
FD_WRITE          equ       002h
FD_OOB          equ         004h
FD_ACCEPT          equ      008h
FD_CONNECT          equ     010h
FD_CLOSE          equ       020h
SOCK_STREAM          equ    1
SOCK_DGRAM          equ     2
SOCK_RAW          equ       3
SOCK_RDM          equ       4
SOCK_SEQPACKET          equ 5


SERVICE_BOOT_START equ  00000000h
SERVICE_SYSTEM_START equ  00000001h
SERVICE_AUTO_START equ  00000002h
SERVICE_DEMAND_START equ  00000003h
SERVICE_DISABLED equ  00000004h
SERVICE_ERROR_IGNORE equ  00000000h
SERVICE_ERROR_NORMAL equ  00000001h
SERVICE_ERROR_SEVERE equ  00000002h
SERVICE_ERROR_CRITICAL equ  00000003h
SERVICE_PAUSE_PENDING                equ  6h
SERVICE_PAUSED                       equ  7h
SERVICE_ACCEPT_STOP                  equ  1h
SERVICE_ACCEPT_PAUSE_CONTINUE        equ  2h
SERVICE_ACCEPT_SHUTDOWN              equ  4h
SC_MANAGER_CONNECT                   equ  1h
SC_MANAGER_CREATE_SERVICE            equ  2h
SC_MANAGER_ENUMERATE_SERVICE         equ  4h
SC_MANAGER_LOCK                      equ  8h
SC_MANAGER_QUERY_LOCK_STATUS         equ  10h
SC_MANAGER_MODIFY_BOOT_CONFIG        equ  20h
SERVICE_QUERY_CONFIG                 equ  1h
SERVICE_CHANGE_CONFIG                equ  2h
SERVICE_QUERY_STATUS                 equ  4h
SERVICE_ENUMERATE_DEPENDENTS         equ  8h
SERVICE_START                        equ  10h
SERVICE_STOP                         equ  20h
SERVICE_PAUSE_CONTINUE               equ  40h
SERVICE_INTERROGATE                  equ  80h
SERVICE_USER_DEFINED_CONTROL         equ  100h
SERVICE_KERNEL_DRIVER equ  00000001h
SERVICE_FILE_SYSTEM_DRIVER equ  00000002h
SERVICE_ADAPTER equ  00000004h
SERVICE_RECOGNIZER_DRIVER equ  00000008h
DELETE                    equ        00010000h

;*********
SEC_FILE                  equ  800000h
SEC_IMAGE                 equ  1000000h
SEC_RESERVE               equ  4000000h
SEC_COMMIT                equ  8000000h
SEC_NOCACHE               equ  10000000h
DT_CENTER                            equ  1h
DT_RIGHT                             equ  2h
DT_VCENTER                           equ  4h
AF_UNSPEC          equ       0
AF_UNIX          equ         1
AF_INET          equ         2
AF_IMPLINK          equ      3
AF_PUP          equ          4
AF_CHAOS          equ        5
AF_NS          equ           6
AF_IPX          equ          6
AF_ISO          equ          7
AF_OSI          equ          AF_ISO
AF_ECMA          equ         8
AF_DATAKIT          equ      9
AF_CCITT          equ        10
AF_SNA          equ          11
AF_DECnet          equ       12
MOD_ALT                              equ  1h
MOD_CONTROL                          equ  2h
MOD_SHIFT                            equ  4h
MOD_WIN						  equ  8h

AF_DLI          equ          13
AF_LAT          equ          14
AF_HYLINK          equ       15
AF_APPLETALK          equ    16
AF_NETBIOS          equ      17
AF_MAX          equ          18

STANDARD_RIGHTS_REQUIRED             equ  0F0000h
SYNCHRONIZE                          equ  100000h
PROCESS_ALL_ACCESS equ  (STANDARD_RIGHTS_REQUIRED + SYNCHRONIZE + 0FFFh)

PAGE_NOACCESS             equ  1
PAGE_READONLY             equ  2
PAGE_READWRITE            equ  4
PAGE_WRITECOPY            equ  8
PAGE_EXECUTE              equ  10h
PAGE_EXECUTE_READ         equ  20h
PAGE_EXECUTE_READWRITE    equ  40h
PAGE_EXECUTE_WRITECOPY    equ  80h
PAGE_GUARD                equ  100h
PAGE_NOCACHE              equ  200h
MEM_COMMIT                equ  1000h
MEM_RESERVE               equ  2000h
MEM_DECOMMIT              equ  4000h
MEM_RELEASE               equ  8000h
MEM_FREE                  equ  10000h
MEM_PRIVATE               equ  20000h
OWNER_SECURITY_INFORMATION equ  (00000001h)
GROUP_SECURITY_INFORMATION equ  (00000002h)
DACL_SECURITY_INFORMATION equ  (00000004h)
SACL_SECURITY_INFORMATION equ  (00000008h)
ACL_REVISION equ  (2)
SE_DACL_PRESENT equ  (0004h)
SE_DACL_DEFAULTED equ  (0008h)
SECURITY_DESCRIPTOR_REVISION         equ  1
THREAD_PRIORITY_NORMAL               equ  0
KEY_QUERY_VALUE                      equ  1h
KEY_SET_VALUE                        equ  2h
KEY_CREATE_SUB_KEY                   equ  4h
KEY_ENUMERATE_SUB_KEYS               equ  8h
KEY_NOTIFY                           equ  10h
KEY_CREATE_LINK                      equ  20h
KEY_READ   equ  KEY_QUERY_VALUE + KEY_ENUMERATE_SUB_KEYS + KEY_NOTIFY
KEY_WRITE equ  KEY_SET_VALUE + KEY_CREATE_SUB_KEY
KEY_EXECUTE                          equ  KEY_READ
               

HKEY_CLASSES_ROOT                    equ  80000000h
HKEY_CURRENT_USER                    equ  80000001h
HKEY_LOCAL_MACHINE                   equ  80000002h
HKEY_USERS                           equ  80000003h
HKEY_PERFORMANCE_DATA                equ  80000004h
HKEY_CURRENT_CONFIG                  equ  80000005h
REG_SZ                               equ  1
REG_EXPAND_SZ                        equ  2
REG_BINARY                           equ  3
REG_DWORD                            equ  4
ERROR_SUCCESS                        equ  0
WH_MIN                               equ  -1
WH_MSGFILTER                         equ  -1
WH_JOURNALRECORD                     equ  0
WH_JOURNALPLAYBACK                   equ  1
WH_KEYBOARD                          equ  2
WH_GETMESSAGE                        equ  3
WH_CALLWNDPROC                       equ  4
WH_CBT                               equ  5
WH_SYSMSGFILTER                      equ  6
WH_MOUSE                             equ  7
WH_HARDWARE                          equ  8
WH_DEBUG                             equ  9
WH_SHELL                             equ  10
WH_FOREGROUNDIDLE                    equ  11
WH_MAX                               equ  11
HC_ACTION                            equ  0
HC_GETNEXT                           equ  1
HC_SKIP                              equ  2
HC_NOREMOVE                          equ  3
HC_NOREM                             equ  HC_NOREMOVE
HC_SYSMODALON                        equ  4
HC_SYSMODALOFF                       equ  5

HWND_BROADCAST                       equ  0FFFFh
DLL_PROCESS_DETACH                   equ  0
DLL_PROCESS_ATTACH                   equ  1
DLL_THREAD_ATTACH                    equ  2
DLL_THREAD_DETACH                    equ  3
CREATE_SUSPENDED                     equ  4h
GW_OWNER                             equ  4
GW_CHILD                             equ  5
GW_MAX                               equ  5
WSADESCRIPTION_LEN          equ  256
WSASYS_STATUS_LEN           equ  128
FIONBIO                equ  8004667Eh
;FIONSYNC               equ  8004667Dh
FIONREAD               equ  4004667Fh
 SIOCATMARK equ  8004667Dh
INVALID_HANDLE_VALUE                 equ  -1
CS_KEYCVTWINDOW    equ  0004H
CS_DBLCLKS         equ  0008h
;                    0010h reserved
CS_OWNDC           equ  0020h
CS_CLASSDC         equ  0040h
CS_PARENTDC        equ  0080h
CS_NOKEYCVT        equ  0100h
CS_SAVEBITS        equ  0800h
CS_NOCLOSE         equ  0200h
CS_BYTEALIGNCLIENT equ  1000h
CS_BYTEALIGNWINDOW equ  2000h
CS_GLOBALCLASS     equ  4000h    ; Global window class
CS_VREDRAW                           equ  1h
CS_HREDRAW                           equ  2h

;  Predefined cursor & icon IDs
;
IDC_ARROW       equ  32512
IDC_IBEAM       equ  32513
IDC_WAIT        equ  32514
IDC_CROSS       equ  32515
IDC_UPARROW     equ  32516
IDC_SIZE        equ  32640
IDC_ICON        equ  32641
IDC_SIZENWSE    equ  32642
IDC_SIZENESW    equ  32643
IDC_SIZEWE      equ  32644
IDC_SIZENS      equ  32645

IDI_APPLICATION equ  32512
IDI_HAND        equ  32513
IDI_QUESTION    equ  32514
IDI_EXCLAMATION equ  32515
IDI_ASTERISK    equ  32516

;Stock Logical Objects
WHITE_BRUSH	equ 0
LTGRAY_BRUSH	equ 1
GRAY_BRUSH	equ 2
DKGRAY_BRUSH	equ 3
BLACK_BRUSH	equ 4
NULL_BRUSH	equ 5
HOLLOW_BRUSH	equ 5
WHITE_PEN	equ 6
BLACK_PEN	equ 7
NULL_PEN	equ 8
DOT_MARKER	equ 9
OEM_FIXED_FONT	equ 10
ANSI_FIXED_FONT	equ 11
ANSI_VAR_FONT	equ 12
SYSTEM_FONT	equ 13
DEVICE_DEFAULT_FONT	equ 14
DEFAULT_PALETTE	equ 15
SYSTEM_FIXED_FONT	equ 16
; Special CreateWindow position value
CW_USEDEFAULT	equ 	8000h
; Windows styles
;
WS_OVERLAPPED	equ 000000000h
WS_ICONICPOPUP	equ 0C0000000h
WS_POPUP	equ 080000000h
WS_CHILD	equ 040000000h
WS_MINIMIZE	equ 020000000h
WS_VISIBLE	equ 010000000h
WS_DISABLED	equ 008000000h
WS_CLIPSIBLINGS	equ 004000000h
WS_CLIPCHILDREN	equ 002000000h
WS_MAXIMIZE	equ 001000000h
WS_CAPTION	equ 000C00000h	;WS_BORDER | WS_DLGFRAME
WS_BORDER	equ 000800000h
WS_DLGFRAME	equ 000400000h
WS_VSCROLL	equ 000200000h
WS_HSCROLL	equ 000100000h
WS_SYSMENU	equ 000080000h
WS_THICKFRAME	equ 000040000h
WS_HREDRAW	equ 000020000h
WS_VREDRAW	equ 000010000h
WS_GROUP	equ 000020000h
WS_TABSTOP	equ 000010000h
WS_MINIMIZEBOX	equ 000020000h
WS_MAXIMIZEBOX	equ 000010000h
; Common Window Styles
WS_OVERLAPPEDWINDOW	equ WS_OVERLAPPED + WS_CAPTION + WS_SYSMENU + WS_THICKFRAME + WS_MINIMIZEBOX + WS_MAXIMIZEBOX
WS_POPUPWINDOW	equ WS_POPUP + WS_BORDER + WS_SYSMENU
WS_TILEDWINDOW	equ WS_OVERLAPPEDWINDOW
WS_TILED	equ WS_OVERLAPPED

; ShowWindow() Commands
SW_HIDE	equ 0
SW_SHOWNORMAL	equ  1
SW_NORMAL	equ 1
SW_SHOWMINIMIZED	equ 2
SW_SHOWMAXIMIZED	equ 3
SW_MAXIMIZE	equ 3
SW_SHOWNOACTIVATE	equ 4
SW_SHOW	equ 5
SW_MINIMIZE	equ 6
SW_SHOWMINNOACTIVE	equ 7
SW_SHOWNA	equ 8
SW_RESTORE                           equ  9
SW_SHOWDEFAULT                       equ  10

;
;  Window State Messages
;
WM_STATE            equ  0000H

WM_NULL             equ  0000h
WM_CREATE           equ  0001h
WM_DESTROY          equ  0002h
WM_MOVE             equ  0003h
WM_SIZE             equ  0005h
WM_ACTIVATE         equ  0006h
WM_SETFOCUS         equ  0007h
WM_KILLFOCUS        equ  0008h
WM_ENABLE           equ  000Ah
WM_SETREDRAW        equ  000Bh
WM_SETTEXT          equ  000Ch
WM_GETTEXT          equ  000Dh
WM_GETTEXTLENGTH    equ  000Eh
WM_PAINT            equ  000Fh
WM_CLOSE            equ  0010h
WM_QUERYENDSESSION  equ  0011h
WM_QUIT             equ  0012h
WM_QUERYOPEN        equ  0013h
WM_ERASEBKGND       equ  0014h
WM_SYSCOLORCHANGE   equ  0015h
WM_ENDSESSION       equ  0016h
WM_SYSTEMERROR      equ  0017h
WM_SHOWWINDOW       equ  0018h
WM_CTLCOLOR         equ  0019h
WM_WININICHANGE     equ  001Ah
WM_DEVMODECHANGE    equ  001Bh
WM_ACTIVATEAPP      equ  001Ch
WM_FONTCHANGE       equ  001Dh
WM_TIMECHANGE       equ  001Eh
WM_CANCELMODE       equ  001Fh
WM_SETCURSOR        equ  0020h
WM_MOUSEACTIVATE    equ  0021h
WM_CHILDACTIVATE    equ  0022h
WM_QUEUESYNC        equ  0023h
WM_GETMINMAXINFO    equ  0024h
WM_PAINTICON        equ  0026h
WM_ICONERASEBKGND   equ  0027h
WM_NEXTDLGCTL       equ  0028h
WM_SPOOLERSTATUS    equ  002Ah
WM_DRAWITEM         equ  002Bh
WM_MEASUREITEM      equ  002Ch
WM_DELETEITEM       equ  002Dh
WM_VKEYTOITEM       equ  002Eh
WM_CHARTOITEM       equ  002Fh
WM_SETFONT          equ  0030h
WM_GETFONT          equ  0031h
WM_QUERYDRAGICON    equ  0037h
WM_COMPAREITEM      equ  0039h
WM_COMPACTING       equ  0041h
WM_COMMNOTIFY       equ  0044h
WM_WINDOWPOSCHANGING equ  0046h
WM_WINDOWPOSCHANGED equ  0047h
WM_POWER            equ  0048h

WM_NCCREATE         equ  0081h
WM_NCDESTROY        equ  0082h
WM_NCCALCSIZE       equ  0083h
WM_NCHITTEST        equ  0084h
WM_NCPAINT          equ  0085h
WM_NCACTIVATE       equ  0086h
WM_GETDLGCODE       equ  0087h
WM_NCMOUSEMOVE      equ  00A0h
WM_NCLBUTTONDOWN    equ  00A1h
WM_NCLBUTTONUP      equ  00A2h
WM_NCLBUTTONDBLCLK  equ  00A3h
WM_NCRBUTTONDOWN    equ  00A4h
WM_NCRBUTTONUP      equ  00A5h
WM_NCRBUTTONDBLCLK  equ  00A6h
WM_NCMBUTTONDOWN    equ  00A7h
WM_NCMBUTTONUP      equ  00A8h
WM_NCMBUTTONDBLCLK  equ  00A9h

WM_KEYFIRST         equ  0100h
WM_KEYDOWN          equ  0100h
WM_KEYUP            equ  0101h
WM_CHAR             equ  0102h
WM_DEADCHAR         equ  0103h
WM_SYSKEYDOWN       equ  0104h
WM_SYSKEYUP         equ  0105h
WM_SYSCHAR          equ  0106h
WM_SYSDEADCHAR      equ  0107h
WM_KEYLAST          equ  0108h

WM_INITDIALOG       equ  0110h
WM_COMMAND          equ  0111h
WM_SYSCOMMAND       equ  0112h
WM_TIMER            equ  0113h
WM_HSCROLL          equ  0114h
WM_VSCROLL          equ  0115h
WM_INITMENU         equ  0116h
WM_INITMENUPOPUP    equ  0117h
WM_MENUSELECT       equ  011Fh
WM_MENUCHAR         equ  0120h
WM_ENTERIDLE        equ  0121h


WM_MOUSEFIRST       equ  0200h
WM_MOUSEMOVE        equ  0200h
WM_LBUTTONDOWN      equ  0201h
WM_LBUTTONUP        equ  0202h
WM_LBUTTONDBLCLK    equ  0203h
WM_RBUTTONDOWN      equ  0204h
WM_RBUTTONUP        equ  0205h
WM_RBUTTONDBLCLK    equ  0206h
WM_MBUTTONDOWN      equ  0207h
WM_MBUTTONUP        equ  0208h
WM_MBUTTONDBLCLK    equ  0209h
WM_MOUSELAST        equ  0209h

WM_PARENTNOTIFY     equ  0210h
WM_MDICREATE        equ  0220h
WM_MDIDESTROY       equ  0221h
WM_MDIACTIVATE      equ  0222h
WM_MDIRESTORE       equ  0223h
WM_MDINEXT          equ  0224h
WM_MDIMAXIMIZE      equ  0225h
WM_MDITILE          equ  0226h
WM_MDICASCADE       equ  0227h
WM_MDIICONARRANGE   equ  0228h
WM_MDIGETACTIVE     equ  0229h
WM_MDISETMENU       equ  0230h
WM_DROPFILES        equ  0233h


WM_CUT              equ  0300h
WM_COPY             equ  0301h
WM_PASTE            equ  0302h
WM_CLEAR            equ  0303h
WM_UNDO             equ  0304h
WM_RENDERFORMAT     equ  0305h
WM_RENDERALLFORMATS equ  0306h
WM_DESTROYCLIPBOARD equ  0307h
WM_DRAWCLIPBOARD    equ  0308h
WM_PAINTCLIPBOARD   equ  0309h
WM_VSCROLLCLIPBOARD equ  030Ah
WM_SIZECLIPBOARD    equ  030Bh
WM_ASKCBFORMATNAME  equ  030Ch
WM_CHANGECBCHAIN    equ  030Dh
WM_HSCROLLCLIPBOARD equ  030Eh
WM_QUERYNEWPALETTE  equ  030Fh
WM_PALETTEISCHANGING equ  0310h
WM_PALETTECHANGED   equ  0311h
WM_HOTKEY                            equ  312h

WM_PENWINFIRST      equ  0380h
WM_PENWINLAST       equ  038Fh

WM_COALESCE_FIRST  equ  0390h
WM_COALESCE_LAST   equ  039Fh

;  private window messages start here
WM_USER             equ  0400H

; flag values for fuSound and fdwSound arguments on [snd]PlaySound

SND_SYNC	 equ 	0h  ;/* play synchronously (default) */
SND_ASYNC	equ 	1h  ;/* play asynchronously */
SND_NODEFAULT	 equ 	2h  ;/* silence (!default) if sound not found */
SND_MEMORY	 equ 	4h  ;/* pszSound points to a memory file */
SND_LOOP	equ 	8h  ;/* loop the sound until next sndPlaySound */
SND_NOSTOP	equ 	10h ; /* don't stop any currently playing sound */
SND_NOWAIT	equ 	00002000h ;/* don't wait if the driver is busy */
SND_ALIAS	equ 	00010000h ;/* name is a registry alias */
SND_ALIAS_ID	equ 	00110000h  ;/* alias is a predefined ID */
SND_FILENAME	equ 	00020000h  ;/* name is file name */
SND_RESOURCE	equ 	00040004h  ;/* name is resource name or atom */
SND_PURGE	equ 	0040h  ; /* purge non-static events for task */
SND_APPLICATION	equ 	0080h ; /* look for application specific association */
SND_ALIAS_START	equ 	0h          ; /* alias base */

;  MessageBox type flags
;
MB_ICONERROR                         equ  0010H
MB_OK                   equ  0000H
MB_OKCANCEL             equ  0001H
MB_ABORTRETRYIGNORE     equ  0002H
MB_YESNOCANCEL          equ  0003H
MB_YESNO                equ  0004H
MB_RETRYCANCEL          equ  0005H

MB_ICONHAND             equ  0010H
MB_ICONQUESTION         equ  0020H
MB_ICONEXCLAMATION      equ  0030H
MB_ICONASTERISK         equ  0040H
MB_ICONINFORMATION        equ   MB_ICONASTERISK
MB_DEFBUTTON1           equ  0000H
MB_DEFBUTTON2           equ  0100H
MB_DEFBUTTON3           equ  0200H

MB_APPLMODAL            equ  0000H
MB_SYSTEMMODAL          equ  1000H
MB_TASKMODAL            equ  2000H

MB_NOFOCUS              equ  8000H
;/*
; * DrawText() Format Flags (из winuser.h)
; */
DT_BOTTOM	equ 00000008h
DT_WORDBREAK	equ 00000010h
DT_SINGLELINE	equ 00000020h
DT_EXPANDTABS	equ 00000040h
DT_TABSTOP	equ 00000080h
DT_NOCLIP	equ 00000100h
DT_EXTERNALLEADING	equ 00000200h
DT_CALCRECT	equ 00000400h
DT_NOPREFIX	equ 00000800h
DT_INTERNAL	equ 00001000h

DT_EDITCONTROL	equ 00002000h
DT_PATH_ELLIPSIS	equ 00004000h
DT_END_ELLIPSIS	equ 00008000h
DT_MODIFYSTRING	equ 00010000h
DT_RTLREADING	equ 00020000h
DT_WORD_ELLIPSIS	equ 00040000h

; GetSystemMetrics() codes
 
SM_CXSCREEN	equ 0
SM_CYSCREEN	equ 1

;/* Ternary raster operations */
SRCCOPY	equ 00CC0020h	;dest equ  source
SRCPAINT	equ 00EE0086h	;dest equ  source OR dest       
SRCAND	equ 008800C6h ;dest equ  source AND dest
SRCINVERT	equ 00660046h	;dest equ  source XOR dest
SRCERASE	equ 00440328h	;dest equ  source AND (NOT dest )
NOTSRCCOPY	equ 00330008h	;dest equ  (NOT source)
NOTSRCERASE	equ 001100A6h	;dest equ  (NOT src) AND (NOT dest)
MERGECOPY	equ 00C000CAh	;dest equ  (source AND pattern)
MERGEPAINT	equ 00BB0226h	;dest equ  (NOT source) OR dest
PATCOPY	equ 00F00021h	;dest equ  pattern
PATPAINT	equ 00FB0A09h	;dest equ  DPSnoo
PATINVERT	equ 005A0049h	;dest equ  pattern XOR dest
DSTINVERT	equ 00550009h	;dest equ  (NOT dest)
BLACKNESS	equ 00000042h	;dest equ  BLACK
WHITENESS	equ 00FF0062h	;dest equ  WHITE
;/*
; * Dialog Box Command IDs
;*/
IDOK	equ 1
IDCANCEL	equ 2
IDABORT	equ 3
IDRETRY	equ 4
IDIGNORE	equ 5
IDYES	equ 6
IDNO	equ 7
IDCLOSE	equ 8
IDHELP	equ 9
;/*
; * Edit Control Styles
; */
ES_LEFT	equ 0000h
ES_CENTER	equ 0001h
ES_RIGHT	equ 0002h
ES_MULTILINE	equ 0004h
ES_UPPERCASE	equ 0008h
ES_LOWERCASE	equ 0010h
ES_PASSWORD	equ 0020h
ES_AUTOVSCROLL	equ 0040h
ES_AUTOHSCROLL	equ 0080h
ES_NOHIDESEL	equ 0100h
ES_OEMCONVERT	equ 0400h
ES_READONLY	equ 0800h
ES_WANTRETURN	equ 1000h
ES_NUMBER	equ 2000h

FORMAT_MESSAGE_ALLOCATE_BUFFER	equ 00000100h
FORMAT_MESSAGE_IGNORE_INSERTS	equ 00000200h
FORMAT_MESSAGE_FROM_STRING	equ 00000400h
FORMAT_MESSAGE_FROM_HMODULE	equ 00000800h
FORMAT_MESSAGE_FROM_SYSTEM	equ 00001000h
FORMAT_MESSAGE_ARGUMENT_ARRAY	equ 00002000h
FORMAT_MESSAGE_MAX_WIDTH_MASK	equ 000000FFh

; * Dialog Styles
;*/
DS_ABSALIGN	equ 01h
DS_SYSMODAL	equ 02h
DS_LOCALEDIT	equ 20h
DS_SETFONT	equ 40h
DS_MODALFRAME	equ 80h
DS_NOIDLEMSG	equ 100h
DS_SETFOREGROUND	equ 200h
DS_3DLOOK	equ 0004h
DS_FIXEDSYS	equ 0008h
DS_NOFAILCREATE	equ 0010h
DS_CONTROL	equ 0400h
DS_CENTER	equ 0800h
DS_CENTERMOUSE	equ 1000H
DS_CONTEXTHELP	equ 2000h


;///////mys//////
; DlgDirList, DlgDirListComboBox flags values

 DDL_READWRITE       equ  0000h
 DDL_READONLY        equ  0001h
 DDL_HIDDEN          equ  0002h
 DDL_SYSTEM          equ  0004h
 DDL_DIRECTORY       equ  0010h
 DDL_ARCHIVE         equ  0020h
 DDL_POSTMSGS        equ  2000h
 DDL_DRIVES          equ  4000h
 DDL_EXCLUSIVE       equ  8000h
;PeekMessage() Options
PM_NOREMOVE    equ  0000h
PM_REMOVE      equ  0001h
PM_NOYIELD     equ  0002h
; DIB color table identifiers
;
DIB_RGB_COLORS  equ  0    ;/* color table in RGBTriples */
DIB_PAL_COLORS  equ  1    ;/* color table in palette indices */
; DIB color table identifiers
;
OFS_MAXPATHNAME                      equ  128
PS_SOLID                             equ  0
PS_DASH                              equ  1
PS_DOT                               equ  2
PS_DASHDOT                           equ  3
PS_DASHDOTDOT                        equ  4
PS_NULL                              equ  5
PS_INSIDEFRAME                       equ  6
PS_USERSTYLE                         equ  7
PS_ALTERNATE                         equ  8
PS_STYLE_MASK                        equ  0Fh
PS_ENDCAP_ROUND                      equ  0h
PS_ENDCAP_SQUARE                     equ  100h
PS_ENDCAP_FLAT                       equ  200h
PS_ENDCAP_MASK                       equ  0F00h
PS_JOIN_ROUND                        equ  0h
PS_JOIN_BEVEL                        equ  1000h
PS_JOIN_MITER                        equ  2000h
PS_JOIN_MASK                         equ  0F000h
PS_COSMETIC                          equ  0h
PS_GEOMETRIC                         equ  10000h
PS_TYPE_MASK                         equ  0F0000h
;mem
LMEM_FIXED                           equ  0h
LMEM_MOVEABLE                        equ  2h
LMEM_NOCOMPACT                       equ  10h
LMEM_NODISCARD                       equ  20h
LMEM_ZEROINIT                        equ  40h
LMEM_MODIFY                          equ  80h
LMEM_DISCARDABLE                     equ  0F00h
LMEM_VALID_FLAGS                     equ  0F72h
LMEM_INVALID_HANDLE                  equ  8000h
LHND                                 equ  LMEM_MOVEABLE + LMEM_ZEROINIT
LPTR                                 equ  LMEM_FIXED + LMEM_ZEROINIT
;file
HFILE_ERROR equ  -1
OF_READ                              equ  0h
OF_WRITE                             equ  1h
OF_READWRITE                         equ  2h
GENERIC_READ                         equ  80000000h
GENERIC_WRITE                        equ  40000000h
CREATE_NEW                           equ  1
CREATE_ALWAYS                        equ  2
OPEN_EXISTING                        equ  3
OPEN_ALWAYS                          equ  4
FILE_SHARE_READ                      equ  1h
FILE_SHARE_WRITE                     equ  2h
FILE_ATTRIBUTE_READONLY              equ  1h
FILE_ATTRIBUTE_HIDDEN                equ  2h
FILE_ATTRIBUTE_SYSTEM                equ  4h
FILE_ATTRIBUTE_DIRECTORY             equ  10h
FILE_ATTRIBUTE_ARCHIVE               equ  20h
FILE_ATTRIBUTE_NORMAL                equ  80h
FILE_ATTRIBUTE_TEMPORARY             equ  100h
FILE_ATTRIBUTE_COMPRESSED            equ  800h
FILE_BEGIN                           equ  0
FILE_CURRENT                         equ  1
FILE_END                             equ  2

OFN_EXPLORER            equ  80000h
OFN_EXTENSIONDIFFERENT  equ  00000400h
OFN_FILEMUSTEXIST       equ  00001000h
OFN_HIDEREADONLY        equ  00000004h
OFN_LONGNAMES           equ  00200000h

COLOR_ACTIVECAPTION                  equ  2
COLOR_INACTIVECAPTION                equ  3
COLOR_MENU                           equ  4
COLOR_WINDOW                         equ  5
COLOR_WINDOWFRAME                    equ  6
COLOR_MENUTEXT                       equ  7
COLOR_WINDOWTEXT                     equ  8

VK_BACK                              equ  8h
VK_CANCEL                            equ  3h
VK_CAPITAL                           equ  14h
VK_CLEAR                             equ  0Ch
VK_CONTROL                           equ  11h
VK_DELETE                            equ  2Eh
VK_DOWN                              equ  28h
VK_END                               equ  23h
VK_ESCAPE                            equ  1Bh
VK_EXECUTE                           equ  2Bh
VK_HELP                              equ  2Fh
VK_HOME                              equ  24h
VK_INSERT                            equ  2Dh
VK_LBUTTON                           equ  1h
VK_LEFT                              equ  25h
VK_MBUTTON                           equ  4h
VK_MENU                              equ  12h
VK_NEXT                              equ  22h
VK_PAUSE                             equ  13h
VK_PGDN                              equ  22h
VK_PGUP                              equ  21h
VK_PRINT                             equ  2Ah
VK_PRIOR                             equ  21h
VK_RBUTTON                           equ  2h
VK_RETURN                            equ  0Dh
VK_RIGHT                             equ  27h
VK_SELECT                            equ  29h
VK_SHIFT                             equ  10h
VK_SNAPSHOT                          equ  2Ch
VK_SPACE                             equ  20h
VK_TAB                               equ  9h
VK_UP                                equ  26h
VK_NUMPAD0                           equ  60h
VK_NUMPAD1                           equ  61h
VK_NUMPAD2                           equ  62h
VK_NUMPAD3                           equ  63h
VK_NUMPAD4                           equ  64h
VK_NUMPAD5                           equ  65h
VK_NUMPAD6                           equ  66h
VK_NUMPAD7                           equ  67h
VK_NUMPAD8                           equ  68h
VK_NUMPAD9                           equ  69h
VK_MULTIPLY                          equ  6Ah
VK_ADD                               equ  6Bh
VK_SEPARATOR                         equ  6Ch
VK_SUBTRACT                          equ  6Dh
VK_DECIMAL                           equ  6Eh
VK_DIVIDE                            equ  6Fh
VK_F1                                equ  70h
VK_F2                                equ  71h
VK_F3                                equ  72h
VK_F4                                equ  73h
VK_F5                                equ  74h
VK_F6                                equ  75h
VK_F7                                equ  76h
VK_F8                                equ  77h
VK_F9                                equ  78h
VK_F10                               equ  79h
VK_F11                               equ  7Ah
VK_F12                               equ  7Bh
VK_F13                               equ  7Ch
VK_F14                               equ  7Dh
VK_F15                               equ  7Eh
VK_F16                               equ  7Fh
VK_F17                               equ  80h
VK_F18                               equ  81h
VK_F19                               equ  82h
VK_F20                               equ  83h
VK_F21                               equ  84h
VK_F22                               equ  85h
VK_F23                               equ  86h
VK_F24                               equ  87h
VK_NUMLOCK                           equ  90h
VK_SCROLL                            equ  91h
VK_LSHIFT                            equ  0A0h
VK_RSHIFT                            equ  0A1h
VK_LCONTROL                          equ  0A2h
VK_RCONTROL                          equ  0A3h
VK_LMENU                             equ  0A4h
VK_RMENU                             equ  0A5h
VK_ATTN                              equ  0F6h
VK_CRSEL                             equ  0F7h
VK_EXSEL                             equ  0F8h
VK_EREOF                             equ  0F9h
VK_PLAY                              equ  0FAh
VK_ZOOM                              equ  0FBh
VK_NONAME                            equ  0FCh
VK_PA1                               equ  0FDh
VK_OEM_CLEAR                         equ  0FEh
VK_0						 equ  30h
VK_1						 equ  31h
VK_2						 equ  32h
VK_3						 equ  33h
VK_4						 equ  34h
VK_5						 equ  35h
VK_6						 equ  36h
VK_7						 equ  37h
VK_8						 equ  38h
VK_9						 equ  39h
VK_A						 equ  41h
VK_B						 equ  42h
VK_C						 equ  43h
VK_D						 equ  44h
VK_E						 equ  45h
VK_F						 equ  46h
VK_G						 equ  47h
VK_H						 equ  48h
VK_I						 equ  49h
VK_J						 equ  4Ah
VK_K						 equ  4Bh
VK_L						 equ  4Ch
VK_M						 equ  4Dh
VK_N						 equ  4Eh
VK_O						 equ  4Fh
VK_P						 equ  50h
VK_Q						 equ  51h
VK_R						 equ  52h
VK_S						 equ  53h
VK_T						 equ  54h
VK_U						 equ  55h
VK_V						 equ  56h
VK_W						 equ  57h
VK_X						 equ  58h
VK_Y						 equ  59h
VK_Z						 equ  5Ah

WS_EX_DLGMODALFRAME                  equ 1h
WS_EX_NOPARENTNOTIFY                 equ 4h
WS_EX_TOPMOST                        equ 8h
WS_EX_ACCEPTFILES                    equ 10h
WS_EX_TRANSPARENT                    equ 20h
WS_EX_MDICHILD                       equ 00000040h
WS_EX_TOOLWINDOW                     equ 00000080h
WS_EX_WINDOWEDGE                     equ 00000100h
WS_EX_CLIENTEDGE                     equ 00000200h
WS_EX_CONTEXTHELP                    equ 00000400h
WS_EX_RIGHT                          equ 00001000h
WS_EX_LEFT                           equ 00000000h
WS_EX_RTLREADING                     equ 00002000h
WS_EX_LTRREADING                     equ 00000000h
WS_EX_LEFTSCROLLBAR                  equ 00004000h
WS_EX_RIGHTSCROLLBAR                 equ 00000000h
WS_EX_CONTROLPARENT                  equ 00010000h
WS_EX_STATICEDGE                     equ 00020000h
WS_EX_APPWINDOW                      equ 00040000h

#ifndef ERROR_CODE_H_
#define ERROR_CODE_H_

 #define INVALIDPATH -1
 #define INVALIDFILENAME -2
 #define INVALIDDIRNAME -5
 #define SUCCESSFUL 1
 #define UNSUCCESSFUL -3
 #define DUPLICATE -4
 #define FOUND -5
 #define NOT_EMPTY -6
 #define listdir_SUCCESS 107
 #define movedir_NOT_A_DIR_FAILURE 006
 #define movedir_ALREADY_IN_DEST 016
 #define movedir_SUCCESS 106
#define VFS_07_FAILURE_INVALID_FILE_PATH 7
#define VFS_07_FAILURE_NOT_A_DIR 17


//createvfs
#define DATA_FILE_ALREADY_EXISTS 1
#define CANNOT_CREATE_DATAFILE 2
#define NOT_ENOUGH_MEMORY 3
#define INVALID_CHARACTER_IN_NAME 4
#define INVALID_SIZE 5


//mountvfs
#define DATA_FILE_NOT_FOUND 1
#define CANNOT_READ_FROM_FILE 2
#define INVALID_HEADER 3


//makedir
#define UNABLE_TO_CREATE_NEWDIR 1
#define INVALID_CHARACTER_IN_DIRNAME 2
#define DIRECTORY_ALREADY_EXISTS 3

//narytree
#define INSERTEDSUCCESSFULLY 0
#define ERRORROOTNULL -1
#define INVALIDDATA -2
#define INVALIDPATH -3
#define ERROR_FILE_ALREADY_EXISTS -4
#define INVALIDROOT -5
#define NOTFOUND -6
#define DELETEDSUCCESSFULLY 0
#endif /* ERROR_CODE_H_ */

//filesystem
#define MOUNTEDSUCCESSFULLY 0
#define NOTMOUNTED -1
#define VFS_04_SUCCESS 0
#define VFS_04_FAILURE_NO_FREE_FD 1
#define VFS_04_FAILURE_OTHER_REASON 2

//addfile
#define UNABLE_TO_CREATE_NEWFILE 1
#define INVALID_CHARACTER_IN_FILENAME 2
#define FILE_ALREADY_EXISTS 3
#define FILE_SYSTEM_FULL 4

//update file
#define SOURCE_FILE_PATH_NOT_FOUND 1
#define DEST_FILE_PATH_NOT_FOUND 2
#define INCORRECT_FILE_FORMAT 3
#define FILE_SYSTEM_FULL 4

//list file
#define SOURCE_FILE_PATH_NOT_FOUND 1
#define OUTPUT_FILE_PATH_NOT_FOUND 2
#define SOURCE_PATH_MISSING 3
#define OUTPUT_PATH_MISSING 4
#define NOT_A_TEXT_FILE 5

//remove file
#define CANNOT_FIND_SPECIFIED_PATH_OR_FILE 1

//search file
#define CANNOT_FIND_SPECIFIED_OUTPUTFILE 1
#define OUTPUT_PATH_MISSING 2

#define ERRORNOTFOUND -1http://www.google.co.in/search?client=ubuntu&channel=fs&q=substring+in+c&ie=utf-8&oe=utf-8&redir_esc=&ei=mQ2rUJ3UN4v_rAeZmoCYDQ#hl=en&client=ubuntu&hs=Bs1&channel=fs&sclient=psy-ab&q=substring+function+in+c&oq=substring+function+in+c&gs_l=serp.3..0l4.132694.134973.0.135158.13.3.0.10.10.0.149.270.0j2.2.0.les%3B..0.0...1c.1.6UtAQ014nPk&pbx=1&bav=on.2,or.r_gc.r_pw.r_qf.&fp=b7df5fd0c4aba648&bpcl=38625945&biw=1920&bih=990
#define FOUND 0
#define SUCCESS 0
#define FAILURE -1

#ifndef VFS_4_INCLUDED
#define VFS_4_INCLUDED

int vfsmakedir(char parent_path[MAX_PATH_SIZE],
		char dir_name[MAX_FILE_NAME_SIZE]);

int vfsaddfile(char *, char *, char *);

int vfscopyfile(char *, char *);

#endif 

#ifndef __FILESYS_H__
#define __FILESYS_H__

int s_open (const char *pathname, int flags, mode_t mode);
int s_lseek (int fd, long offset, int whence);
ssize_t s_write (int fd, const void *buf, size_t count);
ssize_t s_read (int fd, void *buf, size_t count);
int s_close (int fd);
void get_sha1_hash (const void *buf, int len, const void *sha1);
int filesys_init (void);
int s_open_temp (const char *pathname, int flags, mode_t mode);
struct merkle_tree{
	struct merkle_tree* parent;
	struct merkle_tree* right;
	struct merkle_tree*  left;
	char* filename;
	unsigned char value[20];
};
#endif

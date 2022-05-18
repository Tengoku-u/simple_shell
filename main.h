#ize_t j);

ssize_t get_line(char **lineptr, size_t *n, FILE *stream);



/* exec_line */

int exec_line(data_shell *datash);



/* cmd_exec.c */

int is_cdir(char *path, int *i);

char *_which(char *cmd, char **_environ);

int is_executable(data_shell *datash);

int check_error_cmd(char *dir, data_shell *datash);

int cmd_exec(data_shell *datash);



/* env1.c */

char *_getenv(const char *name, char **_environ);

int _env(data_shell *datash);



/* env2.c */

char *copy_info(char *name, char *value);

void set_env(char *name, char *value, data_shell *datash);

int _setenv(data_shell *datash);

int _unsetenv(data_shell *datash);



/* cd.c */

void cd_dot(data_shell *datash);

void cd_to(data_shell *datash);

void cd_previous(data_shell *datash);

void cd_to_home(data_shell *datash);



/* cd_shell.c */

int cd_shell(data_shell *datash);



/* get_builtin */

int (*get_builtin(char *cmd))(data_shell *datash);



/* _exit.c */

int exit_shell(data_shell *datash);



/* aux_stdlib.c */

int get_len(int n);

char *aux_itoa(int n);

int _atoi(char *s);



/* aux_error1.c */

char *strcat_cd(data_shell *, char *, char *, char *);

char *error_get_cd(data_shell *datash);

char *error_not_found(data_shell *datash);

char *error_exit_shell(data_shell *datash);



/* aux_error2.c */

char *error_get_alias(char **args);

char *error_env(data_shell *datash);

char *error_syntax(char **args);

char *error_permission(char **args);

char *error_path_126(data_shell *datash);





/* get_error.c */

int get_error(data_shell *datash, int eval);



/* get_sigint.c */

void get_sigint(int sig);



/* aux_help.c */

void aux_help_env(void);

void aux_help_setenv(void);

void aux_help_unsetenv(void);

void aux_help_general(void);

void aux_help_exit(void);



/* aux_help2.c */

void aux_help(void);

void aux_help_alias(void);

void aux_help_cd(void);



/* get_help.c */

int get_help(data_shell *datash);



#endif

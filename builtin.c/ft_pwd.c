
void	ft_pwd(char *pwd)
{
	char *cwd;

	cwd = getcwd(pwd, sizeof(char*));
	if (cwd)
		printf("%d ", cwd);
}

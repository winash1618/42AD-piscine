char *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int    ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase( char *str);
char	*ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	/*
	char dest[] = "toto", char src[] = "totoe";
	ft_strcpy(dest, src);
	*/
    /*	
	char dest[] = "fjdf", src[] = "fjdsf";
    ft_strncpy(dest, src, 5);
 	*/
	/*
	char str[] = "tot0";
    ft_str_is_alpha(str);
	*/
	/*
	char str[] = "f1df3f4ds3adfsads24";
    ft_str_is_numeric(str);
	*/
	/*
	char str[] = "toto";
    ft_str_is_lowercase(str);
	*/
	/*
	char str[] = "TUOH";
    ft_str_is_uppercase(str);
	*/
	/*
	char str[] = "hdfl(76E6wq9";
    ft_str_is_printable(str);
	*/
	/*
	char str[10] = "tofd645tA";
	ft_strupcase(str);
	*/
	/*
	char str[10] = "tofdffSDFAS";
	ft_strlowcase(str);
	*/
}

#include "../header/parsing.h"

// /*
// ** cd, echo, env, exit, export, pwd, unset
// */

// int if_cd(    )
// {
// 	if ((c[0] = 'c' || c[0] == 'C') && (c[1] == 'd' || c[1] == 'D') 
// 		&& c[2] == "\0")
// 		return (CD);
// 	return (0);
// }

//  (e)
// {

// 	if ((c[1] = 'c' || c[1] == 'C') && (c[2] == 'h' || c[2] == 'H')
// 		&& (c[3] == 'o' || c[3] == 'O') && c[4] == "\0")
// 		return (ECHO);
// 	if ((c[1] = 'n' || c[1] == 'N') && (c[2] == 'v' || c[2] == 'V')
// 		&& c[3] == "\0")
// 		return (ENV);
// 	if (c[1] = 'x' || c[1] == 'X')
// 	{
// 		if ((c[2] = 'i' || c[2] == 'I') && (c[3] == 't' || c[3] == 'T')
// 			&& c[4] == "\0")
// 			return (EXIT);
// 		if ((c[2] = 'p' || c[2] == 'P') && (c[3] == 'r' || c[3] == 'R')
// 		&& (c[4] == 't' || c[4] == 'T') && c[5] == "\0")
// 			return (EXPORT);
// 		}
// 	}
// 	return (0);
// }
// else if (p)
// {
// 	if (c = 'd' && character[2] == "\0")
// 		return (PWD);
// 	return (0);
// }

// {
// 	if (u)
// 		return (UNSET);
// 	return (false);
// }

// // 4 lette len max 6
// lexical_analyzer(int command_len)
// {

// 	if (command_len >= 2 && command_len <= 6)
// 	{
// 		if (command_len == 2)
// 			return (if_cd(   ))
// 		else if (command_len >= 3 && command_len <= 6
// 			&& (c[0] = 'e' || c[0] == 'E'))
// 			return (if_e(   ))
// 		else if (command_len == 3)
// 			if ()
// 			return (if_env);
// 		else if (command_len == 3)
// 			return (if_unset)
// 		else if (command_len == 5)
// 			return (if_unset)
// 	}
// 	return (false);
// }


void	find_wich_command(char *command, int i_c, char *pattern, int define)
{
	int	i_p;

	while (--i_c)
	{
		i_c -= 2;
		if (command[i_c] != pattern[i_p] 
			&& command[i_c] != pattern[i_p])
			return ;
	}
	// = define
}

void	lexical_analyzer(char *command, int len) // struct len
{
	if (command_len == 2)
		(find_wich_command(command, len, "CcDd\0", CD));
	else if (command_len == 3)
	{
		if (!find_wich_command(command, "PpWwDd\0", PWD))
			(find_wich_command("EeNnVv\0", ENV));
	}
	else if (command_len == 4)
	{
		if (!find_wich_command("EeCcHhOo\0", ECHO))
			(find_wich_command("EeXxIiTt\0", EXIT));
	}
	else if (command_len == 5)
		find_wich_command("UuNnSsEeTt\0", UNSET);
	else if (command_len == 6)
		find_wich_command("EeXxPpOoRrTt\0", EXPORT);
}

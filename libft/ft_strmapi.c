/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 03:59:47 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/27 05:38:53 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		l;
	int		i;

	l = ft_strlen(s);
	str = (char *)malloc(l + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char	alpha_mirror(unsigned int i, char c)
{
	char	new;

	new = c;
	(void)i;
	if (('a' <= c && c <= 'm') || ('A' <= c && c <= 'M'))
		new += 13;
	else if (('n' <= c && c <= 'z') || ('N' <= c && c <= 'Z'))
		new -= 13;
	return (new);
}

int	main(void)
{
printf("%s", ft_strmapi("Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq"
" uvag. Sbe rnpu "
"pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe gur"
"arkg pvepyr. Guvf punyyratr vf vaqvivqhny, jvgu n svany cevmr sbe"
"bar fghqrag. Fgnss zrzoref znl cnegvpvcngr ohg ner abg ryvtvoyr sbe n"
"cevmr. Ner lbh nzbat gur irel svefg gb fbyir n pvepyr? Fraq gur uvagf"
"jvgu rkcynangvbaf gb by@42.se gb or nqqrq gb gur yrnqreobneq. Gur"
"uvag sbe guvf svefg cebwrpg, juvpu znl pbagnva nantenzzrq jbeqf, vf:"
"Jbys bs ntragvir cnegvpyrf gung qvfcebir terral gb lbhe ubzrf qan"
"gung cebjfr lbhe fgbby", alpha_mirror));
}
*/

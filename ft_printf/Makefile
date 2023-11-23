LIB_DIR := libft

all:
	@$(MAKE) -C $(LIB_DIR)
	cp libft/libft.a libftprintf.a
	@$(MAKE) -f ft_printf.mk

clean:
	@$(MAKE) -C $(LIB_DIR) clean
	@$(MAKE) -f ft_printf.mk clean

fclean: clean
	@$(MAKE) -C $(LIB_DIR) fclean
	@$(MAKE) -f ft_printf.mk fclean

re: fclean all
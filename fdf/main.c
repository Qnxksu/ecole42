#include "fdf.h"

/*
void 	parsing(void)
{

}
*/

int		main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1000, "Coucou mon coco");

	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 0, 150), ft_mlx_getposition(0, 40, 150));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 0, 150), ft_mlx_getposition(10, 0, 150));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(10, 0, 150), ft_mlx_getposition(10, 40, 150));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 40, 150), ft_mlx_getposition(10, 40, 150));

	ft_mlx_3draw(mlx, win, ft_mlx_getposition(10, 0, 150), ft_mlx_getposition(10, 0, 200));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 0, 150), ft_mlx_getposition(0, 0, 200));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 40, 150), ft_mlx_getposition(0, 40, 200));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(10, 40, 150), ft_mlx_getposition(10, 40, 200));

	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 0, 200), ft_mlx_getposition(0, 40, 200));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 0, 200), ft_mlx_getposition(10, 0, 200));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(10, 0, 200), ft_mlx_getposition(10, 40, 200));
	ft_mlx_3draw(mlx, win, ft_mlx_getposition(0, 40, 200), ft_mlx_getposition(10, 40, 200));








	//ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(420, 420));
	/*
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(12, 100));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(25, 100));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(100, 12));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(100, 25));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(100, 20));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(100, 40));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(100, 90));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(10, 10), ft_mlx_getpixel(500, 95));


	ft_mlx_draw(mlx, win, ft_mlx_getpixel(990-42, 990- 42), ft_mlx_getpixel(990, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(990-12, 990-100), ft_mlx_getpixel(990, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(990-25, 990-100), ft_mlx_getpixel(990, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(900-100, 990- 12), ft_mlx_getpixel(990, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(900-100, 990- 25), ft_mlx_getpixel(990, 990));

	ft_mlx_draw(mlx, win, ft_mlx_getpixel(990-42, 42), ft_mlx_getpixel(990, 10));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(990-12, 100), ft_mlx_getpixel(990, 10));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(990-25, 100), ft_mlx_getpixel(990, 10));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(900-100, 12), ft_mlx_getpixel(990, 10));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(900-100, 25), ft_mlx_getpixel(990, 10));

	ft_mlx_draw(mlx, win, ft_mlx_getpixel(42, 990- 42), ft_mlx_getpixel(10, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(12, 990-100), ft_mlx_getpixel(10, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(25, 990-100), ft_mlx_getpixel(10, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(100, 990- 12), ft_mlx_getpixel(10, 990));
	ft_mlx_draw(mlx, win, ft_mlx_getpixel(100, 990- 25), ft_mlx_getpixel(10, 990));*/

	mlx_loop(mlx);	
}

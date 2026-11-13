#include "main.h"

/**
 * jack_bauer - prints the ticks of mins and hrs
 * Return: returns 0
 */
void jack_bauer(void)
{
	int m_01 = 48;
	int m_10 = 48;
	int h_01 = 48;
	int h_10 = 48;

	while (h_01 < 51 || h_10 < 52)
	{
		_putchar(h_10);
		_putchar(h_01);
		_putchar(58);
		_putchar(m_10);
		_putchar(m_01);
		_putchar(10);
		m_01++;
		if (m_01 > 57)
		{
			m_10++;
			m_01 = 48;
			if (m_10 >= 54)
			{
				h_01++;
				m_10 = 48;
				if (h_10 == 50 && h_01 >= 52)
				{
					h_10 = h_01 = m_10 = m_01 = 48;
					break;
				}
				else if (h_01 > 57)
				{
					h_10++;
					h_01 = 48;
				}
			}
		}
	}
}

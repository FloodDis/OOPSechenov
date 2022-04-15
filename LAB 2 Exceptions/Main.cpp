#include <iostream>

#include "Header Files/Structs/Circle.h"
#include "Header Files/Structs/Flight.h"
#include "Header Files/Structs/Film.h"
#include "Header Files/Structs/Rectangle.h"
#include "Header Files/Enumeration/DemoEnums.h"

void main()
{
	/// <summary>
	/// Демонстрация структур
	/// </summary>
	enum Demo
	{
		/// <summary>
		/// Круг
		/// </summary>
		Circle = 1,

		/// <summary>
		/// Рейс
		/// </summary>
		Flight,

		/// <summary>
		/// Фильм
		/// </summary>
		Film,

		/// <summary>
		/// Прямоугольник
		/// </summary>
		Rectangle,

		/// <summary>
		/// Перечисления
		/// </summary>
		Enums,

		/// <summary>
		/// Выход
		/// </summary>
		Exit
	};

	cout << "Enter 1 to run circle demo.\n";
	cout << "Enter 2 to run flight demo.\n";
	cout << "Enter 3 to run movie demo.\n";
	cout << "Enter 4 to run rectangle demo.\n";
	cout << "Enter 5 to run enums demo.\n";
	cout << "Enter 6 to close program.\n";

	int prompt = 0;
	while (true)
	{
		cout << "\nEnter command: ";
		cin >> prompt;
		cout << '\n';
		switch (prompt)
		{
			case Circle:
			{
				try
				{
					DemoCircle();
				}
				catch (const exception& e)
				{
					cout << e.what() << "\n";
				}
				break;
			}
			case Flight:
			{
				try
				{
					DemoFlight();
				}
				catch (const exception& e)
				{
					cout << e.what() << "\n";
				}
				break;
			}
			case Film:
			{
				try
				{
					DemoFilm();
				}
				catch (const exception& e)
				{
					cout << e.what() << "\n";
				}
				break;
			}
			case Rectangle:
			{
				try
				{
					DemoRectangle();
				}
				catch (const exception& e)
				{
					cout << e.what() << "\n";
				}
				break;
			}
			case Enums:
			{
				try
				{
					DemoEnums();
				}
				catch (const exception& e)
				{
					cout << e.what() << "\n";
				}
				break;
			}
			case Exit:
			{
				return;
			}
			default:
			{
				break;
			}
		}
	}
}
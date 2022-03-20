#pragma once
#include "PointClass.h"
#include "RectangleClass.h"
#include "TimeClass.h"
#include "FlightClass.h"
#include "SongClass.h"
#include "AlbumClass.h"
#include "BandClass.h"
using namespace std;

// ������� 3.5.2
/// <summary>
///	������� ������������ ������ RectangleClass
/// </summary>
void DemoRectangleWithPointClass();

/// <summary>
///	������� ������ ������ RectangleClass �� �����
/// </summary>
void WriteRectangleWithPointClass(RectangleClass rectangle);

/// <summary>
///	������� ������������ ������ FlightClass � TimeClass
/// </summary>
void DemoFlightWithTimeClass();

/// <summary>
///	������� ������������ ������ ������ FlightClass �� �����
/// </summary>
void WriteFlightClass(FlightClass& flight);

/// <summary>
///	������� ������������ ������ BandClass
/// </summary>
void DemoBandClass();
//===========================================================================================================================
// Spirenkov Maxim, 2003
//===========================================================================================================================//	
// 
//===========================================================================================================================
// GraphNodeIn	
//============================================================================================

#ifndef _GraphNodeIn_h_
#define _GraphNodeIn_h_

#include "GraphNodeInOut.h"

class GraphNodeIn : public GraphNodeInOut  
{
//--------------------------------------------------------------------------------------------
public:
	GraphNodeIn(AnxOptions & options);
	virtual ~GraphNodeIn();

//--------------------------------------------------------------------------------------------
public:
	//Нарисовать нод
	virtual void Draw(const GUIPoint & pos, IRender * render, GUICliper & clipper);
	//Проверить поподание в нод
	virtual bool Inside(const GUIPoint & pnt);
	//Активировать
	virtual void Activate();

	//Получить тип нода
	virtual AnxNodeTypes GetType();

//--------------------------------------------------------------------------------------------
private:


};

#endif


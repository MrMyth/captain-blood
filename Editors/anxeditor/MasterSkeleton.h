//===========================================================================================================================
// Spirenkov Maxim, 2003
//===========================================================================================================================//	
//
//===========================================================================================================================
// MasterSkeleton
//============================================================================================

#ifndef _MasterSkeleton_h_
#define _MasterSkeleton_h_

#include "AnxBase.h"

class MasterSkeleton
{
public:
	//Описание кости
	struct Bone
	{
		//Имя кости
		string name;
		//Родительская кость
		long parent;
		//Ориентация кости
		Quaternion q;
		//Позиция кости
		Vector p;
		//Масштаб кости
		Vector s;
		//Временная матрица
		Matrix mtx;
	};

//--------------------------------------------------------------------------------------------
public:
	MasterSkeleton(AnxOptions & options);
	virtual ~MasterSkeleton();

	//Записать данные в поток
	void Write(AnxStream & stream);
	//Прочитать данные из потока
	void Read(AnxStream & stream);
	//Сравнить указаный мастер скелет с текущим
	bool Compare(MasterSkeleton * skeleton);

//--------------------------------------------------------------------------------------------
public:
	const AnxOptions & opt;	//Опции
	array<Bone *> bones;	//Кости скелета
};

#endif


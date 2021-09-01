ref MyBuildingsClass g_MyBuildingsClass = new MyBuildingsClass; //g_MyBuildingsClass - переменная - ссылка на создающийся экземпляр класса - он будет создан при компиляции

class MyBuildingsClass
{
	void MyBuildingsClass() //Это конструктор - он будет выполенен сразу после создания экземпляра класса
	{
		init(); //Это функция будет вызвана из конструктора
		delete g_MyBuildingsClass; //Зачем классу занимать память после того как все что нужно отработало? грохнем его
	}

	void init() //Будет вызвана из конструктора
	{
		SpawnObject( "SCGarbage_Pile2", "2452 90.975 2751.67", "0.000000 0.000000 0.000000" );
		
	}

	void SpawnObject(string objectName, vector position, vector orientation)
	{
    	Object obj;
    	obj = Object.Cast(GetGame().CreateObject(objectName, "1 500 1"));
    	obj.SetPosition(position);
    	obj.SetOrientation(orientation);

    	// Force update collisions
   		if (obj.CanAffectPathgraph())
    	{
        	obj.SetAffectPathgraph(true, false);
        	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    	}
		else
		{
			orientation = obj.GetOrientation();
			orientation[0] = orientation[0] + 1;
			obj.SetOrientation(orientation);
			orientation[0] = orientation[0] - 1;
			obj.SetOrientation(orientation);
			orientation[1] = orientation[1] + 1;
			obj.SetOrientation(orientation);
			orientation[1] = orientation[1] - 1;
			obj.SetOrientation(orientation);
			orientation[2] = orientation[2] + 1;
			obj.SetOrientation(orientation);
			orientation[2] = orientation[2] - 1;
			obj.SetOrientation(orientation);
		}
	}
}
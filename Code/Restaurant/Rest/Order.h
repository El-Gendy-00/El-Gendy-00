#ifndef __ORDER_H_

#define __ORDER_H_



#include "..\Defs.h"



class Order

{



protected:

	int ID;         //Each order has a unique ID (from 1 --> 999 )

	ORD_TYPE type;		//order type: Normal, vegan, VIP

	ORD_STATUS status;	//waiting, in-service, done

	int Size;	//The distance (in meters) between the order location and the resturant 

	double totalMoney;	//Total order money


	int ArrTime, ServTime, FinishTime;	//arrival, service start, and finish times

	//

	// TODO: Add More Data Members As Needed

	//

public:

	Order(int ID, ORD_TYPE r_Type, int size, int time, double money);

	virtual ~Order();



	int GetID();



	ORD_TYPE GetType() const;



	void Setsize(int d);

	int Getsize() const;



	void setStatus(ORD_STATUS s);

	ORD_STATUS getStatus() const;



	//

	// TODO: Add More Member Functions As Needed

	//

	bool operator> (const Order& x)const;

};



#endif


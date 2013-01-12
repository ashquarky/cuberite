
#pragma once

#include "Entity.h"
#include "Item.h"





class cPlayer;





// tolua_begin
class cPickup :
	public cEntity
{
	// tolua_end
	typedef cEntity super;
	
public:
	CLASS_PROTODEF(cPickup);

	cPickup(int a_MicroPosX, int a_MicroPosY, int a_MicroPosZ, const cItem & a_Item, float a_SpeedX = 0.f, float a_SpeedY = 0.f, float a_SpeedZ = 0.f);	// tolua_export
	
	virtual void Initialize(cWorld * a_World) override;

	cItem &       GetItem(void)       {return m_Item; }								// tolua_export
	const cItem & GetItem(void) const {return m_Item; }

	virtual void SpawnOn(cClientHandle & a_ClientHandle) override;
	
	virtual bool CollectedBy(cPlayer * a_Dest);					// tolua_export

	virtual void Tick(float a_Dt, MTRand & a_TickRandom) override;
	virtual void HandlePhysics(float a_Dt) override;
	
	const Vector3f & GetSpeed(void) const {return m_Speed; }
	
private:

	Vector3f   m_Speed;
	Vector3f   m_ResultingSpeed;	 //Can be used to modify the resulting speed for the current tick ;)

	Vector3f   m_WaterSpeed;
	bool       m_bOnGround;
	bool       m_bReplicated;

	float m_Timer;

	cItem m_Item;

	bool m_bCollected;
};  // tolua_export






#pragma once

#include "BlockEntity.h"
#include "../World.h"
#include "../Piston.h"
#include "../Player.h"





class cBlockFurnaceHandler :
	public cBlockEntityHandler
{
public:
	cBlockFurnaceHandler(BLOCKTYPE a_BlockType) :
		cBlockEntityHandler(a_BlockType)
	{
	}


	virtual void ConvertToPickups(cItems & a_Pickups, NIBBLETYPE a_BlockMeta) override
	{
		a_Pickups.push_back(cItem(E_ITEM_FURNACE, 1, 0));
	}

	
	virtual bool GetPlacementBlockTypeMeta(
		cWorld * a_World, cPlayer * a_Player,
		int a_BlockX, int a_BlockY, int a_BlockZ, char a_BlockFace, 
		int a_CursorX, int a_CursorY, int a_CursorZ,
		BLOCKTYPE & a_BlockType, NIBBLETYPE & a_BlockMeta
	) override
	{
		a_BlockType = m_BlockType;
		a_BlockMeta = cPiston::RotationPitchToMetaData(a_Player->GetRotation(), 0);
		return true;
	}
} ;





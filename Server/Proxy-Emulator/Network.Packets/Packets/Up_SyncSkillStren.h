#include "pb\up.pb.h"
#include <iostream>

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Network
{
	namespace Packets
	{
		// _sync_skill_stren, 61
		public ref struct Up_SyncSkillStren : Up_UpMsg
		{
			Up_SyncSkillStren()
			{
				MessageType = 61;
			}

			virtual String^ ToString() override
			{
				return "";
			}
		};
	}
}
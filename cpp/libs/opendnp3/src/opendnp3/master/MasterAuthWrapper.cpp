/**
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */

#include "MasterAuthWrapper.h"

#include <opendnp3/master/MasterState.h>

namespace opendnp3
{

MasterAuthWrapper::MasterAuthWrapper() : pProvider(nullptr)
{}

void MasterAuthWrapper::SetProvider(MState& mstate, IMasterAuthProvider& auth)
{
	pProvider = &auth;
	pProvider->SetMasterState(mstate);
}

void MasterAuthWrapper::GoOnline()
{
	if (pProvider)
	{
		pProvider->GoOnline();
	}
}

void MasterAuthWrapper::GoOffline()
{
	if (pProvider)
	{
		pProvider->GoOffline();
	}
}

void MasterAuthWrapper::OnReceive(MState& mstate, const openpal::ReadBufferView& apdu, const APDUResponseHeader& header, const openpal::ReadBufferView& objects)
{
	if (pProvider)
	{
		pProvider->OnReceive(apdu, header, objects);
	}
	else
	{
		mstate.ProcessAPDU(header, objects);
	}
}

void MasterAuthWrapper::RecordLastRequest(const openpal::ReadBufferView& asdu)
{
	if (pProvider)
	{
		pProvider->RecordLastRequest(asdu);
	}
}

}


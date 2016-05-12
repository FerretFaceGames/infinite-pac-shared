#include "pch.h"
#include "App/State.h"

std::shared_ptr<ff::State> ff::State::Advance(AppGlobals *context)
{
	return nullptr;
}

void ff::State::Render(AppGlobals *context, IRenderTarget *target)
{
}

void ff::State::SaveState(AppGlobals *context)
{
}

void ff::State::LoadState(AppGlobals *context)
{
}

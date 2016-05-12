#pragma once

namespace ff
{
	class AppGlobals;
	class IRenderTarget;

	class State : public std::enable_shared_from_this<State>
	{
	public:
		UTIL_API virtual std::shared_ptr<State> Advance(AppGlobals *context);
		UTIL_API virtual void Render(AppGlobals *context, IRenderTarget *target);
		UTIL_API virtual void SaveState(AppGlobals *context);
		UTIL_API virtual void LoadState(AppGlobals *context);
	};
}

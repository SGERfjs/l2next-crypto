#ifndef H_ON_INFLATE_PASSED
#define H_ON_INFLATE_PASSED

#include "Shared/Templates/EventTemplate.h"
#include "Crypto/Algorithms/Shared/ZLib/Structs/zlibResult.h"

namespace CryptoEvents
{
	class OnInflatePassed
		: public EventTemplate<SZlibResult>
	{
	public:
		virtual void Bind_OnInflatePassed(const Functor& func)
		{
			Add(func);
		}

		virtual void Exec_OnInflatePassed(const SZlibResult& result)
		{
			Call(result);
		}
	};
}

#endif // H_ON_INFLATE_PASSED

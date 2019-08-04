#ifndef H_ALGORITHM
#define H_ALGORITHM

#include <memory>
#include "Crypto/Enums/HeaderVersion.h"
#include "Utils/Streams/Factory/StreamFactory.h"

using namespace::LineageCryptoStreams;

struct DuplexTypes
{
	std::shared_ptr<DuplexStream> encrypt;
	std::shared_ptr<DuplexStream> decrypt;
};

class Algorithm
{
public:
	virtual ~Algorithm() = default;

	/**
	 * Get instance header version.
	 *
	 * @return EHeaderVersion header version
	 */
	EHeaderVersion GetVersion() const;

	/**
	 * Gets duplex that are related to this algorithm.
	 * @return const DuplexTypes&
	 */
	const DuplexTypes& GetDuplex() const;

protected:
	EHeaderVersion version = NOT_IMPL;
	DuplexTypes duplex;
};

#endif // H_ALGORITHM

#ifndef MIR_NEURON_ACTOR
#define MIR_NEURON_ACTOR
#include <vector>
#include <string>
#include <memory>
#include "mir/components/expression.h"
#include "mir/components/topology.h"

namespace mir
{
    class MIR_NeuronActor {
    public:
        size_t buffer_size;
        std::vector<uint32_t> neighbor_in;
        std::vector<std::shared_ptr<BaseMIRConnectionTopology>> topology;
        std::vector<std::shared_ptr<MIRExpression>> message_processing_codes;
    };

    
} 


#endif
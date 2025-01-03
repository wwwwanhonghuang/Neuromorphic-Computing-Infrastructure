#ifndef MIR_NEURON_ACTOR
#define MIR_NEURON_ACTOR
#include <vector>
#include <string>
#include <memory>
#include "mir/components/expression.h"

namespace mir
{
    class MIR_NeuronActor {
    public:
        size_t buffer_size;
        std::vector<uint32_t> neighbor_in;
        std::vector<std::string> topology;
        std::vector<std::shared_ptr<MIRExpression>> message_processing_codes;
    };
} 


#endif
#include <vector>
#include <string>
#ifndef MIR_NEURON_ACTOR
#define MIR_NEURON_ACTOR
class MIR_NeuronActor {
public:
    size_t buffer_size;
    std::vector<uint32_t> code_on_event;
    std::vector<uint32_t> neighbor_in;
    std::vector<const std::string&> topology;
};

#endif
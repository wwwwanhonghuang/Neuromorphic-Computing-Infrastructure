#include <memory>
#include "mir/components/actor.h"

int main(){
    std::shared_ptr<mir::MIR_NeuronActor> neuron_actor = std::make_shared<mir::MIR_NeuronActor>();
    return 0;
}
#ifndef MIR_CONNECTION_TOPOLOGY
#define MIR_CONNECTION_TOPOLOGY
#include <vector>
#include <string>
namespace mir
{
    class BaseMIRConnectionTopology {
        virtual std::vector<bool> generate_low_level_topology_representation(int n_pre_neurons, int n_post_neurons) = 0;
    };

    class StringFileMIRConnectionTopology  : public BaseMIRConnectionTopology {
    public:
        StringFileMIRConnectionTopology(const std::string& connection_topology_file_path){

        }
    };

    class BinaryFileMIRConnectionTopology  : public BaseMIRConnectionTopology {
    public:
        BinaryFileMIRConnectionTopology(const std::string& connection_topology_file_path){

        }
    };

    class MatrixDescribedMIRConnectionTopology: public BaseMIRConnectionTopology {
    public:
        MatrixDescribedMIRConnectionTopology(const std::vector<bool>& topology){
        }
    };

} // namespace mir

#endif

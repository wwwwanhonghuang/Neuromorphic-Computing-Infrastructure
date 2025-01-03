## Neuromorphic Computing Infrastructure

This repository is dedicated to the development of a **general-purpose neuromorphic computing infrastructure** that enables flexible deployment of computations across a wide variety of devices. We plan to design a **high-level intermediate representation (HIR)** and a **medium-level intermediate representation (MIR)** to facilitate the construction, optimization and deployment of spiking neural networks (SNNs) and network macroscopic dynamics-based neuromorphic computations.



The infrastructure leverages the **actor programming model**, which should be well aligns with the behavior of biological neural networks, making it an intuitive and effective choice for neuromorphic computing.



Follow characteristics is considered in the design:

1. Realtime
2. Easy-to-use interfaces
   + A domain specific language-like high-level intermediate representation is designed.
3. Distributed
   + A network can be distributed into hetero generous devices. And partitioning semantics is equipped in IR.
4. Extensible
   + Execution backend can be extended to various hardware.
5. Performance Optimizable
   + Optimization component should be equipped
   + Hardware-independent and Hardware-dependent
6. Multi-device Deployability
7. Integrality
   + Multi-source and multi-modal inputs are easily be integrated. 
8. Scalability
9. Analyzable
10. Highly-asynchronous


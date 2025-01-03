## Topic 1: The integration of multi-model inputs

<img src="C:\Users\Micro\AppData\Roaming\Typora\typora-user-images\image-20250102154540492.png" alt="image-20250102154540492" style="zoom:33%;" />

**Research Questions:**

+ How the encoded and integrated input well model the source time serial data.
  + Specifically, How the integrated inputs $\mathcal I_{heter}(\bigoplus _i\mathcal I_{homo\_after}e_c^{(i)}(\mathcal I_{homo\_pre}(I_i(t)))):(n:\mathbb N)\times \mathbb R\rightarrow \mathbb R$​
  + $I_i(t): \mathbb R\rightarrow M_i^*$, where $M_i^* = \coprod_{n\in\mathbb N} M_i^n$ 
    + i-th kind of input data. Where $M_i$ is the type of data representation, and $n$ is the count of inner homomorphic structure. e.g., $M_i$ is the category of EEG, and n is the count of channels. 
  + $\mathcal I_{homo\_pre}:(\mathbb R\rightarrow M_i^*)\rightarrow (\mathbb R\rightarrow M_i^*)$ 
    + pre-encoding data merging. (inner merging)
  + $e_c^{(i)}:(\mathbb R\rightarrow M_i^*)\rightarrow (\mathbb R\rightarrow \mathbb R^*)$
    + Encoder for i-th modal data.
  + $\mathcal I_{homo\_after}:(\mathbb R\rightarrow \mathbb R^m)\rightarrow（\mathbb R\rightarrow \mathbb R^k)$ 
    + after-encoding data merging. (outer merging)



+ How well the mapping preserve the input **structures**.

  > Structure is very important, as indicated by the free-entropy principle proposer. Structure learning is an important development direction for computational neuroscience. 

  + For instance, are they **preserving** certain structures, such as smoothness, linearity, or temporal dependencies? 

  + How the temporal dependencies in the data are handled by the functors and the integration process?

    > This is important because in many machine learning applications, especially in time-series analysis, preserving temporal dependencies is critical.

+ How well the mapping **preserve the information**.

> 20250102
>
> + It is very difficult to integrate multi-model data. Let us begin from single modal - EEG.







+ Homomorphic
  $$
  f(a\circ b) = f(a)\circ'f(b)\\
  f(M_i^k) =f(M_i)\circ'f(M_i)\circ'...\circ' f(M_i)
  $$


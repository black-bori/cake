# Project name: Cake


## Project overview
- This is an AI inference suite that aims for creating a library to read AI model file and run inference on CPU and GPU. On top of the library, command line tool is provided to run inference on the model files.
- First goal is to run resnet-50 model.


## Project requirements

### Supported OS
- Linux
Later, we will need to support Windows. However, Linux is considered as the only supported OS for now. 

### Supported hardware
- CPU
Later, we will need to support nVidia GPU and Intel iGPU. However, CPU is considered as the only supported hardware for now.

### Supported model formats
- ONNX

### Supported primitive types
For now, we only support primitives for resnet-50.
- Convolution
- MatMul
- Add
- Relu
- GlobalAveragePool
- Reshape
- Transpose
- Squeeze
- Unsqueeze

### Supported data types
- FP32
Later, we will need to support INT8. Also, when we support GPU, we will need to support FP16. For now, FP32 is considered as the only supported data type.

### Inference functionalities
- Arbitrary batch size
- Number of repeated inferences or amount of time to run inference
- Profiling

### Library interface
- Provide an API to load a model file.
- Provide an API to run inference on the model file.
- Provide an API to unload the model file.
- Provide an API to get the model file information.
- Provide an API to get the inference result.

### Command line tool interface
- Provide options to specify a model file and an image file.
- Provide all the options for the library interface.


## Project architecture

### Library
- Library name is cake. libcake.so in Linux, and cake.dll in Windows.
- Use C++17.
- Use CMake for build.
- For coding style, follow Google C++ Style Guide. Use snake_case for function and variable names. Use PascalCase for class names.
- To handle ONNX model file, use libonnxruntime.
- If we need to have Linux specific code, create abstract interface and implement it for Linux.
- Define a structure for each primitive. A primitive is a basic operation in a model, and has input and output tensors. Depending on the primitive type, the primitive may have additional attributes.
- Define a structure for a model. A model is a collection of primitives, and there are directed edges between the primitives.
- Define a structure for a tensor. A tensor is a data structure that has a shape, a data type, memory layout, and buffer.
- For each primitive type, implement kernels for CPU.
- To handle memory allocation and deallocation, use memory pool.
- Use gtest for unit tests.

### Command line tool
- Use C++17.
- Use CMake for build.

### Directory structure
- lib
    - cmake
    - src
    - include
    - test
- bench
    - cmake
    - src
    - include
    - test
- third_party
    

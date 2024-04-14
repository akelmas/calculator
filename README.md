# Calculator

This repo contains source code for calculator app.

It performs basic mathematical operations such as sum, subtract, multiply and divide.

## Requirements

- cmake >= 3.15
- conan >= 2.0
- gcc >= 12.2.0

## How to build

```
conan install conanfile.txt --build=missing
cmake --preset conan-<build_type>
```

> **build_type = [Release, Debug]**

## How to test

```
cd <build_dir> && ./test_calculator
```

## How to run

```
cd <build_dir> && ./calculator
```


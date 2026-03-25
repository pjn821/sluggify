# Sluggify

## Motivation

Sluggify is a simple C++ CLI tool that converts text into clean, URL-friendly slugs.

Its main feature is automatically prefixing the current date (YYMMDD), making it useful for:

* File naming
* Blog posts
* Daily versioning

---

## Quick Start

### Clone the repository

```bash
git clone https://github.com/pjn821/sluggify.git
cd sluggify
```

### Build

```bash
g++ sluggify.cpp -o sluggify
```

### Run

```bash
./sluggify "Your text here"
```

---

## Usage

Convert any string into a slug with a date prefix:

```bash
./sluggify "Meu Arquivo Novo"
```

Output:

```bash
251205-meu-arquivo-novo
```

### Behavior

* Converts to lowercase
* Replaces spaces with hyphens
* Removes special characters
* Adds current date (YYMMDD) as prefix

### More Examples

```bash
./sluggify "Hello World!"
# output: 251205-hello-world

./sluggify "C++ é incrível!!!"
# output: 251205-c-plus-plus-e-incrivel
```

---

## Contributing

### Clone the repo

```bash
git clone https://github.com/pjn821/sluggify.git
cd sluggify
```

### Build

```bash
g++ sluggify.cpp -o sluggify
```

### Run tests (if added)

```bash
# add your tests here
```

### Submit a pull request

If you'd like to contribute, fork the repository and open a pull request to the `main` branch.

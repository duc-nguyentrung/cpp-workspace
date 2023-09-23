# CodeSandbox supports debian & ubuntu based images
FROM ubuntu

# Example; install htop by default
RUN apt update -y && apt install -y build-essential manpages-dev

# The project will be mounted in /workspace by default

# Every new shell will open inside the built container

# On top of this build, we install `zsh`, `git` and `docker` as additional
# Docker layers.

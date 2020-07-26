
FROM debian:buster

ARG BISON_VERSION=2:3.3.2.dfsg-1

RUN true \
 && apt-get update \
 && apt-get install -y bison=$BISON_VERSION \
 && apt-get clean \
 && :

WORKDIR    "/"
ENTRYPOINT [ "/usr/bin/bison" ]

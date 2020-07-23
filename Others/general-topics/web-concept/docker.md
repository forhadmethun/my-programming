# Basic Docker
```
.
├── Dockerfile
└── src
    └── index.php

```

```php
<?
echo "hello forhad, I know she loves me!!!";
```

```
#DockerFile
FROM php:7.0-apache
COPY src/ /var/www/html
EXPOSE 80
```
```
   docker build -t hello-world .
   docker run -p 80:80 hello-world
   docker run -p 80:80 -v ~/Documents/Programming/others/docker/src/:/var/www/html/ hello-world
   docker ps -a
   docker images
   docker rm $(docker ps -a -f status=exited -q) #delete

   docker run -it --name lahb --rm -v ~/Documents/:/my-data ubuntu bash
   #ls
   #cd my-data
```

```
FROM ubuntu
RUN apt-get upgrade && apt-get update && apt-get  install -y python
```
```
 docker build -t bla .
 docker images
 docker run -it bla
 python
```
### Installation of Docker compose on Linux Systems
``` 
curl -L "https://github.com/docker/compose/releases/download/1.25.0/docker-compose-$(uname-s)-$(uname -m)"-o/usr/local/bin/docker-compose
ln -s /usr/local/bin/docker-compose /usr/bin/docker-compose
systemctl unmask docker.service
systemctl unmask docker.socket
docker ps
docker images
docker --version
mkdir /home/docker_compose01
vim /home/docker_compose01/docker-compose.yml
# --
"version: '3'
services:
  mysql_database:
    image: 'mysql:latest'
    environment:
      MYSQL_ROOT_PASSWORD: ""password""
  web_test:
    image: 'nginx:latest'"
# --

docker ps
```
```
# https://github.com/jakewright/tutorials/tree/master/docker/02-docker-compose
docker-compose up
docker-compose stop


docker-compose up - d
docker-compose down

docer config #check config file validity

docker-compose up -d --scale database=4
```

```
 mkdir -p /user/share/nginx/html
#docker volume
docker volume
docker volume create vol_name
mkdir -p /user/share/nginx/html 
docker run -d --name nginx-test --mount source=vol_name,target=/user/share/nginx/html nginx:latest
#docker mount
mkdir -p /opt/nginx/html
docker run -d -it --name nginx-test-bind --mount type=bind,source=/opt/nginx/html,target=/user/share/nginx/html nginx:latest

```
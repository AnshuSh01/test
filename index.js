const http = require('http');
const fs = require('fs');
const { url } = require('inspector');

const hostname = '127.0.0.1';
const port = 3000;
const home = fs.readFileSync('index.html')
const submit = fs.readFileSync('./submit.html')

const server = http.createServer((req, res) => {
    console.log(req.url);
    url = req.url;

    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    if (url == '/home') {
        res.end(home);
    }
    else if(url == '/about'){
        res.end(submit);
    }
     else if (url == '/submit') {
        res.end(submit);
    } else {

        res.end("<h1>Error 404</h1>");

    }
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});
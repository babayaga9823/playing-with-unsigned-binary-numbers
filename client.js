const express = require('express')
const app = express()
const port = process.env.PORT || 3000

// Define paths for Express config
const publicDirectoryPath ='./';


// Setup static directory to serve
app.use(express.static(publicDirectoryPath))

app.post('', (req, res) => {
    console.log(req);
    res.send({got:"Working"})
})

app.get('', (req, res) => {
    console.log(req);
    res.send({got:"Welcome to page"})
})

app.get('/text', (req, res) => {
    console.log(req);
    res.send("Welcome to page")
})

app.listen(port, () => {
    console.log('Server is up on port ' + port)
})
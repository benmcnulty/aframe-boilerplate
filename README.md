# aframe-boilerplate
## Webpack Boilerplate for A-Frame Projects
---
  
Clone this repository for a default A-Frame development environment.  
This template includes preconfigured tooling to reduce friction when starting an A-Frame project.  
Working understanding of Git, CLI, Node, HTML, JavaScript, and A-Frame are required.  
NPM and Webpack are recommended.  
  

**Attention Junior Developers**  
Don't worry about understanding everything about each of the tools in use here, 
that knowledge will be gained through experience. 
You can use this boilerplate to add A-Frame entities here ([index.inc](/src/html/index.inc)) and define custom components here ([components.js](/src/js/components.js)) without getting overwhelmed with the details of templating, preprocessing, or modules.  
  
Feel free to reach out on Twitter if you have questions, are struggling, or just want to chat with someone who also thinks in code. I'm happy to know this template is in use and even happier to help you use it.  
  
[@benmcnulty](https://twitter.com/BenMcNulty)  
&nbsp;  
&nbsp;  

### Getting Started
1. Use this repository as a template for creating a new repository.
2. Clone the new repository to a local development folder.
3. Run NPM Scripts from a command line in your cloned folder to *Install* Node Packages and *Start* Development Environment:
```sh
npm install && npm start
```
  
### General Use
* Add A-Frame entities and link components in [index.inc](/src/html/index.inc) 
* Define custom components in [components.js](/src/js/components.js)
  
### Current Build Tooling
* NPM Scripts Build Processes: [package.json](/package.json)
* Webpack Dev Environment & Bundler: [webpack.config.js](/webpack.config.js)
* HTML from Lodash Template: [index.inc](/src/html/index.inc)
* CSS from Sass Stylesheet: [style.scss](/src/css/style.scss)
* JavaScript from Webpack Bundle: [index.js](/src/js/index.js)
  
### Additional Tooling
* Transpiling with Babel
* Linting with JSHint
  
### Build Notes
* Development environment clears [docs](/docs/) folder and serves bundle from memory with live-reloading.
* Production builds to [docs](/docs/) folder for publishing to GitHub Pages and locally serves a transpiled, concatenated, minified bundle.
* Default production build is public on GitHub Pages: [A-Frame with Webpack Boilerplate](https://benmcnulty.github.io/aframe-boilerplate/)
  
### NPM Scripts
#### Install Node Packages
```sh
npm install
```
  
#### Start Developer Environment
```sh
npm start
```
  
#### JavaScript Linting
```sh
npm run lint
```
  
#### Production Build & Preview
```sh
npm run start:prod
```
  
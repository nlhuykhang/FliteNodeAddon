# FliteNodeAddon
<h2>Vietnamese synthesis addon for Nodejs</h2>

To use this, first you have to rebuild it by node-gyp on Linux<br>

The addon is based on Flite, purely C project, so I had to turn the code to C++ type so that it is now compatible with node-gyp a C++ compiler<br>
I also turn the formant of input text from unicode to telex to avoid problem with database buried in code in compile process<br>

To build:<br>

node-gyp configure build<br>

Test:<br>

node hello.js "text to synthesis here"<br>

Example:<br>

node hello.js "xin chafo casc bajn"

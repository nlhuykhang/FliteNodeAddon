var flite = require('./build/Release/flite'),
	exec = require('child_process').exec,
	text = process.argv[2],
	start, end;


start = new Date().getTime();

flite.text2wave(text, Math.random().toString() + '.wav', function(wavName){

	end = new Date().getTime();

	console.log('time: ' + (end - start));

});
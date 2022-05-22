var socket  = new WebSocket('ws://localhost:8080');

socket.onopen = function(e) {
	console.log('Socket open!');
}

socket.onmessage = function(e) {
	console.log(e.data);
}

socket.onerror = function(e) {
	console.danger(e.message);
};

function sendMessage() {

	var message = {
		type: 'message',
		text: 'XD',
		id:   1,
		date: Date.now()
	};

	socket.send(JSON.stringify(message));
}

var facebookProfile={
	name: "Laszlo",
	friends:100,
	messages: ["this is my latest project"],
	postMessage:function(newM){
	facebookProfile.messages.push(newM);
	},
	deleteMessage: function(i){
	facebookProfile.messages.splice(i,1);
	},
	addFriend: function(){
	facebookProfile.friends+=1;
	},
	removeFriend: function(){
	facebookProfile.friends-=1;
	}
};

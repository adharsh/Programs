function init(){

	var h1tags = document.getElementsByTagName("h1");

	h1tags[0].onclick = changeColor;
}

function changeColor(){
	this.innerHTML = "Click Again";

	var randomcolor = '#'+Math.floor(Math.random()*16777215).toString(16);
	this.style.color = randomcolor;
}

function toggleImg(){
	var img = document.getElementById("danceImg");
	var isImgVisible = img.style.visibility == "visible";
	img.style.visibility = isImgVisible ? "hidden" : "visible";
}


onload = init;
// Can set variables to functions, just calls them and assigns return value
// onload is called when function is called
#include <SFML/Graphics.hpp>

using namespace sf;

//This is where our game starts from
int main(){
	//Create a video mode object
	VideoMode vm(1920,1080);
	
	//Create and open a window for the game
	RenderWindow window(vm,"Timber!!!",Style::Fullscreen);
	
	//Create a texture to hold a graphic on the GPU
	Texture textureBackground;
	
	//Load a graphic into the texture
	textureBackground.loadFromFile("/home/student/Desktop/2241004191/GPWC++/PROJECT/TIMBER/GRAPHICS/background.png");
	
	//Create a sprite
	Sprite spriteBackground;
	
	//Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);
	
	//Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0,0);
	
	//Make a tree sprite
	Texture textureTree;
	textureTree.loadFromFile("/home/student/Desktop/2241004191/GPWC++/PROJECT/TIMBER/GRAPHICS/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(810,0);
	
	//Prepare the bee
	Texture textureBee;
	textureBee.loadFromFile("/home/student/Desktop/2241004191/GPWC++/PROJECT/TIMBER/GRAPHICS/bee.png");
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0,800);
	
	//Is the bee currently moving?
	bool beeActive=false;
	
	//How fast can the bee fly
	float beeSpeed=0.0f;
	
	//make 3 clous sprites from 1 texture
	Texture textureCloud;
	
	//Load 1 new texture
	textureCloud.loadFromFile("/home/student/Desktop/2241004191/GPWC++/PROJECT/TIMBER/GRAPHICS/cloud.png");
	
	//3 New sprites with the same texture
	Sprite spriteCloud1;
	Sprite spriteCloud2;
	Sprite spriteCloud3;
	spriteCloud1.setTexture(textureCloud);
	spriteCloud2.setTexture(textureCloud);
	spriteCloud3.setTexture(textureCloud);
	
	//Position the clouds on the left of the screen
	//at different heights
	spriteCloud1.setPosition(0,0);
	spriteCloud2.setPosition(0,250);
	spriteCloud3.setPosition(0,500);
	
	//Are the clouds currently on screen?
	bool cloud1Active=false;
	bool cloud2Active=false;
	bool cloud3Active=false;

	//How fast is each cloud?
	float cloud1Speed=0.0f;
	float cloud2Speed=0.0f;
	float cloud3Speed=0.0f;
	
	//Variables to control time itself
	Clock clock;
	
	while(window.isOpen()){
		/*
		*****************************************
		Handle the player input
		*****************************************
		*/
	
		if(Keyboard::isKeyPressed(Keyboard::Escape)){
			window.close();
		}
	
		/*
		*****************************************
		Update the scene
		*****************************************
		*/
		
		//Measure time
		Time dt=clock.restart();
		
		//Setup the bee
		if(!beeActive){
			//How fast is the bee
			srand((int)time(0));
			beeSpeed=(rand()%200)+200;
			
			//How high is the bee
			srand((int)time(0)*10);
			float height=(rand()%500)+500;
			spriteBee.setPosition(2000,height);
			beeActive=true;
		}
		else
		//Move the bee
		{
			spriteBee.setPosition(spriteBee.getPosition().x-(beeSpeed*dt.asSeconds()),spriteBee.getPosition().y);
			
			//Has the bee reached the left-hand edge of the screen?
			if(spriteBee.getPosition().x<-100){
				//Set it up ready to be a whole new bee next frame
				beeActive=false;
			}
		}
	
		/*
		******************************************
		Draw the scene
		******************************************
		*/
	
		//Clear everything from the last frame
		window.clear();
	
		//Draw our game scene here
		window.draw(spriteBackground);
		
		//Draw the clouds
		window.draw(spriteCloud1);
		window.draw(spriteCloud2);
		window.draw(spriteCloud2);
		
		//Draw the tree
		window.draw(spriteTree);
		
		//Draw the insect
		window.draw(spriteBee);
	
		//Show everything we just drew
		window.display();
	}
	return 0;
}

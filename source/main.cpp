#include <nds.h>
#include <gl2d.h>
#include <stdio.h>
#define BRAD_PI (1 << 14)
	
int main(void) {

	int playerY1 = 21;
	int playerY2 = 21;
	int playerX1 = 28;
	int playerX2 = 28;

	videoSetMode( MODE_5_3D );
	glScreen2D();

	while(1) {
		

		glBegin2D();
		/* Draw Player */
		glBoxFilled( playerY1, playerY2, playerX1, playerX2, RGB15(224,187,27));

		/* Draw maze */
		glBoxFilled(11, 20, 15, 141, RGB15(51,51,51));
		glBoxFilled(16, 137, 223, 141, RGB15(51,51,51));
		glBoxFilled(16, 92, 37, 96, RGB15(51,51,51));
		glBoxFilled(34, 20, 247, 24, RGB15(51,51,51));
		glBoxFilled(242, 20, 247, 141,RGB15(51,51,51));
		glBoxFilled(38, 112, 85, 116, RGB15(51,51,51));
		glBoxFilled(103, 115, 107, 136, RGB15(51,51,51));
		glBoxFilled(81, 25, 85, 67, RGB15(51,51,51));
		glBoxFilled(35, 44, 60, 49, RGB15(51,51,51));
		glBoxFilled(35, 50, 40, 72, RGB15(51,51,51));
		glBoxFilled(41, 68, 107, 72, RGB15(51,51,51));
		glBoxFilled(56, 73, 61, 93, RGB15(51,51,51));
		glBoxFilled(150, 25, 154, 46, RGB15(51,51,51));
		glBoxFilled(103, 73, 107, 94, RGB15(51,51,51));
		glBoxFilled(80, 90, 102, 94, RGB15(51,51,51));
		glBoxFilled(80, 95, 84, 111, RGB15(51,51,51));
		glBoxFilled(127, 94, 131, 116, RGB15(51,51,51));
		//glBoxFilled(132, 112, 177, 116, RGB15(51,51,51));
		//glBoxFilled(150, 117, 61, 93, RGB15(51,51,51));
		glBoxFilled(198, 115, 241, 119, RGB15(51,51,51));
		glBoxFilled(177, 111, 174, 97, RGB15(51,51,51));
		glBoxFilled(150, 92, 195, 96, RGB15(51,51,51));
		glBoxFilled(200, 50, 196, 96, RGB15(51,51,51));
		glBoxFilled(127, 72, 131, 50, RGB15(51,51,51));
		glBoxFilled(223, 49, 178, 44, RGB15(51,51,51));
		glBoxFilled(173, 44, 177, 69, RGB15(51,51,51));
		glBoxFilled(131, 49, 106, 44, RGB15(51,51,51));
		glBoxFilled(225, 68, 241, 72, RGB15(51,51,51));
		glBoxFilled(219, 68, 224, 93, RGB15(51,51,51));
		glBoxFilled(173, 44, 222, 49, RGB15(51,51,51));
		glBoxFilled(197, 72, 219, 78, RGB15(51,51,51));
		glBoxFilled(191, 92, 197, 96, RGB15(51,51,51));
		glBoxFilled(175, 97, 176, 97, RGB15(51,51,51));
		glBoxFilled(127, 45, 131, 50, RGB15(51,51,51));
		glBoxFilled(127, 71, 131, 94, RGB15(51,51,51));
		glBoxFilled(177, 119, 173, 97, RGB15(51,51,51));
		glBoxFilled(85, 95, 85, 111, RGB15(51,51,51));
		glBoxFilled(174, 97, 178, 119, RGB15(51,51,51));
		glBoxFilled(199, 96, 195, 49, RGB15(51,51,51));
		/* player movement */
		scanKeys();
		int keys = keysHeld();
        if(keys & KEY_DOWN) {
			//playerY1--;
			playerY2++;
			//playerX1--;
			playerX2++;
		} else if(keys & KEY_UP) {
			//playerY1--;
			playerY2--;
			//playerX1--;
			playerX2--;
		} else if(keys & KEY_LEFT) {
			playerY1--;
			//playerY2--;
			playerX1--;
			//playerX2--;
		} else if(keys & KEY_RIGHT) {
			playerY1++;
			//playerY2--;
			playerX1++;
			//playerX2--;
		}
		
		if (playerY2 > 137) {
			glBoxFilled(253, 2, 2, 190, RGB15(51,51,51));
		}
		if (playerX2 > 137) {
			glBoxFilled(253, 2, 2, 190, RGB15(51,51,51));
		}
		glEnd2D();
        glFlush(0);                    
		
	}

	return 0;
}

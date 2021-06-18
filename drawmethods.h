void drawRoad()
{
    glPushMatrix();

        glColor3ub(213,222,24);
        glBegin(GL_QUADS);
            glVertex3f(-1,-1,0);
            glVertex3f(-1,1,0);
            glVertex3f(1,1,0);
            glVertex3f(1,-1,0);
        glEnd();

        glColor3ub(128,128,128);
        glBegin(GL_QUADS);
            glVertex3f(-.70,-1,0);
            glVertex3f(-.70,1,0);
            glVertex3f(.70,1,0);
            glVertex3f(.70,-1,0);
        glEnd();

            glColor3ub(255,255,255);
            glPushMatrix();
                glTranslatef(0,_move1,0);
                glBegin(GL_QUADS);
                    glVertex3f(-.30,1.70,0);
                    glVertex3f(-.30,1.10,0);
                    glVertex3f(-.20,1.10,0);
                    glVertex3f(-.20,1.70,0);
                glEnd();
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,_move2,0);
                glBegin(GL_QUADS);
                    glVertex3f(-.30,1,0);
                    glVertex3f(-.30,.40,0);
                    glVertex3f(-.20,.40,0);
                    glVertex3f(-.20,1,0);
                glEnd();
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,_move3,0);
                glBegin(GL_QUADS);
                    glVertex3f(-.30,.30,0);
                    glVertex3f(-.30,-.3,0);
                    glVertex3f(-.20,-.3,0);
                    glVertex3f(-.20,.30,0);
                glEnd();
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,_move4,0);
                glBegin(GL_QUADS);
                    glVertex3f(-.30,-.40,0);
                    glVertex3f(-.30,-1,0);
                    glVertex3f(-.20,-1,0);
                    glVertex3f(-.20,-.40,0);
                glEnd();
            glPopMatrix();

            //Right white
            glPushMatrix();
                glTranslatef(0,_move1,0);
                glBegin(GL_QUADS);
                    glVertex3f(.30,1.70,0);
                    glVertex3f(.30,1.10,0);
                    glVertex3f(.20,1.10,0);
                    glVertex3f(.20,1.70,0);
                glEnd();
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,_move2,0);
                glBegin(GL_QUADS);
                    glVertex3f(.30,1,0);
                    glVertex3f(.30,.40,0);
                    glVertex3f(.20,.40,0);
                    glVertex3f(.20,1,0);
                glEnd();
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,_move3,0);
                glBegin(GL_QUADS);
                    glVertex3f(.30,.30,0);
                    glVertex3f(.30,-.3,0);
                    glVertex3f(.20,-.3,0);
                    glVertex3f(.20,.30,0);
                glEnd();
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,_move4,0);
                glBegin(GL_QUADS);
                    glVertex3f(.30,-.40,0);
                    glVertex3f(.30,-1,0);
                    glVertex3f(.20,-1,0);
                    glVertex3f(.20,-.40,0);
                glEnd();
            glPopMatrix();

    glPopMatrix();
}

void drawDriver()
{
    if(carPos == 2)
    {
        glTranslatef(.53,0,0);
    }
    else if(carPos == 3)
    {
        glTranslatef(1.05,0,0);
    }
        glPushMatrix();
            glColor3ub(255,0,0);
            glBegin(GL_POLYGON);
                glVertex3f(-.55,-.7,0);
                glVertex3f(-.6,-.75,0);
                glVertex3f(-.6,-.85,0);
                glVertex3f(-.55,-.9,0);
                glVertex3f(-.5,-.9,0);
                glVertex3f(-.45,-.85,0);
                glVertex3f(-.45,-.75,0);
                glVertex3f(-.5,-.7,0);
            glEnd();

            glColor3ub(0,0,255);
            glBegin(GL_POLYGON);
                glVertex3f(-.6,-.75,0);
                glVertex3f(-.6,-.85,0);
                glVertex3f(-.45,-.85,0);
                glVertex3f(-.45,-.75,0);
            glEnd();

            glColor3ub(0,0,255);
            glBegin(GL_POLYGON);

                glVertex3f(-.63,-.88,0);
                glVertex3f(-.63,-.9,0);
                glVertex3f(-.42,-.9,0);
                glVertex3f(-.42,-.88,0);

            glEnd();

            glColor3ub(0,0,0);
            glPointSize(10);
            glBegin(GL_POINTS);
                glVertex3f(-.6,-.75,0);
                glVertex3f(-.6,-.85,0);
                glVertex3f(-.45,-.85,0);
                glVertex3f(-.45,-.75,0);
            glEnd();

        glPopMatrix();
}

void drawOpCar(int pos)
{
    if(pos == 1)
    {
        glPushMatrix();
            glColor3ub(255,127,39);
            glBegin(GL_QUADS);
                glVertex3f(-.6,.75,0);
                glVertex3f(-.6,.95,0);
                glVertex3f(-.45,.95,0);
                glVertex3f(-.45,.75,0);
            glEnd();

            glColor3ub(0,0,0);
            glPointSize(15);
            glBegin(GL_POINTS);
                glVertex3f(-.575,.72,0);
                glVertex3f(-.475,.72,0);
            glEnd();

            glColor3ub(255,0,255);
            glBegin(GL_QUADS);
                glVertex3f(-.575,.75,0);
                glVertex3f(-.575,.7,0);
                glVertex3f(-.475,.7,0);
                glVertex3f(-.475,.75,0);
            glEnd();
        glPopMatrix();
    }
    else if(pos == 2)
    {
        glPushMatrix();
            glColor3ub(255,127,39);
            glBegin(GL_QUADS);
                glVertex3f(-.075,.75,0);
                glVertex3f(-.075,.95,0);
                glVertex3f(.075,.95,0);
                glVertex3f(.075,.75,0);
            glEnd();

            glColor3ub(0,0,0);
            glPointSize(15);
            glBegin(GL_POINTS);
                glVertex3f(-.05,.72,0);
                glVertex3f(.05,.72,0);
            glEnd();

            glColor3ub(255,0,255);
            glBegin(GL_QUADS);
                glVertex3f(-.05,.75,0);
                glVertex3f(-.05,.7,0);
                glVertex3f(.05,.7,0);
                glVertex3f(.05,.75,0);
            glEnd();
        glPopMatrix();
    }
    else if(pos == 3)
    {
        glPushMatrix();
            glColor3ub(255,127,39);
            glBegin(GL_QUADS);
                glVertex3f(.6,.75,0);
                glVertex3f(.6,.95,0);
                glVertex3f(.45,.95,0);
                glVertex3f(.45,.75,0);
            glEnd();

            glColor3ub(0,0,0);
            glPointSize(15);
            glBegin(GL_POINTS);
                glVertex3f(.575,.72,0);
                glVertex3f(.475,.72,0);
            glEnd();

            glColor3ub(255,0,255);
            glBegin(GL_QUADS);
                glVertex3f(.575,.75,0);
                glVertex3f(.575,.7,0);
                glVertex3f(.475,.7,0);
                glVertex3f(.475,.75,0);
            glEnd();
        glPopMatrix();
    }
}

void drawMenu()
{
    glPushMatrix();

        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
            glVertex3f(-.45,.65,0);
            glVertex3f(-.45,-.65,0);
            glVertex3f(.45,-.65,0);
            glVertex3f(.45,.65,0);
        glEnd();

        glColor3ub(0,0,255);
        glBegin(GL_QUADS);
            glVertex3f(-.4,.6,0);
            glVertex3f(-.4,-.6,0);
            glVertex3f(.4,-.6,0);
            glVertex3f(.4,.6,0);
        glEnd();

        glColor3ub(0,0,0);

        glBegin(GL_QUADS);
            glVertex3f(-.31,.41,0);
            glVertex3f(-.31,.19,0);
            glVertex3f(.31,.19,0);
            glVertex3f(.31,.41,0);
        glEnd();

        glBegin(GL_QUADS);
            glVertex3f(-.31,.11,0);
            glVertex3f(-.31,-.11,0);
            glVertex3f(.31,-.11,0);
            glVertex3f(.31,.11,0);
        glEnd();

        glBegin(GL_QUADS);
            glVertex3f(-.31,-.41,0);
            glVertex3f(-.31,-.19,0);
            glVertex3f(.31,-.19,0);
            glVertex3f(.31,-.41,0);
        glEnd();

        glColor3ub(128,128,128);

        glBegin(GL_QUADS);
            glVertex3f(-.3,.4,0);
            glVertex3f(-.3,.2,0);
            glVertex3f(.3,.2,0);
            glVertex3f(.3,.4,0);
        glEnd();

        glBegin(GL_QUADS);
            glVertex3f(-.3,.1,0);
            glVertex3f(-.3,-.1,0);
            glVertex3f(.3,-.1,0);
            glVertex3f(.3,.1,0);
        glEnd();

        glBegin(GL_QUADS);
            glVertex3f(-.3,-.4,0);
            glVertex3f(-.3,-.2,0);
            glVertex3f(.3,-.2,0);
            glVertex3f(.3,-.4,0);
        glEnd();

        //text
        Sprint(-.07,.28,start);
        Sprint(-.13,-.02,hScore);
        Sprint(-.07,-.32,exitGame);


    glPopMatrix();
}
void drawHighScore()
{
    glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
            glVertex3f(-.45,.65,0);
            glVertex3f(-.45,-.65,0);
            glVertex3f(.45,-.65,0);
            glVertex3f(.45,.65,0);
        glEnd();

        glColor3ub(0,0,255);
        glBegin(GL_QUADS);
            glVertex3f(-.4,.6,0);
            glVertex3f(-.4,-.6,0);
            glVertex3f(.4,-.6,0);
            glVertex3f(.4,.6,0);
        glEnd();

        Sprint(-.13,.5,hScore);
        float scPos = .4;
        for(int i = 0; i < 10; i++)
        {
            if(highScore[i] < 10)
                highScore[i] = 0;
            itoa(highScore[i], buffer, 10);
            SprintScore(buffer,6,-.08,scPos);
            scPos -= .1;
        }


    glPopMatrix();
}

void drawScoreBoard()
{
    glColor3ub(0,0,0);
        glBegin(GL_QUADS);
            glVertex3f(.75,.9,0);
            glVertex3f(.75,.4,0);
            glVertex3f(1,.4,0);
            glVertex3f(1,.9,0);
        glEnd();

        glColor3ub(0,0,255);
        glBegin(GL_QUADS);
            glVertex3f(.77,.88,0);
            glVertex3f(.77,.42,0);
            glVertex3f(.98,.42,0);
            glVertex3f(.98,.88,0);
        glEnd();

    Sprint(.8,.8,scoreText);
    itoa (score, buffer, 10);
    SprintScore(buffer, 6, .8,.75);

    Sprint(.8,.65,levelText);
    itoa (level, buffer, 10);
    SprintScore(buffer, 2, .85,.60);

    Sprint(.8,.5,mphText);
    itoa (mph, buffer, 10);
    SprintScore(buffer, 3, .83,.45);
}
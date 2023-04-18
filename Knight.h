//
//  Knight.h
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 18.04.2023.
//

#ifndef Knight_h
#define Knight_h

#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>

void drawKnight()
{
    glBegin(GL_QUADS);
    
    glColor3ub(192, 192, 192);
    glVertex2f(419, 68);
    glVertex2f(430, 68);
    glVertex2f(430, 123);
    glVertex2f(419, 123);
    
    glColor3ub(192, 192, 192);
    glVertex2f(419, 123);
    glVertex2f(419, 192);
    glVertex2f(406, 192);
    glVertex2f(406, 123);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 123);
    glVertex2f(443, 123);
    glVertex2f(443, 150);
    glVertex2f(430, 150);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 150);
    glVertex2f(471, 150);
    glVertex2f(471, 164);
    glVertex2f(430, 164);
    
    glColor3ub(192, 192, 192);
    glVertex2f(443, 164);
    glVertex2f(458, 164);
    glVertex2f(458, 177);
    glVertex2f(443, 177);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 177);
    glVertex2f(471, 177);
    glVertex2f(471, 192);
    glVertex2f(458, 192);
    
    glColor3ub(192, 192, 192);
    glVertex2f(471, 193);
    glVertex2f(484, 193);
    glVertex2f(484, 219);
    glVertex2f(471, 219);
    
    glColor3ub(192, 192, 192);
    glVertex2f(471, 137);
    glVertex2f(471, 150);
    glVertex2f(549, 150);
    glVertex2f(549, 137);
    
    glColor3ub(192, 192, 192);
    glVertex2f(549, 150);
    glVertex2f(549, 164);
    glVertex2f(577, 164);
    glVertex2f(577, 150);
    
    glColor3ub(192, 192, 192);
    glVertex2f(577, 164);
    glVertex2f(590, 164);
    glVertex2f(590, 177);
    glVertex2f(577, 177);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 177);
    glVertex2f(604, 177);
    glVertex2f(604, 207);
    glVertex2f(590, 207);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 207);
    glVertex2f(616, 207);
    glVertex2f(617, 234);
    glVertex2f(590, 234);
    
    //eyes
    glColor3ub(255, 0, 255);
    glVertex2f(590, 220);
    glVertex2f(590, 247);
    glVertex2f(497, 247);
    glVertex2f(497, 220);
    
    glColor3ub(192, 192, 192);
    glVertex2f(616, 207);
    glVertex2f(630, 207);
    glVertex2f(630, 192);
    glVertex2f(616, 192);
    
    glColor3ub(192, 192, 192);
    glVertex2f(630, 192);
    glVertex2f(642, 192);
    glVertex2f(642, 137);
    glVertex2f(630, 137);
    
    glColor3ub(192, 192, 192);
    glVertex2f(630, 137);
    glVertex2f(630, 82);
    glVertex2f(616, 82);
    glVertex2f(616, 137);
    
    glColor3ub(192, 192, 192);
    glVertex2f(617, 137);
    glVertex2f(603, 137);
    glVertex2f(603, 177);
    glVertex2f(617, 177);
    
    glColor3ub(192, 192, 192);
    glVertex2f(417, 192);
    glVertex2f(430, 192);
    glVertex2f(430, 261);
    glVertex2f(417, 261);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 234);
    glVertex2f(430, 207);
    glVertex2f(443, 207);
    glVertex2f(443, 234);
    
    glColor3ub(192, 192, 192);
    glVertex2f(443, 220);
    glVertex2f(443, 234);
    glVertex2f(471, 234);
    glVertex2f(471, 220);
    
    glColor3ub(192, 192, 192);
    glVertex2f(536, 247);
    glVertex2f(564, 247);
    glVertex2f(564, 303);
    glVertex2f(536, 303);
    
    glColor3ub(192, 192, 192);
    glVertex2f(484, 302);
    glVertex2f(484, 316);
    glVertex2f(590, 316);
    glVertex2f(590, 302);
    
    glColor3ub(192, 192, 192);
    glVertex2f(563, 316);
    glVertex2f(524, 316);
    glVertex2f(524, 330);
    glVertex2f(563, 330);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 289);
    glVertex2f(458, 344);
    glVertex2f(484, 344);
    glVertex2f(484, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 261);
    glVertex2f(444, 261);
    glVertex2f(444, 289);
    glVertex2f(430, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(406, 289);
    glVertex2f(406, 302);
    glVertex2f(484, 302);
    glVertex2f(484, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(406, 302);
    glVertex2f(406, 316);
    glVertex2f(391, 316);
    glVertex2f(391, 302);
    
    glColor3ub(192, 192, 192);
    glVertex2f(378, 317);
    glVertex2f(391, 317);
    glVertex2f(391, 344);
    glVertex2f(378, 344);
    
    glColor3ub(192, 192, 192);
    glVertex2f(391, 344);
    glVertex2f(405, 344);
    glVertex2f(405, 358);
    glVertex2f(391, 358);
    
    glColor3ub(192, 192, 192);
    glVertex2f(338, 358);
    glVertex2f(338, 371);
    glVertex2f(458, 371);
    glVertex2f(458, 358);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 344);
    glVertex2f(430, 358);
    glVertex2f(458, 358);
    glVertex2f(458, 344);
    
    glColor3ub(192, 192, 192);
    glVertex2f(443, 371);
    glVertex2f(458, 371);
    glVertex2f(458, 454);
    glVertex2f(443, 454);
    
    glEnd();
}


#endif /* Knight_h */

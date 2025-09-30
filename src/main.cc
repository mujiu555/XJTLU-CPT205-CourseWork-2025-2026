#include <GL/freeglut.h>

// Global variables for animation/interaction
float angle = 0.0f;

void display() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  // Example: Animated rotating XJTLU logo
  glRotatef(angle, 0.0f, 0.0f, 1.0f);

  glutSwapBuffers();
}

void update(int value) {
  angle += 2.0f; // Animation speed
  if (angle > 360)
    angle -= 360;
  glutPostRedisplay();
  glutTimerFunc(25, update, 0); // Frame rate control
}

void keyboard(unsigned char key, int x, int y) {
  if (key == 'a') { /* Trigger animation */
  }
}

void mouse(int button, int state, int x, int y) {
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) { /* Handle click */
  }
}

int main(int argc, char **argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutCreateWindow("XJTLU Greeting Card");
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  glutMouseFunc(mouse);
  glutTimerFunc(25, update, 0);
  glEnable(GL_DEPTH_TEST);
  glutMainLoop();
  return 0;
}

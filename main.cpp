//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//deklarasi fungsi

void display();
void init();
void reshape(int, int);

//main program
int main (int argc, char** argv){
    //inisialisasi
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200, 100); //atur sumbu x dan y
    glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
    glutCreateWindow("PROJECT UTS");

    glutDisplayFunc(display);   //fungsi utk menampilkan gambar
    glutReshapeFunc(reshape);   //fungsi utk membuat viewport

    init();

    glutMainLoop(); //looping program utama
}

void init(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void display(){

    //reset
    glClear(GL_COLOR_BUFFER_BIT); //reset tampilan warna menjadi default
    glLoadIdentity();   //reset transformasi misalnya rotasi pada display

    glBegin(GL_TRIANGLES);

    glVertex2f(-1.0, 2.0);
    glVertex2f(-7.0, -1.0);
    glVertex2f(5.0, -1.0);

    glEnd();

    glFlush();

    glBegin(GL_TRIANGLES);

    glVertex2f(3.0, 2.0);
    glVertex2f(-3.0, -1.0);
    glVertex2f(5.0, -1.0);

    glEnd();
    glFlush();

    // bambu kanan
    glBegin(GL_QUADS);
    glColor3f(0,0.7,0.1);
        glVertex2f(9, -5);
        glVertex2f(13, -5);
        glVertex2f(13, 13);
        glVertex2f(9, 13);
// bambu kiri
glBegin(GL_QUADS);
    glColor3f(0,0.7,0.1);
        glVertex2f(-9, -5);
        glVertex2f(-13, -5);
        glVertex2f(-13, 13);
        glVertex2f(-9, 13);
glEnd();
glFlush();
// cerobong
glBegin(GL_QUADS);
    glColor3f(1,1,1);
        glVertex2f(-5, -1);
        glVertex2f(-6, -1);
        glVertex2f(-6, 8);
        glVertex2f(-5, 9);
glEnd();
// tembok rumah
    glBegin(GL_POLYGON);
        glColor3f(1,1,1);
        glVertex2f(-8,5);
        glVertex2f(8,5);
        glVertex2f  (8,-5);
        glVertex2f(-8,-5);
    glEnd();


// atap
        glBegin(GL_POLYGON);
        glColor3f(1,0.2,0);
        glVertex2f(-10,5);
        glVertex2f(10,5);
        glVertex2f(0,8);
    glEnd();
    // jendela kanan
glBegin(GL_POLYGON);
glColor3f(0.9,0.3,0);
glVertex2f(3,-1);
glVertex2f(7,-1);
glVertex2f(7,2);
glVertex2f(3,2);

glEnd();

// jendela kiri
glBegin(GL_POLYGON);
glColor3f(0.9,0.3,0);
glVertex2f(-7,-1);
glVertex2f(-3,-1);
glVertex2f(-3,2);
glVertex2f(-7,2);

glEnd();
    // pintu
glBegin(GL_POLYGON);
        glColor3f(0.9,0.3,0);
        glVertex2f(-2,-4);
        glVertex2f(2,-4);
        glVertex2f(2,1);
        glVertex2f(-2,1);
glEnd();
// pentilasi udara
glBegin(GL_POLYGON);
        glColor3f(0,0,0);
        glVertex2f(3,3);
        glVertex2f(7,3);
        glVertex2f(7,4);
        glVertex2f(3,4);
glEnd();

glBegin(GL_POLYGON);
        glColor3f(0,0,0);
        glVertex2f(-7,3);
        glVertex2f(-3,3);
        glVertex2f(-3,4);
        glVertex2f(-7,4);
glEnd();
//kaca kanan
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(4,0);
glVertex2f(6,0);
glVertex2f(6,1);
glVertex2f(4,1);

glEnd();
//kaca kiri
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(-6,0);
glVertex2f(-4,0);
glVertex2f(-4,1);
glVertex2f(-6,1);

glEnd();

// tanah
    glBegin(GL_POLYGON);
        glColor3f(0,0.1,1);
        glVertex2f(-20,-5);
        glVertex2f(20,-5);
        glVertex2f(20,-4);
        glVertex2f(-20,-4);
    glEnd();
    glFlush();


        // kolam
        glBegin(GL_POLYGON);
        glColor3f(0,1,1);
        glVertex2f(20.0,-16.0);
        glVertex2f(-20.0,-16.0);
        glVertex2f(-20.0,-5.0);
        glVertex2f(20.0,-5.0);
        glEnd();
        glFlush();

       // glBegin(GL_POLYGON);
       //  glColor3f()

     //   glLineWidth(2);
     //   glBegin(GL_LINES);
       // glColor3f(0,0,0);
        //glVertex2f(-18.0,-10.5);
        //glVertex2f(-15.0,-10.5);
        //glVertex2f(-14.0,-10.5);
        //glVertex2f(-11.0,-10.5);
        //glEnd();
        //glFlush();
}

void reshape(int w, int h){
    glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
    glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
    glLoadIdentity();   //reset transformasi misalnya rotasi pada display
    gluOrtho2D(-10, 10, -10, 10);   //setting spesifikasi proyeksi yang diinginkan
    glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}

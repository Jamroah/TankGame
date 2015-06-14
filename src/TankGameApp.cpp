#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class TankGameApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void TankGameApp::setup()
{
}

void TankGameApp::mouseDown( MouseEvent event )
{
}

void TankGameApp::update()
{
}

void TankGameApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( TankGameApp, RendererGl )

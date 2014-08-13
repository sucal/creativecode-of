#ifndef __WALKER_H_H_
#define __WALKER_H_H_

class Walker {
public:
  Walker(float sx, float sy) {
    this->_x = sx;
    this->_y = sy;
    this->_px = sx;
    this->_py = sy;
  }

  virtual ~Walker() {

  }

  void step() {
    this->_px = this->_x;
    this->_py = this->_y;
    this->_x += 10*ofRandom(-1, 1);
    this->_y += 10*ofRandom(-1, 1);
  }



  void plot() {
    ofSetColor(255,0,0,50);
    ofLine(this->_px, this->_py, this->_x, this->_y);
  }



private:
  float _x, _px;
  float _y, _py;
};

#endif //__WALKER_H_H_

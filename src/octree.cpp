#include "octree.h"

namespace myOctree {

std::list<Octree*> nodes;
int Block::iNx = NX_BLOCK;
int Block::iNy = NY_BLOCK;
int Block::iNz = NZ_BLOCK;

}


using namespace myOctree;

int main(int argc, char **argv) {

	Octree root1(0.0,1.0,0.0,1.0,0.0,1.0,0);

	root1.refine();

	write_vtk(nodes);

}


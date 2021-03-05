#include "memory.h"

void initVMBlockToRunQueue();
object getNextVMBlockToRun();
boolean queueVMBlockToRun(object block);
boolean isVMBlockQueued();

void runBlockAfter(object block, object arg, int ticks);
void runSmalltalkProcess(object processToRun);

void queueBlock(object block, object arg);
void runBlock(object block, object arg);



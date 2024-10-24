#ifndef LLVM_TRANSFORMS_KEY_POINT_DETECTION_H
#define LLVM_TRANSFORMS_KEY_POINT_DETECTION_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class KeyPointDectionPass : public PassInfoMixin<KeyPointDectionPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} 

#endif // LLVM_TRANSFORMS_KEY_POINT_DETECTION_H
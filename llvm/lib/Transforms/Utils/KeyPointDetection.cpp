#include "llvm/Transforms/Utils/KeyPointDetection.h"

using namespace llvm;

PreservedAnalyses KeyPointDectionPass::run(Function &F, FunctionAnalysisManager &AM) {
  errs() << F.getName() << "\n";
  return PreservedAnalyses::all();
}
#ifndef _LLVM_H_
#define _LLVM_H_

#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS

#include "Analysis.h"
#include "BitReader.h"
#include "BitWriter.h"
#include "Core.h"
#include "Disassembler.h"
#include "ErrorHandling.h"
#include "ExecutionEngine.h"
#include "Initialization.h"
#include "IRReader.h"
#include "Linker.h"
#include "LinkTimeOptimizer.h"
#include "lto.h"
#include "Object.h"
#include "OrcBindings.h"
#include "Support.h"
#include "Target.h"
#include "TargetMachine.h"
#include "Transforms/IPO.h"
#include "Transforms/PassManagerBuilder.h"
#include "Transforms/Scalar.h"
#include "Transforms/Vectorize.h"
#include "Types.h"

#endif // _LLVM_H_

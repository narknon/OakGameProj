#include "DialogDecisionNode.h"

FDialogDecisionNode::FDialogDecisionNode() {
    this->Parent = 0;
    this->Decision = 0;
    this->TrueResultChild = 0;
    this->FalseResultChild = 0;
    this->UnrelatedResultChild = 0;
    this->ResultBucket = 0;
    this->MaxChildQuality = 0;
}


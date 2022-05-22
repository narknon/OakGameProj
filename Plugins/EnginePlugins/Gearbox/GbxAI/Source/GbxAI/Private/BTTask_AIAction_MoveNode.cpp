#include "BTTask_AIAction_MoveNode.h"
#include "AIAction_MoveNode.h"

UBTTask_AIAction_MoveNode::UBTTask_AIAction_MoveNode() {
    this->Action = CreateDefaultSubobject<UAIAction_MoveNode>(TEXT("AIAction_MoveNode"));
}


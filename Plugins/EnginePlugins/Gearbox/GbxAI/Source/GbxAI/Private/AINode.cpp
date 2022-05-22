#include "AINode.h"
#include "AINodeComponent.h"

class AActor;
class APawn;

void AAINode::OnPawnDepartedNodeCB(AActor* NodeActor, APawn* DepartedPawn) {
}

void AAINode::OnPawnArrivedNodeCB(AActor* NodeActor, APawn* ArrivedPawn) {
}

AAINode::AAINode() {
    this->AINodeComponent = CreateDefaultSubobject<UAINodeComponent>(TEXT("AINodeComponent"));
}


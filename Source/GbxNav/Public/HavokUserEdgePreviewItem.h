#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HavokUserEdgePreviewItem.generated.h"

class AActor;
class UGbxAction;

USTRUCT()
struct FHavokUserEdgePreviewItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UGbxAction> ForwardAction;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UGbxAction> ReverseAction;
    
    GBXNAV_API FHavokUserEdgePreviewItem();
};

